/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewController.h>
#import "AirWatch-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AWAboutViewController : UITableViewController {
	NSString* _consoleVersion;
	NSString* _companyName;
	NSString* _companyURL;
	NSString* _companyPrivatePolicyURL;
}
@property(retain, nonatomic) NSString* companyPrivatePolicyURL;
@property(retain, nonatomic) NSString* companyURL;
@property(retain, nonatomic) NSString* companyName;
@property(copy, nonatomic) NSString* consoleVersion;
-(CGSize)getProperSizeForString:(id)string withFont:(id)font constraintSize:(CGSize)size;
-(id)privacyPolicyText;
-(void)getAirwatchConsoleInfo;
-(void)refresh:(id)refresh;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end

