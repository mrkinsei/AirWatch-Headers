/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AWProfilePayload : NSObject {
	NSDictionary* _infoDictionary;
}
@property(retain, nonatomic) NSDictionary* infoDictionary;
+(id)payloadTypeV2;
+(id)payloadType;
-(id)toDictionary;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end

