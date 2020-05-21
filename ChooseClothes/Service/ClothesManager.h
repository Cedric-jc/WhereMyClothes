//
//  ClothesManager.h
//  ChooseClothes
//
//  Created by 姚嘉晨 on 2020/5/21.
//  Copyright © 2020 姚嘉晨. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Cloth.h"

NS_ASSUME_NONNULL_BEGIN

@interface ClothesManager : NSObject

- (void)addCloth:(Cloth *)cloth;
- (void)deleteCloth:(Cloth *)cloth;
- (void)updateCloth:(Cloth *)cloth;
- (Cloth *)findClothWithID:(NSString *)id;

- (void)getAllClothes;

@end

NS_ASSUME_NONNULL_END
