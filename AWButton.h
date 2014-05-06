/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <UIKit/UIControl.h>

@class UIImage, UILabel;

@interface AWButton : UIControl {
	UIImage* _presentationImage;
	UIImage* _highlightImage;
	UIImage* _backgroundImage;
	UILabel* _titleLabel;
}
@property(retain, nonatomic) UIImage* backgroundImage;
@property(retain, nonatomic) UIImage* highlightImage;
@property(readonly, assign, nonatomic) UILabel* titleLabel;
-(void)drawRect:(CGRect)rect;
-(void)stateChanged;
-(id)initWithFrame:(CGRect)frame;
@end

