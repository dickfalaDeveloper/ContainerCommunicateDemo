//
//  ContainerViewController.h
//  ContainerCommunication2Demo
//
//  Created by James on 2015/3/2.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContainerChildViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *showParentValLB;
@property (weak, nonatomic) IBOutlet UITextField *childTF;
@property (weak, nonatomic) IBOutlet UIButton *passToParentBtn;
@property (weak, nonatomic) IBOutlet UIButton *passValueToParentBtnEvent;

@end
