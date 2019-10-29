//
//  HKWebViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/8/8.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#import "dsbridge.h"

#import "JsApiTest.h"
#import "HKRegiserJS.h"

NS_ASSUME_NONNULL_BEGIN
typedef void (^RefreshBlock)(int identifier,int headerOrFooter);

@interface HKWebViewController : HKBaseViewController
@property (nonatomic,strong) DWKWebView *webView;

@property (nonatomic, assign) BOOL hideNav;
@property (nonatomic, assign) BOOL canRefresh;

@property (nonatomic, assign) BOOL navTitleLeft;
@property (nonatomic, copy) void (^callbackBlock)(int identifier,id _Nullable args,id _Nullable callback);
@property (nonatomic, copy) RefreshBlock refreshBlock;
@property (nonatomic, copy) void (^webViewTitleBlock)(NSString* title);
@property (nonatomic, copy) void (^webViewFinishedBlock)(void);



- (instancetype)initWithUrl:(NSString*)url;
- (instancetype)initWithURL:(NSURL*)URL;
- (instancetype)initWithUrl:(NSString*)url refresh:(RefreshBlock)refreshBlock;

///native call method
- (void)callHandle:(NSString*)mthName arguments:(NSString*)arg completionHandler:(void (^)(id  _Nullable value))completionHandler;

//refresh
- (void)addHeaderRefreshSelector:(SEL)selector target:(id)target;
- (void)addFooterRefreshSelector:(SEL)selector target:(id)target;
- (void)endHeaderFooterAnimation;

@end

NS_ASSUME_NONNULL_END
