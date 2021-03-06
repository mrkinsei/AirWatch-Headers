/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSURLConnection;
@protocol AWRedirectValidatorDelegate;

@interface AWURLRedirectValidator : NSObject {
	id<AWRedirectValidatorDelegate> delegate;
	NSURLConnection* _pingConnection;
	id<AWRedirectValidatorDelegate> _delegate;
}
@property(assign, nonatomic) id<AWRedirectValidatorDelegate> delegate;
-(void)dealloc;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)validateHost:(id)host;
@end

