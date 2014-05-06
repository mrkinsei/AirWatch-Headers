/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface AWTabBarItem : NSObject <NSCopying> {
	unsigned uuid;
	bool _isNewEmptyTab;
	NSString* _title;
}
@property(assign, nonatomic) bool isNewEmptyTab;
@property(copy, nonatomic) NSString* title;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)initWithTitle:(id)title;
-(id)init;
-(void)dealloc;
@end

