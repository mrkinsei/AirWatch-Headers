/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWPingerDelegate <NSObject>
-(void)pingFailed:(id)failed withHost:(id)host withScheme:(int)scheme withError:(id)error;
-(void)pingSuccessful:(id)successful withHost:(id)host withScheme:(int)scheme;
@optional
-(void)pingFailedForHost:(id)host withScheme:(int)scheme;
-(void)pingSuccessfulForHost:(id)host withScheme:(int)scheme;
@end
