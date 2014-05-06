/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSStreamDelegate.h"

@class NSMutableData, NSData, AWDataPayload, NSString, NSInputStream, NSOutputStream;
@protocol AWInterrogatorTransmitterDelegate;

@interface AWInterrogatorTransmitter : NSObject <NSStreamDelegate> {
	id<AWInterrogatorTransmitterDelegate> _delegate;
	NSString* _host;
	int _port;
	AWDataPayload* _payload;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _readBuffer;
	NSMutableData* _writeBuffer;
	int _writtenByteCount;
	NSData* token;
	BOOL isTransmitting;
	BOOL didReceiveReadyRepsonse;
	unsigned _sampleModules;
	BOOL onlyGPS;
}
@property(assign, nonatomic) BOOL onlyGPS;
@property(retain, nonatomic) id<AWInterrogatorTransmitterDelegate> delegate;
-(void)processPacketResponse:(id)response;
-(BOOL)sendPacket:(id)packet error:(id*)error;
-(BOOL)startMessageSendSequence:(id*)sequence;
-(void)destroyStreams;
-(void)createStreams;
-(void)stream:(id)stream handleEvent:(unsigned)event;
-(void)dealloc;
-(id)initWithInterrogatorConfiguration:(id)interrogatorConfiguration payload:(id)payload;
@end

