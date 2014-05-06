/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSCoding.h"

@class NSNumber, NSString, NSDate, NSArray;

__attribute__((visibility("hidden")))
@interface AWComplianceInfo : NSObject <NSCoding> {
	NSNumber* _policyId;
	NSString* _policyName;
	NSString* _policyStatus;
	NSDate* _lastComplianceCheckOn;
	NSDate* _complianceFetchedOn;
	NSArray* _policyRules;
}
@property(retain, nonatomic) NSArray* policyRules;
@property(retain, nonatomic) NSDate* complianceFetchedOn;
@property(retain, nonatomic) NSDate* lastComplianceCheckOn;
@property(copy, nonatomic) NSString* policyStatus;
@property(copy, nonatomic) NSString* policyName;
@property(retain, nonatomic) NSNumber* policyId;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end

