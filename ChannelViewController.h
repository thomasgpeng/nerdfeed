//
//  ChannelViewController.h
//  Nerdfeed
//
//  Created by THOMAS PENG on 6/20/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ListViewController.h"

@class RSSChannel;

@interface ChannelViewController : UITableViewController <ListViewControllerDelegate, UISplitViewControllerDelegate>
{
    RSSChannel *channel;
}
@end
