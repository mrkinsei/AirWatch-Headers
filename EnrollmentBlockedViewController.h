/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWBottomViewDelegate.h"
#import <UIKit/UITableViewController.h>

@class UIColor, AWBottomView, NSString, AWWebView;

__attribute__((visibility("hidden")))
@interface EnrollmentBlockedViewController : UITableViewController <AWBottomViewDelegate> {
	AWBottomView* buttonView;
	AWWebView* messageView;
	UIColor* backGroundColor;
	BOOL _createMessage;
	BOOL _reEnroll;
	NSString* _blockedMessage;
	NSString* _reason;
	NSString* _attribute;
	NSString* _value;
}
@property(assign, nonatomic) BOOL reEnroll;
@property(copy, nonatomic) NSString* value;
@property(copy, nonatomic) NSString* attribute;
@property(copy, nonatomic) NSString* reason;
@property(assign, nonatomic) BOOL createMessage;
@property(retain, nonatomic) NSString* blockedMessage;
-(void)changeFrameBasedOnOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)backPressed:(id)pressed;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end

