/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AirWatch-Structs.h"
#import "NSStreamDelegate.h"
#import "NSURLAuthenticationChallengeSender.h"

@class AWSSLStreamHandler, AWProxyHTTPProtectionSpace, AWProxyHTTPAuthenticationChallenge, AWMutableURLRequest, NSInputStream, NSOutputStream, NSDictionary, NSURL, NSString;
@protocol AWProxyHTTPConnectionDelegate;

@interface AWProxyHTTPConnection : NSObject <NSStreamDelegate, NSURLAuthenticationChallengeSender> {
	int _authenticationAttempts;
	BOOL _haveReceivedHeader;
	BOOL _responseIsChunked;
	CFHTTPMessageRef _HTTPRequest;
	CFHTTPMessageRef _HTTPResponse;
	NSURL* _URL;
	NSInputStream* _inStream;
	NSOutputStream* _outStream;
	AWProxyHTTPAuthenticationChallenge* _authenticationChallenge;
	AWProxyHTTPProtectionSpace* _protectionSpace;
	int _ntlmState;
	NSString* _ntlmServerChallenge;
	CFDictionaryRef _ntlmCredentials;
	unsigned long _recievedLength;
	unsigned long _expectedLength;
	unsigned long _leftOverChunkSize;
	int _httpAuthMethod;
	CFHTTPAuthenticationRef _authRef;
	AWSSLStreamHandler* _sslToOriginServer;
	NSInputStream* _iniOSStream;
	NSOutputStream* _outiOSStream;
	NSDictionary* _headers;
	id _transferType;
	unsigned _statusCode;
	int _connectionNumber;
	int _state;
	id<AWProxyHTTPConnectionDelegate> _delegate;
	AWMutableURLRequest* _req;
}
@property(retain, nonatomic) AWMutableURLRequest* req;
@property(assign, nonatomic) id<AWProxyHTTPConnectionDelegate> delegate;
+(void)cleanUp;
+(void)reportConnections;
+(id)connectionWithRequest:(id)request delegate:(id)delegate;
-(void)destroyNTLMInfo:(ntlm_info*)info;
-(ntlm_info*)createNTLMInfo;
-(void)cancelAuthenticationChallenge:(id)challenge;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
-(id)currentAuthenticationChallenge;
-(void)truffleShuffle;
-(id)getNTLMChallengeFromResponse:(id)response;
-(void)handleUnauthorizedForResponse:(id)response;
-(void)handleResponseFromStream:(id)stream;
-(void)handleSSLErrorsFromStream:(id)stream;
-(BOOL)writeMessageToStream:(id)stream shouldClose:(BOOL)close withNTLM:(int)ntlm;
-(void)handleHasSpaceAvailableOnStream:(id)stream;
-(void)handleEndEncounteredOnStream:(id)stream;
-(void)stream:(id)stream handleEvent:(unsigned)event;
-(BOOL)configureStreamsForF5Proxy:(id*)f5Proxy;
-(BOOL)configureStreamsForMAGProxy:(id*)magproxy;
-(BOOL)shouldIgnoreSSLErrorsForHost:(id)host;
-(BOOL)configureStreamsForStandardProxy:(id*)standardProxy;
-(void)cancel;
-(void)cancelLoad;
-(id)secTrustResultTypeString:(unsigned)string;
-(BOOL)verifyCertificateForStream:(id)stream;
-(void)start;
-(CFHTTPMessageRef)HTTPRequest;
-(void)dealloc;
-(id)initWithRequest:(id)request delegate:(id)delegate;
-(id)getKey;
@end

