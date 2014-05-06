/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWLocationAuthorizerDelegate.h"
#import "UIAlertViewDelegate.h"

@class AWSDK, NSManagedObject;

__attribute__((visibility("hidden")))
@interface AWAgentGeneralHandler : NSObject <UIAlertViewDelegate, AWLocationAuthorizerDelegate> {
	NSManagedObject* message;
	BOOL agentLaunched;
	BOOL _beaconIsTransmitting;
	BOOL _showCheckinAlert;
	BOOL _handledRegionMonitoring;
	BOOL _isFetchingDeviceStatus;
	BOOL _agentFstLaunched;
	BOOL _agentSndLaunched;
	BOOL _agentLaunched;
	AWSDK* _awsdk;
}
@property(retain, nonatomic) AWSDK* awsdk;
@property(assign, nonatomic) BOOL localEnrollmentStatus;
@property(assign, nonatomic) BOOL agentLaunched;
@property(assign, nonatomic) BOOL agentSndLaunched;
@property(assign, nonatomic) BOOL agentFstLaunched;
@property(assign, nonatomic) BOOL isFetchingDeviceStatus;
@property(assign, nonatomic) BOOL handledRegionMonitoring;
@property(assign, nonatomic) BOOL showCheckinAlert;
@property(assign, nonatomic) BOOL beaconIsTransmitting;
+(id)sharedInstance;
-(void)isWorkSpaceEnrolled:(id)enrolled;
-(void)handleMessageScenario;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)authorizer:(id)authorizer receivedResult:(int)result;
-(void)fetchDeviceStatus;
-(void)launchUnmanagedInstaller:(id)installer;
-(void)showAppRequestAlert;
-(void)registerForAPNS;
-(void)networkConnectionStatusChange:(id)change;
-(void)reachabilityChanged:(id)changed;
-(void)alertCheckInNotification;
-(void)adjustBranding;
-(void)handleRegionMonitoringInitialSample;
-(void)receivedLocationUpdate:(id)update;
-(void)getassetInfo;
-(void)deviceCheckInCheckOut:(id)checkOut;
-(void)launchCompatibility;
-(void)checkForUdidStorageFromBackground;
-(void)checkForUdidStorage;
-(void)clearAssetInfo;
-(void)newMessageDidSave:(id)newMessage;
-(void)handleError:(id)error;
-(void)beaconFailed:(id)failed;
-(void)beaconDidSend:(id)beacon;
-(BOOL)checkUpdate;
@end
