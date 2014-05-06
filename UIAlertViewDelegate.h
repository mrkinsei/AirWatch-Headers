/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIAlertViewDelegate <NSObject>
@optional
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
-(void)didPresentAlertView:(id)view;
-(void)willPresentAlertView:(id)view;
-(void)alertViewCancel:(id)cancel;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

