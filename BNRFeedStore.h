//
//  BNRFeedStore.h
//  Nerdfeed
//
//  Created by THOMAS PENG on 6/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RSSChannel;
@class RSSItem;

extern NSString * const BNRFeedStoreUpdateNotification;

@interface BNRFeedStore : NSObject
{
    NSManagedObjectContext *context;
    NSManagedObjectModel *model;
}

@property (nonatomic, strong) NSDate *topSongsCacheDate;

+ (BNRFeedStore *)sharedStore;

- (void)fetchTopSongs:(int)count withCompletion:(void (^)(RSSChannel *obj, NSError *err))block;

- (RSSChannel *)fetchRSSFeedWithCompletion:(void (^)(RSSChannel *obj, NSError *err))block;

- (void)markItemAsRead:(RSSItem *)item;
- (BOOL)hasItemBeenRead:(RSSItem *)item;

@end
