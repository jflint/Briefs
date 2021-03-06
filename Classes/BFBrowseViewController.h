//
//  BFBrowseViewController.h
//  Briefs
//
//  Created by Rob Rhyne on 8/31/09.
//  Copyright Digital Arch Design, 2009. See LICENSE file for details.
//

#import <UIKit/UIKit.h>
#import "BFTableViewController.h"
#import "BFAddBriefcastViewController.h"

@interface BFBrowseViewController : BFTableViewController <BFAddBriefcastViewDelegate>
{
}

- (NSArray *)localBriefLocations;
- (NSArray *)storedBriefcastLocations;

- (IBAction)addBriefcast;

@end
