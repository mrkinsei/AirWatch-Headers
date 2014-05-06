/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWProfilePayload.h"


@interface AWOfflineAccessPayload : AWProfilePayload {
	BOOL _enableOfflineAccess;
	double _maximumSecondsAllowedOffline;
}
@property(readonly, assign, nonatomic) double maximumSecondsAllowedOffline;
@property(readonly, assign, nonatomic) BOOL enableOfflineAccess;
+(id)payloadTypeV2;
+(id)payloadType;
-(id)initWithDictionary:(id)dictionary;
@end

