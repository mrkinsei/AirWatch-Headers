/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AWActiveDirectoryAccount : NSObject {
	NSString* _domain;
	NSString* _username;
	NSString* _password;
}
@property(copy, nonatomic) NSString* password;
@property(copy, nonatomic) NSString* username;
@property(copy, nonatomic) NSString* domain;
-(id)initWithDomain:(id)domain username:(id)username password:(id)password;
-(id)init;
@end

