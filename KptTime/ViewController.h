//
//  ViewController.h
//  KptTime
//
//  Created by 松尾 慎治 on 2016/04/13.
//  Copyright © 2016年 smartdt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubViewController.h"

@interface ViewController : UIViewController{
//    int time;
//    NSTimer* countdown_timer;
}
- (IBAction)CalcButton:(UIButton *)sender;
//+ (BOOL)chkNumeric:(NSString *)checkString;
//+ (BOOL)chkCompareString:(NSString *)sender;
- (BOOL)isNumber:(NSString *)sender;

@property IBOutlet UITextField *timeInput;

@end