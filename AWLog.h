/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface AWLog : NSObject {
	BOOL sendLogsOverWifiOnly;
	unsigned bgTask;
	int _outputDestinationMask;
	int _highestLogSeverity;
}
@property(assign, nonatomic) int highestLogSeverity;
@property(assign, nonatomic) int outputDestinationMask;
+(void)sendLogToAirWatchWithApplicationBundle:(id)applicationBundle numberOfEntries:(unsigned)entries;
+(void)sendLogModuleToAirWatchConsole:(id)airWatchConsole;
+(BOOL)purgeLogForModule:(id)module error:(id*)error;
+(BOOL)logError:(id)error methodName:(id)name message:(id)message error:(id*)error4;
+(BOOL)logWarning:(id)warning methodName:(id)name message:(id)message error:(id*)error;
+(BOOL)logInfo:(id)info methodName:(id)name message:(id)message error:(id*)error;
+(BOOL)logVerbose:(id)verbose methodName:(id)name message:(id)message error:(id*)error;
+(BOOL)registerModule:(id)module traceLevel:(int)level error:(id*)error;
+(BOOL)shutDown:(id*)down;
+(BOOL)startUp:(id*)up;
+(id)sharedInstance;
-(BOOL)isLogLevel:(int)level moreSevereThan:(int)than;
-(void)sendLogData:(id)data logType:(int)type logLevel:(int)level completion:(id)completion;
-(void)sendDeviceLogsWithCompletion:(id)completion;
-(void)sendApplicationLogsWithCompletion:(id)completion;
-(void)sendApplicationLogsFromBackground;
-(void)purgeLogFile;
-(void)writeLogString:(id)string toLogFile:(id)logFile;
-(void)logWithLogLevel:(int)logLevel methodName:(id)name line:(unsigned)line message:(id)message;
-(id)init;
-(void)dealloc;
-(void)setLogLevel:(int)level;
-(void)sendCrashLogs:(id)logs withCompletion:(id)completion;
@end

