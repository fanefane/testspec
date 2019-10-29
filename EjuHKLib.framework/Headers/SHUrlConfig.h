//
//  SHUrlConfig.h
//  ShiHui
//
//  Created by Fane on 2018/11/21.
//  Copyright © 2018 ShiHui. All rights reserved.
//

#import <Foundation/Foundation.h>

#define AMapKey          @"08fa67ecd0047aef243f3cda4196f0ec"

#ifdef DEBUG

/// debug url define
#define UserBaseUrl      @"http://test.bapp.hiwemeet.com"
#define ImageBaseUrl     @"http://test2.img.hiwemeet.com"

//#define H5BaseUrl         @"http://172.29.124.77:8080/#/"
#define H5BaseUrl        @"http://test.m.17shihui.com/report/forms/index.html#/"

#else

///release url define
#define UserBaseUrl      @"http://bapp.hiwemeet.com"
#define ImageBaseUrl     @"http://img.hiwemeet.com"

#define H5BaseUrl        @"https://m.17shihui.com/report/forms/index.html#/"

#endif

