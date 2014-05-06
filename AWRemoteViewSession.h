/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "remoteViewTransmitterDelegate.h"

@class UIWindow, AWRemoteViewTransmitter, NSDate, NSTimer;
@protocol AWRemoteViewSessionDelegate;

@interface AWRemoteViewSession : NSObject <remoteViewTransmitterDelegate> {
	BOOL _isRunning;
	int _numberOfRepetitions;
	NSDate* _timeStamp;
	int _numberOfScreenshotSent;
	NSTimer* _captureTimer;
	AWRemoteViewTransmitter* _transmitter;
	NSDate* _sendTime;
	int _deviceOrientation;
	UIWindow* _mainWindow;
	id<AWRemoteViewSessionDelegate> _delegate;
	double _captureSleepDuration;
}
@property(retain, nonatomic) NSDate* sendTime;
@property(retain, nonatomic) NSDate* timeStamp;
@property(assign, nonatomic) UIWindow* mainWindow;
@property(assign, nonatomic) int deviceOrientation;
@property(readonly, assign, nonatomic) AWRemoteViewTransmitter* transmitter;
@property(readonly, assign, nonatomic) NSTimer* captureTimer;
@property(assign, nonatomic) int numberOfScreenshotSent;
@property(assign, nonatomic) int numberOfRepetitions;
@property(assign, nonatomic) double captureSleepDuration;
@property(readonly, assign, nonatomic) BOOL isRunning;
@property(assign, nonatomic) id<AWRemoteViewSessionDelegate> delegate;
-(id)screenshotImage;
-(void)deviceOrientationDidChangeNotification:(id)deviceOrientation;
-(void)remoteView:(id)view didFailWithError:(id)error;
-(void)remoteView:(id)view didFinishSendingData:(id)data;
-(void)capture;
-(void)resetScreenCapture;
-(void)stopRemoteView;
-(void)startRemoteView;
-(void)dealloc;
-(id)init;
@end
