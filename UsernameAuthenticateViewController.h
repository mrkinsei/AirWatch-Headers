/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIKit/UITableViewController.h>
#import "AWBottomViewDelegate.h"
#import "AirWatch-Structs.h"

@class UIColor, UIButton, UITapGestureRecognizer, UITextField, AWBottomView;

__attribute__((visibility("hidden")))
@interface UsernameAuthenticateViewController : UITableViewController <UITextFieldDelegate, AWBottomViewDelegate, UIGestureRecognizerDelegate> {
	BOOL _showUsernameRequiredMessage;
	BOOL _showPasswordRequiredMessage;
	BOOL _showInvalidLoginMessage;
	UITapGestureRecognizer* tapRecognizer;
	BOOL _usernameClicked;
	BOOL _incorrectCredentials;
	UIButton* clearButton;
	UIButton* clearPasswordButton;
	UIColor* backGroundColor;
	UITextField* emailUsername;
	UITextField* emailAddress;
	BOOL showFromCenter;
	BOOL _showAddDetails;
	AWBottomView* _bottomView;
	UITextField* _usernameField;
	UITextField* _passwordField;
}
@property(assign, nonatomic) BOOL showAddDetails;
@property(retain, nonatomic) UITextField* passwordField;
@property(retain, nonatomic) UITextField* usernameField;
@property(retain, nonatomic) AWBottomView* bottomView;
-(void)dealloc;
-(void)changeFrameBasedOnOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)tappedOutside:(id)outside;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)backPressed;
-(void)cancelPressed;
-(void)sendRequest;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)clearPasscode:(id)passcode;
-(void)clearUsername:(id)username;
-(void)textEntered:(id)entered;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

