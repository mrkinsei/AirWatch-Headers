/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <UIKit/UITableViewController.h>
#import "AWDeviceInfoNetworkControllerDelegate.h"
#import "AWPingerDelegate.h"
#import "AWRedirectValidatorDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "AWBottomViewDelegate.h"
#import "ZBarReaderDelegate.h"

@class UILabel, NSString, UIButton, UITapGestureRecognizer, UIImageView, ServerGroupIdView, UITextField, AWBottomView, AWPinger, UIColor, AWURLRedirectValidator, AWUnderlineTextButton, AWHUDView, UIToolbar, UINavigationController;
@protocol EmailAuthenticationDelegate;

__attribute__((visibility("hidden")))
@interface EmailAuthenticationViewController : UITableViewController <AWBottomViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, AWRedirectValidatorDelegate, AWPingerDelegate, ZBarReaderDelegate, AWDeviceInfoNetworkControllerDelegate> {
	UITapGestureRecognizer* tapRecognizer;
	BOOL _domainNameResolved;
	BOOL _showAdditionalDetails;
	UITextField* serverUrlField;
	UITextField* groupIdField;
	UIButton* qrButton;
	AWUnderlineTextButton* privacyPolicyButton;
	AWURLRedirectValidator* _validator;
	AWHUDView* loadingView;
	AWPinger* _pinger;
	NSString* serverUrl;
	NSString* autodiscoveredGroupId;
	int textFieldTag;
	BOOL contentOffset;
	CGRect originalTableFrame;
	UILabel* welcomeLabel;
	UIColor* backgroundColor;
	UIToolbar* dismissBar;
	UIButton* detailsButton;
	UIImageView* chevronImageView;
	BOOL groupIdFromAutodiscovery;
	BOOL urlRedirected;
	BOOL _isCreatingSession;
	float _qrimagewidth;
	float titleSize;
	UIImageView* iconImageView;
	ServerGroupIdView* serverGroupView;
	UIImageView* leftLineView;
	UIImageView* rightLineView;
	UINavigationController* qrNavBar;
	BOOL keyboardIsShowing;
	BOOL showFromCenter;
	BOOL _showDetails;
	BOOL _removeEmailField;
	BOOL _shadeEmailField;
	BOOL _autodiscoverReturnedURL;
	BOOL _showGroupId;
	BOOL _udidPresent;
	UITextField* _emailField;
	AWBottomView* _bottomView;
	id<EmailAuthenticationDelegate> _delegate;
	int _servicesStatus;
}
@property(assign) int servicesStatus;
@property(assign, nonatomic) BOOL udidPresent;
@property(assign, nonatomic) BOOL showGroupId;
@property(assign, nonatomic) BOOL autodiscoverReturnedURL;
@property(assign, nonatomic) BOOL shadeEmailField;
@property(assign, nonatomic) BOOL removeEmailField;
@property(assign, nonatomic) BOOL showDetails;
@property(assign, nonatomic) id<EmailAuthenticationDelegate> delegate;
@property(retain, nonatomic) AWBottomView* bottomView;
@property(retain, nonatomic) UITextField* emailField;
-(void)dealloc;
-(void)changeTableViewFrame;
-(void)changeFrameBasedOnOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)keyboardDidHide:(id)keyboard;
-(void)additionalDetails:(id)details;
-(void)dismissKeyboard:(id)keyboard;
-(void)saveDeviceServiceURL;
-(void)handleQrCode:(id)code;
-(int)isProperAirWatchURL:(id)url;
-(BOOL)shouldOpenCustomURL:(id)url;
-(void)qrdismiss;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)presentZbarView;
-(void)dismissPrivacyPolicy;
-(void)showPrivacyPolicy:(id)policy;
-(void)barcodeButtonTapped:(id)tapped;
-(void)getBrandingSettings;
-(id)getUniqueIdentifier;
-(void)launchWebEnrollment;
-(void)launchGeneralHandler:(id)handler;
-(void)launchNoUdidHandler:(id)handler;
-(void)pingSuccessful:(id)successful withHost:(id)host withScheme:(int)scheme;
-(void)networkController:(id)controller didReceiveData:(id)data;
-(void)networkController:(id)controller didReceiveResponse:(id)response;
-(void)networkController:(id)controller didFailWithError:(id)error;
-(void)checkServicesAvailability:(id)availability;
-(void)pingFailed:(id)failed withHost:(id)host withScheme:(int)scheme withError:(id)error;
-(void)validator:(id)validator urlRedirectResult:(int)result;
-(void)fetchEmailAutoDiscoveryInfoforDomain:(id)domain;
-(void)initiateSessionWithCompletionBlock:(id)completionBlock;
-(void)updateSessionInitiationGroup:(id)group;
-(void)sendRequest;
-(void)tappedOutside:(id)outside;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)shouldAutorotate;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)didPressContineButton;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didReceiveMemoryWarning;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithStyle:(int)style;
@end

