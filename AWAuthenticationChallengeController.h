/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class AWURLCredentialStorage, NSData, NSURLAuthenticationChallenge, AWEnrollmentAccount, NSURLCredential, NSMutableSet;
@protocol AWAuthenticationChallengeControllerDelegate;

@interface AWAuthenticationChallengeController : NSObject {
	BOOL _isStandardAuthorization;
	NSMutableSet* _supplementaryCredentials;
	NSMutableSet* _excludedCredentials;
	NSURLCredential* _currentCredentials;
	NSURLCredential* _enrollmentAccountCredentials;
	unsigned _keychainAuthAttempts;
	AWEnrollmentAccount* _enrollmentAccount;
	NSURLAuthenticationChallenge* _currentChallenge;
	NSData* _encryptionKey;
	id<AWAuthenticationChallengeControllerDelegate> _delegate;
	AWURLCredentialStorage* _credentialStorage;
}
@property(assign, nonatomic) BOOL isStandardAuthorization;
@property(retain, nonatomic) NSURLAuthenticationChallenge* currentChallenge;
@property(retain, nonatomic) NSData* encryptionKey;
@property(retain, nonatomic) AWURLCredentialStorage* credentialStorage;
@property(retain, nonatomic) AWEnrollmentAccount* enrollmentAccount;
@property(retain, nonatomic) NSURLCredential* enrollmentAccountCredentials;
@property(retain, nonatomic) NSURLCredential* currentCredentials;
@property(assign, nonatomic) unsigned keychainAuthAttempts;
@property(retain, nonatomic) NSMutableSet* excludedCredentials;
@property(retain, nonatomic) NSMutableSet* supplementaryCredentials;
@property(assign, nonatomic) id<AWAuthenticationChallengeControllerDelegate> delegate;
-(void)attemptWithCurrentAuthenticatedAccount;
-(void)attemptNextSupplementaryCredential;
-(void)attemptAuthenticationChallengeWithKeychain;
-(void)handleNonStandardAuthorization;
-(void)submitCurrentCredentials;
-(BOOL)shouldSubmitCredential;
-(void)addExcludedCredential:(id)credential;
-(void)handleCurrentChallenge:(id)challenge;
-(id)initWithEnrollmentAccount:(id)enrollmentAccount encryptionKey:(id)key;
-(id)initWithEnrollmentAccount:(id)enrollmentAccount;
-(id)init;
-(void)dealloc;
@end

