//
//  SHCoreManager.h
//  ShiHui
//
//  Created by Fane on 2018/11/20.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHBaseResponse.h"
#import "SHPathConfig.h"
#import "SHUrlConfig.h"

//状态码
/**
 "200"表示成功
 "400"表示数据错误
 "402"表示登录信息无效
 "403"表示用户未登录
 "500"表示调用失败
 */

typedef enum : NSUInteger {
    MethodTypeGET,
    MethodTypePOST,
    MethodTypePUT,
    MethodTypePATCH,
    MethodTypeDELETE
} MethodType;

NS_ASSUME_NONNULL_BEGIN

///完整数据block
typedef void (^ResultBlock)(NSDictionary * _Nullable dict, SHBaseResponse *response, NSError *error);

@interface ResultHandleModel : NSObject

///请求方式
@property (nonatomic, assign) MethodType method;

///加载提示
@property (nonatomic, strong) NSString *loadingTip;

///是否显示失败时的toast
@property (nonatomic, assign) BOOL showErr;

///业务model类名字符，可以为空
@property (nonatomic, strong) NSString *clsString;

///次要参数及回调结果
@property (nonatomic, strong) ResultBlock resultBlock;

@end

static inline ResultHandleModel * ResultHandleMake(MethodType method,NSString* _Nullable tipLoading,BOOL showErr,NSString  * _Nullable clsString,ResultBlock resultBlock) {
    
    ResultHandleModel *blockModel = [[ResultHandleModel alloc]init];
    blockModel.method = method;
    blockModel.resultBlock = resultBlock;
    blockModel.loadingTip = tipLoading;
    blockModel.showErr = showErr;
    blockModel.clsString = clsString;
    return blockModel;
}


static inline NSString * EncodeString(NSString * uncodeString) {
    return (NSString *) CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef) uncodeString, (CFStringRef)@"!$&'()*+,-./:;=?@_~%#[]",NULL,kCFStringEncodingUTF8));
}


static inline NSString * QueryStringFromParametersWithEncoding(NSString *path, NSDictionary *parameters) {
    
    if (!parameters) {
        return path;
    }
    
    NSMutableArray *mutablePairs = [NSMutableArray arrayWithCapacity:0];
    NSArray *allKeys = [parameters allKeys];
    for (NSString *key in allKeys) {
        NSString *string = [NSString stringWithFormat:@"%@=%@",key,[parameters objectForKey:key]];
        [mutablePairs addObject:string];
    }
    
    return EncodeString([path stringByAppendingString:[NSString stringWithFormat:@"?%@",[mutablePairs componentsJoinedByString:@"&"]]]);
}

@interface SHCoreManager : NSObject


/**
 相同请求是否保留最后一次请求,而取消其他请求，
 默认值为false。保留第一次请求
 */

+ (instancetype)shareInstance;

///update：简化request组合
- (void)dataWithUrl:(NSString*)url parameters:(id _Nullable)pms completion:(ResultHandleModel*)result;

- (NSDictionary *)commonHeaders;
/**
 网络请求

 @param url 请求url
 @param pms 参数字典
 @param result 请求其他的配置项
 @param last <#last description#>
 */
- (void)dataWithUrl:(NSString*)url parameters:(id _Nullable)pms completion:(ResultHandleModel*)result keepLast:(BOOL)last;

//上传文件
-(void)postRequestUrl:(NSString * _Nonnull)url
             paramDic:(NSDictionary * _Nullable)paramDic
          imagesArray:(NSData *)arrayImages
              progres:(void (^)(float  progress))progres
              success:(void (^)(id   responseObject))success
              failure:(void (^)(NSError *error))failure;

-(void)postRequestUrl:(NSString * _Nonnull)url
             paramDic:(NSDictionary * _Nullable)paramDic
               images:(NSArray *)arrayImages
              progres:(void (^)(float  progress))progres
              success:(void (^)(id   responseObject))success
              failure:(void (^)(NSError *error))failure;
/**
 /////////废弃的方法///////////
 - (void)dataWithRequest:(NSMutableURLRequest*)request loadTip:(NSString *)tip showError:(BOOL)show completedBlock:(void (^)(SHBaseResponse* response))completionBlock;
 
 ///get request
 +(NSMutableURLRequest *)GetRequestWithURL:(NSString *)url params:(NSDictionary *)paramDic;
 ///post request
 +(NSMutableURLRequest *)PostReqeustFormatWithURL:(NSString *)url params:(NSDictionary *)paramDic;
 
 +(NSMutableURLRequest *)postReqeustJsonFormatWithURL:(NSString *)url params:(NSDictionary *)paramDic;
 ////////////////////

 */

@end

NS_ASSUME_NONNULL_END
