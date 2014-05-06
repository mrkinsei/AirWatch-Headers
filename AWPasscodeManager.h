/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWPasscodeValidateProtocol.h"
#import "AWPasscodeCreateProtocol.h"
#import "AWSessionCheckProtocol.h"
#import "AWPasscodeProtocol.h"

@class AWAuthenticationPayload;
@protocol AWSSOStoreProtocol;

@interface AWPasscodeManager : NSObject <AWPasscodeValidateProtocol, AWPasscodeCreateProtocol, AWPasscodeProtocol, AWSessionCheckProtocol> {
	BOOL _complianceCheckNeeded;
	id<AWPasscodeProtocol> _passcodeDelegate;
	id<AWSSOStoreProtocol> _store;
	AWAuthenticationPayload* _authenticationPayload;
}
@property(retain, nonatomic) AWAuthenticationPayload* authenticationPayload;
@property(assign, nonatomic) BOOL complianceCheckNeeded;
@property(assign, nonatomic) id<AWSSOStoreProtocol> store;
@property(assign, nonatomic) id<AWPasscodeProtocol> passcodeDelegate;
+(id)sharedInstance;
-(void)setAuthenticationPayload:(id)payload withCompletion:(id)completion;
-(id)newSessionInfo;
-(BOOL)isSessionActive;
-(void)updateSession;
-(int)sessionState;
-(id)storedPin;
-(void)updatePasscodeFailedAttempts:(int)attempts;
-(int)passcodeFailedAttempts;
-(void)changeToPin:(id)pin fromPin:(id)pin2 handler:(id)handler;
-(int)failedAttempts;
-(BOOL)setPasscode:(id)passcode withCompletion:(id)completion;
-(BOOL)passcodeCompliance:(id)compliance;
-(int)maxNumberOfAttempts;
-(BOOL)checkPasscodeValidity:(id)validity;
-(void)reset;
-(void)clear;
-(BOOL)isHistoryCompliant:(id)compliant;
-(BOOL)minimumComplexCharPolicy:(id)policy;
-(BOOL)minimumLengthPolicy:(id)policy;
-(BOOL)numericPasscodePolicy:(id)policy;
-(BOOL)alphanumericPasscodePolicy:(id)policy;
-(BOOL)simplePasscodePolicy:(id)policy;
-(BOOL)checkPassocodeAgeCompliance;
-(BOOL)isDevicePasscodeCompliant:(id)compliant;
-(BOOL)isCompliant:(id)compliant;
-(int)checkPasscodeCompliance:(id)compliance WithCompletionBlock:(id)completionBlock;
-(void)checkAndInitialize;
-(void)removeSetPasscode;
-(BOOL)setPasscode:(id)passcode;
-(BOOL)isPasscodeRequired;
-(BOOL)isPasscodeSet;
-(BOOL)clearPasscode;
@end
