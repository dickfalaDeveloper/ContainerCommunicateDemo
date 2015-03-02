//
//  ContainerViewController.m
//  ContainerCommunication2Demo
//
//  Created by James on 2015/3/2.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import "ContainerChildViewController.h"

@interface ContainerChildViewController ()

@end

@implementation ContainerChildViewController

- (void)viewDidLoad {
    [super viewDidLoad];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

}



-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"communicateSegue"]) {
        NSLog(@"call prepare for segue at child view controller ");
    }
}

@end
