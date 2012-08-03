//
//  WebViewController.h
//  Nerdfeed
//
//  Created by THOMAS PENG on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
// Must import this file as it is where ListViewControllerDelegate is declared
#import "ListViewController.h"

@interface WebViewController : UIViewController <ListViewControllerDelegate, UISplitViewControllerDelegate>

@property (nonatomic, readonly) UIWebView *webView;

@end
