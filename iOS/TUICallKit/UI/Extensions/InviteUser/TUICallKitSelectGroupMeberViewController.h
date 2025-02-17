//
//  TUICallKitSelectGroupMeberViewController.h
//  Pods
//
//  Created by vincepzhang on 2023/4/7.
//  Copyright © 2021 Tencent. All rights reserved


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class TUIUserModel;

NS_ASSUME_NONNULL_BEGIN

@protocol SelectGroupMeberViewControllerDelegate <NSObject>

- (void)addNewGroupUser:(NSArray<TUIUserModel *> *)inviteUsers;

@end

@interface TUICallKitSelectGroupMeberViewController : UIViewController

@property (nonatomic, weak) id<SelectGroupMeberViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
