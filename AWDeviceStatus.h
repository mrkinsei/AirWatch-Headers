/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDeviceStatus : NSObject {
	BOOL _isManaged;
	int _enrollmentStatus;
	int _complianceStatus;
	NSString* _group;
}
@property(copy, nonatomic) NSString* group;
@property(assign, nonatomic) int complianceStatus;
@property(assign, nonatomic) int enrollmentStatus;
@property(assign, nonatomic) BOOL isManaged;
-(id)dictionary;
-(void)dealloc;
@end

