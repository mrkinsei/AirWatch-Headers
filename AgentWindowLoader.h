/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "EmailAuthenticationDelegate.h"
#import "DataUpdaterViewControllerDelegate.h"
#import "EnrollmentCompleteDelegate.h"

@class DataUpdaterViewController, AWStageViewController, AgentSecureChannelHandler, AWNavigationController, EmailAuthenticationViewController;

__attribute__((visibility("hidden")))
@interface AgentWindowLoader : NSObject <DataUpdaterViewControllerDelegate, EnrollmentCompleteDelegate, EmailAuthenticationDelegate> {
	AgentSecureChannelHandler* _secureChannelHandler;
	AWStageViewController* _stageViewController;
	BOOL _isEmailChecking;
	BOOL _checkEmailAutodiscovery;
	BOOL _noUdidExist;
	BOOL _fetchingSharedSettings;
	BOOL _fetchingAgentSettings;
	DataUpdaterViewController* _updateViewController;
	AWNavigationController* _updateNavigationController;
	AWNavigationController* _enrollmentNavigationController;
	EmailAuthenticationViewController* _emailAuthentication;
}
@property(assign, nonatomic) BOOL fetchingAgentSettings;
@property(assign, nonatomic) BOOL fetchingSharedSettings;
@property(retain, nonatomic) AgentSecureChannelHandler* secureChannelHandler;
@property(assign, nonatomic) BOOL noUdidExist;
@property(assign, nonatomic) BOOL checkEmailAutodiscovery;
@property(assign, nonatomic) BOOL isEmailChecking;
@property(retain, nonatomic) EmailAuthenticationViewController* emailAuthentication;
@property(retain, nonatomic) AWNavigationController* enrollmentNavigationController;
@property(retain, nonatomic) AWNavigationController* updateNavigationController;
@property(retain, nonatomic) DataUpdaterViewController* updateViewController;
+(void)start;
+(id)sharedInstance;
-(void)saveProfileRetriverTimeStamp;
-(void)showBlockPage;
-(void)showNativeEnrollmentSetup;
-(void)emailAuthenticationDidSelectContinueButton:(id)emailAuthentication;
-(void)showEmailAuthentication;
-(void)dataUpdater:(id)updater didCompleteWithInfo:(id)info;
-(void)dataUpdater:(id)updater failedWithError:(id)error;
-(void)showDataUpdater;
-(void)enrollmentCompletedidPressButton:(id)button;
-(void)showStatusRetriever;
-(void)dealloc;
-(id)init;
@end

