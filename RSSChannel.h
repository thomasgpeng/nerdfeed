//
//  RSSChannel.h
//  Nerdfeed
//
//  Created by THOMAS PENG on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONSerializable.h"

@interface RSSChannel : NSObject <NSXMLParserDelegate, JSONSerializable, NSCoding, NSCopying>
{
    NSMutableString *currentString;
}

@property (nonatomic, weak) id parentParserDelegate;

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *infoString;
@property (nonatomic, readonly, strong) NSMutableArray *items;

- (void)trimItemTitles;
- (void)addItemsFromChannel:(RSSChannel *)otherChannel;

@end
