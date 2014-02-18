//
//  bnrAppDelegate.h
//  BNRItem
//
//  Created by Daniel Vagnoni on 2/17/14.
//  Copyright (c) 2014 Daniel Vagnoni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface bnrAppDelegate : UIResponder <UIApplicationDelegate> {
    
}

+ (id)randomItem;

- (id)initWithItemName:(NSString *)name
        valueInDollars:(int)value
            serialNumber;(NSString *)sNumber

@property (nonatomic, strong) BNRItem *containedItem;
@property (nonatomic, weak) BNRItem *container;

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int ValueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;
@property (nonatomic, copy) NSString *imageKey;

@property (nonatomic, strong) UIImage *thumbnail;
@property (nonatomic, copy) NSData *thumbnailData;

- (void)setThumbnameDataFrmImage:(UIImage *)image;

@end
