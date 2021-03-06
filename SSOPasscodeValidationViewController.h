/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "AWPasscodeCompletionProtocol.h"

@class UIView, UILabel, NSTimer, PasscodeValidationPage;
@protocol AWPasscodeValidateProtocol;

@interface SSOPasscodeValidationViewController : UIViewController <AWPasscodeCompletionProtocol> {
	PasscodeValidationPage* passcodeValidation;
	id _completionBlock;
	int passwordAttemptCount;
	UIView* layoverView;
	UILabel* messageLabel;
	NSTimer* passcodeTimer;
	NSTimer* displayTimer;
	BOOL _complete;
	int timeout;
	id<AWPasscodeValidateProtocol> _passcodeHandler;
}
@property(assign, nonatomic) id<AWPasscodeValidateProtocol> passcodeHandler;
-(void)completeAndReturn;
-(id)stringFromError:(id)error;
-(void)offlineStatusChange:(id)change;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)refreshDisplay:(id)display;
-(void)timedOut:(id)anOut;
-(void)setLayoffTimer;
-(void)didPressChangePass:(id)pass;
-(void)setPasscodeCompletionBlock:(id)block;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

