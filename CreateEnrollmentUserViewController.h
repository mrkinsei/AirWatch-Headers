/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "AWBottomViewDelegate.h"
#import "AWSelectionViewDelegate.h"
#import "AirWatch-Structs.h"
#import <UIKit/UITableViewController.h>
#import "SelectionPopoverDelegate.h"

@class UIButton, UIGestureRecognizer, UIColor, UIPopoverController, NSDictionary, AWBottomView, NSString, AWSelectionView, UITextField;

__attribute__((visibility("hidden")))
@interface CreateEnrollmentUserViewController : UITableViewController <AWBottomViewDelegate, UIGestureRecognizerDelegate, UITextFieldDelegate, AWSelectionViewDelegate, SelectionPopoverDelegate> {
	AWBottomView* buttonView;
	UIGestureRecognizer* tapRecognizer;
	AWSelectionView* securityTypeSelectionView;
	AWSelectionView* messageTypeSelectionView;
	UITextField* usernameField;
	UITextField* passwordField;
	UITextField* emailUsername;
	UITextField* emailAddress;
	UITextField* confirmPassword;
	BOOL _swicthIsOn;
	BOOL _isShowingSecuritySelection;
	BOOL _isShowingMessageTypeSelection;
	BOOL _showEmailAddressRequired;
	BOOL _showPasswordRequired;
	BOOL _showSecurityTypeRequired;
	BOOL _showMessageTypeRequired;
	BOOL _showCheckUserButton;
	BOOL _displayRequiredFields;
	BOOL _showReenterPasswordRequired;
	NSString* passwordString;
	NSString* confirmPasswordString;
	NSString* emailUsernameString;
	NSString* emailAddressString;
	NSString* securityTypeSelectedString;
	NSString* messageTypeSelectedString;
	UIButton* checkUserButton;
	UIColor* backGroundColor;
	UIPopoverController* securityTypePopover;
	UIPopoverController* messageTypePopover;
	NSDictionary* _securityTypeSelectionList;
	NSDictionary* _messageTypeSelectionList;
	NSString* _usernameString;
}
@property(retain, nonatomic) NSString* usernameString;
@property(retain, nonatomic) NSDictionary* messageTypeSelectionList;
@property(retain, nonatomic) NSDictionary* securityTypeSelectionList;
-(id)getAttributedString:(id)string;
-(id)createCellForTableView:(id)tableView withTableSeparatorStyle:(int)tableSeparatorStyle withCellReuseIdentifier:(id)cellReuseIdentifier andTitle:(id)title;
-(void)changeFrameBasedOnOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)checkUser:(id)user;
-(void)backPressed:(id)pressed;
-(void)sendRequest;
-(void)selectionViewDidSelectButton:(id)selectionView;
-(void)switchValueChanged;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)tappedOutside:(id)outside;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(BOOL)checkAllRequiredFields;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)didSelectOptionWith:(id)with andtag:(int)andtag;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end

