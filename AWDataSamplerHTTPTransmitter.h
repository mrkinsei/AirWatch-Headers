/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWNetworkConnectionDelegate.h"

@class NSMutableData, NSData, AWDataPayload, NSString;
@protocol AWDataSamplerHTTPTransmitterDelegate;

@interface AWDataSamplerHTTPTransmitter : NSObject <AWNetworkConnectionDelegate> {
	id<AWDataSamplerHTTPTransmitterDelegate> _delegate;
	NSString* _host;
	AWDataPayload* _payload;
	NSData* token;
	BOOL didReceiveReadyRepsonse;
	unsigned _sampleModules;
	NSString* _urlScheme;
	NSString* secureChannelUrl;
	BOOL onlyGPS;
	NSMutableData* _responseData;
	BOOL _onlyGPS;
}
@property(assign, nonatomic) BOOL onlyGPS;
@property(retain, nonatomic) id<AWDataSamplerHTTPTransmitterDelegate> delegate;
-(void)networkConnection:(id)connection failedWithError:(id)error;
-(void)networkConnection:(id)connection receivedResponseData:(id)data;
-(void)dealloc;
-(id)initWithDataSamplerConfiguration:(id)dataSamplerConfiguration payload:(id)payload;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
-(void)processPacketResponse:(id)response;
-(void)sendPacket:(id)packet;
-(BOOL)startMessageSendSequence:(id*)sequence;
@end

