/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWProfilePayload.h"


@interface AWSSOPayload : AWProfilePayload {
	BOOL _enableSingleSignOn;
}
@property(readonly, assign, nonatomic) BOOL enableSingleSignOn;
+(id)payloadTypeV2;
+(id)payloadType;
-(id)initWithDictionary:(id)dictionary;
@end
