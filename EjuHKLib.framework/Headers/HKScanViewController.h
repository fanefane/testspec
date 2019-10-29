//
//  HKScanViewController.h
//  Housekeeper
//
//  Created by Fane on 2019/6/5.
//  Copyright © 2019 shihui. All rights reserved.
//

#import "HKBaseViewController.h"
#include <AudioToolbox/AudioToolbox.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ScanResultBlock)(NSString *result);

//扫描类型
typedef enum : NSUInteger {
    ScanTypeDefault,//二维码、条形码
    ScanTypeBarNumber,
} ScanType;

@interface HKScanViewController : HKBaseViewController

@property (nonatomic,strong) ScanResultBlock resultBlock;
@property (nonatomic, strong) NSURL *soundFile; //添加声音文件进行提示音的自定义
@property (nonatomic, assign) ScanType scanType;

@property (nonatomic, strong) NSString *qrcode;

- (void)refreshScan;

@end

NS_ASSUME_NONNULL_END
