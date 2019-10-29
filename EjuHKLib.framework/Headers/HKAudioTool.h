//
//  HKAudioTool.h
//  Housekeeper
//
//  Created by Fane on 2019/5/15.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@protocol HKAudioToolDelegate <NSObject>
NS_ASSUME_NONNULL_BEGIN

/**
 音频加载

 @param duration 音频总时长
 */
- (void)audioLoadStatusReadyToPlay:(float)duration;

/**
 音频播放进度

 @param duration 总时长
 @param cTime 当前播放时间
 */
- (void)audioPlaying:(float)duration time:(float)cTime;

/**
 播放完成

 @param player 当前AVPlayer对象
 */
- (void)audioDidPlayEnd:(id)player;

@end


@interface HKAudioTool : NSObject

@property (nonatomic, weak) id delegate;

///本地/远程 音频地址
@property (nonatomic, strong) NSString *fileUrl;

- (instancetype)initWithUrl:(NSString*)url;

///开始播放 本地/远程 音频
- (void)playerStartPlay;

//停止播放，下次会从头开始播放
- (void)playerPause;

@end

NS_ASSUME_NONNULL_END
