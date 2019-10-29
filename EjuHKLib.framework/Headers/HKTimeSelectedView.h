//
//  HKTimeSelectedView.h
//  Housekeeper
//
//  Created by Fane on 2019/5/16.
//  Copyright © 2019 shihui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TimeSelectedBlock)(int identifier);

NS_ASSUME_NONNULL_BEGIN

@interface HKTimeSelectedView : UIView <UIPickerViewDelegate,UIPickerViewDataSource>

@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;
@property (weak, nonatomic) IBOutlet UIButton *confirmBtn;
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;

@property (nonatomic, copy) TimeSelectedBlock selectBlock;

- (IBAction)cancelBtnClick:(UIButton *)sender;

@end

NS_ASSUME_NONNULL_END
