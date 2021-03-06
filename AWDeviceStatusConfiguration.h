/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface AWDeviceStatusConfiguration : NSObject {
	NSURL* _deviceServicesURL;
	NSString* _endpointPath;
	NSString* _deviceStatusAction;
}
@property(copy, nonatomic) NSString* deviceStatusAction;
@property(copy, nonatomic) NSString* endpointPath;
@property(copy, nonatomic) NSURL* deviceServicesURL;
-(void)dealloc;
-(id)initWithHostName:(id)hostName endpointPath:(id)path deviceStatusAction:(id)action;
-(id)init;
@end

