/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AWProfileSetting : NSObject {
	NSString* _name;
	id _value;
}
@property(retain, nonatomic) id value;
@property(copy, nonatomic) NSString* name;
-(void)dealloc;
-(id)initWithName:(id)name value:(id)value;
@end

