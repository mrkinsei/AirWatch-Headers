/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWDataSamplerSample.h"

@class NSString;

@interface AWInterrogatorSystemInfoSample : AWDataSamplerSample {
	unsigned _platformId;
	unsigned _osVersionMajor;
	unsigned _osVersionMinor;
	unsigned _osVersionBuild;
	unsigned short _processorArchticture;
	unsigned _processorInstructionSet;
	unsigned short _oemInfoSize;
	unsigned short _platformTypeSize;
	NSString* _oemInfo;
	NSString* _platformType;
}
@property(copy, nonatomic) NSString* platformType;
@property(copy, nonatomic) NSString* oemInfo;
@property(assign, nonatomic) unsigned short platformTypeSize;
@property(assign, nonatomic) unsigned short oemInfoSize;
@property(assign, nonatomic) unsigned processorInstructionSet;
@property(assign, nonatomic) unsigned short processorArchticture;
@property(assign, nonatomic) unsigned osVersionBuild;
@property(assign, nonatomic) unsigned osVersionMinor;
@property(assign, nonatomic) unsigned osVersionMajor;
@property(assign, nonatomic) unsigned platformId;
-(void)dealloc;
-(id)data;
-(void)sample;
-(id)init;
@end

