/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "AWPasscodeCompletionProtocol.h"

@class PasscodeChangePage;
@protocol AWPasscodeValidateProtocol, AWPasscodeCreateProtocol, AWPasscodeProtocol;

@interface SSOPasscodeChangeViewController : UIViewController <AWPasscodeCompletionProtocol> {
	PasscodeChangePage* passcodeChange;
	id _completionBlock;
	int passwordAttemptCount;
	int _passcodeMode;
	id<AWPasscodeProtocol, AWPasscodeValidateProtocol, AWPasscodeCreateProtocol> _passcodeHandler;
}
@property(assign, nonatomic) id<AWPasscodeProtocol, AWPasscodeValidateProtocol, AWPasscodeCreateProtocol> passcodeHandler;
@property(assign, nonatomic) int passcodeMode;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)didPressChange:(id)change;
-(void)setPasscodeCompletionBlock:(id)block;
-(void)dealloc;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

