/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AirWatch-Structs.h"


__attribute__((visibility("hidden")))
@interface AWMyDeviceGeneralInfo : NSObject {
}
+(float)heightForWidth:(float)width;
+(void)drawWithSize:(CGSize)size highlighted:(BOOL)highlighted;
+(void)initValues;
+(float)versionHeightWithWidth:(float)width;
+(float)modelHeightWithWidth:(float)width;
+(float)friendlyNameHeightWithWidth:(float)width;
+(float)connectivityTextHeightWithWidth:(float)width;
+(float)enrollmentTextHeightWithWidth:(float)width;
+(float)complianceTextHeightWithWidth:(float)width;
+(id)connectivityStatusText;
+(id)complianceStatusText;
+(id)enrollmentStatusText;
+(id)connectivityStatusIcon;
+(id)complianceSatusIcon;
+(id)enrollmentStatusIcon;
+(id)cellularIPAddress;
+(id)wifiIPAddress;
+(id)wifiAdapter;
+(id)cellularAdapter;
+(double)recentUsageTime:(BOOL)time callLogs:(BOOL)logs;
+(double)recentUsageTime;
+(id)totalRoamingDataUsage;
+(id)totalDataUsagefor:(int)usagefor;
+(id)totalCallDuration;
+(id)recentCallLog;
+(id)recentRoamingDataLog;
+(id)recentDataLogFor:(int)aFor;
+(id)batteryState;
+(id)batteryLevel;
+(id)freeStorage;
+(id)totalStorage;
+(id)memoryStatusFor:(int)aFor;
+(void)updateSSPDetails;
+(BOOL)nativeEnrollmentAvailable;
+(id)phoneNumber;
+(id)model;
+(id)friendlyModelName:(id)name;
+(id)machineName;
+(id)userName;
+(id)friendlyName;
+(id)jailbreakIcon;
+(id)complianceIcon;
+(id)deviceModelIcon;
@end
