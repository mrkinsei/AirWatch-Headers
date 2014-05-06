/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWDataSamplerSample.h"

@class NSString;

@interface AWInterrogatorAnalyticsSample : AWDataSamplerSample {
	unsigned short _nameSize;
	unsigned short _valueSize;
	unsigned short _bundleSize;
	unsigned short _eventType;
	unsigned short _valueType;
	unsigned short _bundleVersionSize;
	NSString* _sessionUUID;
	NSString* _name;
	NSString* _value;
	NSString* _bundle;
	NSString* _bundleVersion;
	NSString* _bundleName;
}
@property(assign, nonatomic) NSString* bundleName;
@property(assign, nonatomic) NSString* bundleVersion;
@property(assign, nonatomic) NSString* bundle;
@property(assign, nonatomic) NSString* value;
@property(assign, nonatomic) NSString* name;
@property(assign, nonatomic) NSString* sessionUUID;
@property(assign, nonatomic) unsigned short bundleVersionSize;
@property(assign, nonatomic) unsigned short valueType;
@property(assign, nonatomic) unsigned short eventType;
@property(assign, nonatomic) unsigned short bundleSize;
@property(assign, nonatomic) unsigned short valueSize;
@property(assign, nonatomic) unsigned short nameSize;
-(void)dealloc;
-(id)data;
-(void)sample;
-(id)initWithName:(id)name andValue:(id)value sessionUUID:(id)uuid eventType:(int)type valueType:(int)type5 version:(id)version name:(id)name7;
-(id)init;
@end

