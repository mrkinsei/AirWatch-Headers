/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AWAgentGeofenceArea : NSObject {
	NSString* _geofenceName;
	NSString* _lattitude;
	NSString* _longitude;
	NSNumber* _radius;
	NSString* _uuid;
}
@property(copy, nonatomic) NSString* uuid;
@property(copy, nonatomic) NSNumber* radius;
@property(copy, nonatomic) NSString* longitude;
@property(copy, nonatomic) NSString* lattitude;
@property(copy, nonatomic) NSString* geofenceName;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end

