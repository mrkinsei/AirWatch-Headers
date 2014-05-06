/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class AWHelper, NSString, NSData;

@interface AWAPPCommAuthenticate : NSObject {
	NSString* _scheme;
	NSData* _requesterPublicKey;
	NSString* _requesterIdentifier;
	NSString* _hmacKey;
	NSString* _deviceId;
	NSString* _authenticationGroup;
	NSString* _serverURL;
	AWHelper* _helper;
	NSString* _identifier;
}
@property(copy, nonatomic) NSString* identifier;
@property(retain, nonatomic) AWHelper* helper;
@property(copy, nonatomic) NSString* serverURL;
@property(copy, nonatomic) NSString* authenticationGroup;
@property(copy, nonatomic) NSString* deviceId;
@property(copy, nonatomic) NSString* hmacKey;
@property(retain, nonatomic) NSString* requesterIdentifier;
@property(retain, nonatomic) NSData* requesterPublicKey;
@property(retain, nonatomic) NSString* scheme;
-(id)requesterIdFromRequest:(id)request;
-(BOOL)isSupportedRequest:(id)request;
-(id)responseForRequestURL:(id)requestURL;
-(BOOL)processResponseURL:(id)url;
-(id)urlWithPublicKey:(id)publicKey;
-(BOOL)authenticate;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier error:(id)error;
@end

