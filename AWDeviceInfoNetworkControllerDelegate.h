/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWDeviceInfoNetworkControllerDelegate <NSObject>
-(void)networkController:(id)controller didReceiveData:(id)data;
-(void)networkController:(id)controller didFailWithError:(id)error;
@optional
-(void)networkController:(id)controller didReceiveResponse:(id)response;
@end

