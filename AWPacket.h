/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>

@class NSData;

@interface AWPacket : NSObject {
	NSData* key;
	NSData* _payload;
}
@property(retain, nonatomic) NSData* payload;
+(id)packetDecrypt:(id)decrypt privateKey:(SecKey*)key error:(id*)error;
+(id)packetEncrypt:(id)encrypt publicKey:(SecKey*)key error:(id*)error;
-(id)initWithData:(id)data;
@end

