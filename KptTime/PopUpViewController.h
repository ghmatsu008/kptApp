//
//  PopUpViewController.h
//  KptTime
//
//  Created by 松尾 慎治 on 2016/04/20.
//  Copyright © 2016年 smartdt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PopUpViewController : UIViewController

@property IBOutlet UIView* contentView;

@property (weak, nonatomic) IBOutlet UILabel *popTime;
@property (weak, nonatomic) IBOutlet UILabel *residueTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel2;
@end

