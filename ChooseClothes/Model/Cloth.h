//
//  Cloth.h
//  ChooseClothes
//
//  Created by 姚嘉晨 on 2020/5/21.
//  Copyright © 2020 姚嘉晨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ClothType) {
    ClothTypeUp,
    ClothTypeDown,
};

typedef NS_ENUM(NSUInteger, ClothColor) {
    ClothColorWhite,
    ClothColorBlack,
};

@interface Cloth : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) ClothType type;
@property (nonatomic, assign) ClothColor color;

@end

NS_ASSUME_NONNULL_END
