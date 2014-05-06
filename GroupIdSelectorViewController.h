/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <UIKit/UITableViewController.h>
#import "AWBottomViewDelegate.h"
#import "AWSelectionViewDelegate.h"
#import "SelectionPopoverDelegate.h"

@class UIPopoverController, UIColor, NSString, AWBottomView, UIGestureRecognizer, AWSelectionView, NSDictionary;

__attribute__((visibility("hidden")))
@interface GroupIdSelectorViewController : UITableViewController <AWSelectionViewDelegate, AWBottomViewDelegate, UIGestureRecognizerDelegate, SelectionPopoverDelegate> {
	AWBottomView* bottomView;
	AWSelectionView* groupSelectionView;
	NSString* selectedGroupString;
	BOOL _showingSelectionView;
	BOOL _showGroupSelectionRequiredMessage;
	UIGestureRecognizer* tapRecognizer;
	UIColor* backGroundColor;
	UIPopoverController* groupIdPopover;
	NSDictionary* _groupIdSelectionList;
}
@property(retain, nonatomic) NSDictionary* groupIdSelectionList;
-(void)changeFrameBasedOnOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)backButtonPressed:(id)pressed;
-(void)sendRequest;
-(void)tappedOutside:(id)outside;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)selectionViewDidSelectButton:(id)selectionView;
-(void)didSelectOptionWith:(id)with andtag:(int)andtag;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end

