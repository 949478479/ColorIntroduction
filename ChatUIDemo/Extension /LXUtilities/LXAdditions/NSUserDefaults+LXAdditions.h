//
//  NSUserDefaults+LXAdditions.h
//
//  Created by 从今以后 on 15/9/27.
//  Copyright © 2015年 从今以后. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaults (LXAdditions)

///------------------------------------------------------------------------------------------------
/// @name 同步
///------------------------------------------------------------------------------------------------

+ (BOOL)lx_synchronize;

///------------------------------------------------------------------------------------------------
/// @name 写入
///------------------------------------------------------------------------------------------------

+ (void)lx_setObject:(nullable id)value forKey:(NSString *)defaultName;

///------------------------------------------------------------------------------------------------
/// @name 读取
///------------------------------------------------------------------------------------------------

+ (nullable NSString *)lx_stringForKey:(NSString *)defaultName;

@end

NS_ASSUME_NONNULL_END