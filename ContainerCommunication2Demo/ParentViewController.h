//
//  ViewController.h
//  ContainerCommunication2Demo
//
//  Created by James on 2015/3/2.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ParentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *parentTF;
@property (weak, nonatomic) IBOutlet UIButton *passValToChildVCBtn;

@property (weak, nonatomic) IBOutlet UILabel *showContainerValLB;
@property (weak, nonatomic) IBOutlet UIButton *passValueToContainerEvent;

@end

