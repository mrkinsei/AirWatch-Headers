/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"

@class AWCustomTableViewCellTypeValue1;

__attribute__((visibility("hidden")))
@interface AWCustomCellTypeValue1View : UIView {
	AWCustomTableViewCellTypeValue1* _cell;
	BOOL _highlighted;
	BOOL _showImageinView;
}
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame cell:(id)cell;
@end

