/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AWCompliance : NSObject {
	NSArray* deviceCompromisedActions;
}
@property(retain, nonatomic) NSArray* deviceCompromisedActions;
+(BOOL)stopService:(id*)service;
+(BOOL)startService:(id*)service;
+(id)sharedInstance;
-(int)jailBrokenStatus;
-(void)refreshComplianceWithCurrentSettings;
-(void)handleApplicationWillEnterForegroundNotification:(id)handleApplication;
-(void)handleActions:(id)actions;
-(void)dealloc;
@end

