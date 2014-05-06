/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface AWBeaconPayload : NSObject {
	BOOL _value;
	NSString* _transactionIdentifier;
	NSString* _AWVersion;
	NSString* _APNSToken;
	NSString* _bundleIdentifier;
	NSString* _deviceUDID;
	NSString* _deviceName;
	NSString* _deviceFriendlyName;
	NSString* _deviceModel;
	NSString* _locationGroup;
	int _deviceType;
	NSString* _emailAddress;
	NSString* _groupCode;
	NSString* _OSVersion;
	NSString* _phoneNumber;
	NSString* _WiFiMACAddress;
	NSString* _WiFiIpAddress;
	NSDate* _locationSampleDate;
	NSArray* _compliancePolicies;
	double _latitude;
	double _longitude;
	double _altitude;
	double _speed;
}
@property(retain, nonatomic) NSArray* compliancePolicies;
@property(retain, nonatomic) NSDate* locationSampleDate;
@property(assign, nonatomic) double speed;
@property(assign, nonatomic) double altitude;
@property(assign, nonatomic) double longitude;
@property(assign, nonatomic) double latitude;
@property(copy, nonatomic) NSString* WiFiIpAddress;
@property(copy, nonatomic) NSString* WiFiMACAddress;
@property(copy, nonatomic) NSString* phoneNumber;
@property(copy, nonatomic) NSString* OSVersion;
@property(copy, nonatomic) NSString* groupCode;
@property(copy, nonatomic) NSString* emailAddress;
@property(assign, nonatomic) int deviceType;
@property(copy, nonatomic) NSString* locationGroup;
@property(copy, nonatomic) NSString* deviceModel;
@property(copy, nonatomic) NSString* deviceFriendlyName;
@property(copy, nonatomic) NSString* deviceName;
@property(copy, nonatomic) NSString* deviceUDID;
@property(assign, nonatomic) BOOL value;
@property(copy, nonatomic) NSString* bundleIdentifier;
@property(copy, nonatomic) NSString* APNSToken;
@property(copy, nonatomic) NSString* AWVersion;
@property(copy, nonatomic) NSString* transactionIdentifier;
-(void)dealloc;
-(id)initWithAPNSToken:(id)apnstoken;
@end
