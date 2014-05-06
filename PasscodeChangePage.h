/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class PasscodeChangeView, UIImageView;

@interface PasscodeChangePage : UIView {
	UIImageView* workspaceImage;
	PasscodeChangeView* loginView;
	BOOL _hideKeyboard;
	id _changePressed;
	id _cancelPressed;
	CGRect _keyboardRect;
}
@property(assign, nonatomic) BOOL hideKeyboard;
@property(assign, nonatomic) CGRect keyboardRect;
@property(copy, nonatomic) id cancelPressed;
@property(copy, nonatomic) id changePressed;
-(void)layoutSubviews;
-(void)loginPressed:(id)pressed;
-(void)dismissKeyboard;
-(void)scrollViewToTextField:(id)textField;
-(void)keyboardHideNotification:(id)notification;
-(void)keyboardShowNotification:(id)notification;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame andPasscodeType:(int)type;
@end

