/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface AWReachability : NSObject {
	NSString* _host;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _flags;
}
@property(assign, nonatomic) SCNetworkReachabilityRef reachabilityRef;
@property(readonly, assign, nonatomic) unsigned flags;
@property(readonly, assign, nonatomic) NSString* host;
+(void)isHostReachable:(id)reachable callbackBlock:(id)block;
+(id)reachabilityWithHostName:(id)hostName;
-(BOOL)stopNotifier;
-(BOOL)startNotifier;
-(int)networkStatusForFlags:(unsigned)flags;
-(int)currentReachabilityStatus;
-(void)dealloc;
@end

