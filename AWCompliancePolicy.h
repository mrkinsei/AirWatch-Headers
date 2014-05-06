/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSDate, NSString;

@interface AWCompliancePolicy : NSObject {
	NSString* _policyIdentifier;
	NSString* _policyName;
	NSString* _policyStatus;
	int _status;
	NSDate* _lastComplicanceCheck;
	NSDictionary* _rule;
}
@property(retain, nonatomic) NSDictionary* rule;
@property(retain, nonatomic) NSDate* lastComplicanceCheck;
@property(assign, nonatomic) int status;
@property(copy, nonatomic) NSString* policyStatus;
@property(copy, nonatomic) NSString* policyName;
@property(assign) NSString* policyIdentifier;
-(void)evaluateCompliance;
-(id)init;
@end

