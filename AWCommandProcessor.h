/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWBaseMessageDelegate.h"

@class NSString;
@protocol AWCommandProcessorDelegate;

@interface AWCommandProcessor : NSObject <AWBaseMessageDelegate> {
	id<AWCommandProcessorDelegate> _delegate;
	NSString* _baseURLString;
	NSString* _requestorIdentifier;
}
@property(copy, nonatomic) NSString* requesterIdentifier;
@property(copy, nonatomic) NSString* baseURLString;
@property(assign, nonatomic) id<AWCommandProcessorDelegate> delegate;
-(BOOL)consoleSupportsSyncProfilesEndpoint;
-(BOOL)shouldUseNewCommandProcessorPath;
-(id)commandProcessorURL;
-(void)baseMessageSuccessful:(id)successful withData:(id)data;
-(void)baseMessageFailed:(id)failed withError:(id)error;
-(void)sendResponse:(id)response;
-(void)sendResult:(int)result command:(id)command requester:(id)requester;
-(id)payloadWithStatus:(int)status payloadIdentifier:(id)identifier requester:(id)requester;
-(void)requestRepublishingOfConfigurationCommandsWithCompletion:(id)completion;
-(void)loadCommands;
-(void)dealloc;
@end
