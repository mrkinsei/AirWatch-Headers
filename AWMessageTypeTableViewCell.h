/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <UIKit/UITableViewCell.h>

@class NSString, UIView;

@interface AWMessageTypeTableViewCell : UITableViewCell {
	UIView* cellContentView;
	NSString* _cellTitle;
	NSString* _cellDetailValue;
}
@property(retain, nonatomic) NSString* cellDetailValue;
@property(retain, nonatomic) NSString* cellTitle;
-(void)dealloc;
-(void)setBackgroundColor:(id)color;
-(void)setFrame:(CGRect)frame;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

