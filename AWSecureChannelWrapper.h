/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWNetworkConnectionDelegate.h"

@class NSString, NSMutableDictionary;

@interface AWSecureChannelWrapper : NSObject <AWNetworkConnectionDelegate> {
	NSString* _challenge;
	NSString* _secureChannelUrl;
	NSString* _serverURL;
	id _delegate;
	NSMutableDictionary* openRequest;
	NSString* _identifier;
	int requestType;
}
@property(copy, nonatomic) NSString* identifier;
@property(copy, nonatomic) NSString* secureChannelUrl;
@property(assign, nonatomic) id delegate;
@property(copy, nonatomic) NSString* serverURL;
+(void)setStorageLocation:(int)location;
+(id)secureChannelIdentifierDelegate;
+(void)setSecureChannelIdentifierDelegate:(id)delegate;
+(id)sharedInstance:(id)instance;
+(id)sharedInstance;
-(int)requestType;
-(void)setRequestType:(int)type;
-(void)clearStorage;
-(id)secureChannelUrlForUrl:(id)url;
-(void)reCheckIn:(id)anIn;
-(int)secureChannel:(id)channel type:(id)type;
-(BOOL)secureChannel:(id)channel;
-(void)handleError:(id)error;
-(BOOL)validateCertificate;
-(id)channelURL;
-(void)networkConnection:(id)connection failedWithError:(id)error;
-(void)networkConnection:(id)connection receivedResponseData:(id)data;
-(id)postprocess:(id)postprocess type:(id)type;
-(id)preprocess:(id)preprocess type:(id)type url:(id)url;
-(void)initialize;
-(void)initiateCheckin:(id)checkin;
-(void)dealloc;
@end

