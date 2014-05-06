/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>
#import "UITableViewDelegate.h"
#import "UISearchBarDelegate.h"

@protocol AWDocumentSearchViewControllerDelegate;

@interface AWDocumentSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	BOOL searchVisible;
	float _contentWidth;
	id<AWDocumentSearchViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) float contentWidth;
@property(assign, nonatomic) id<AWDocumentSearchViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL searchVisible;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)dismissPopoverAnimated:(BOOL)animated;
-(void)presentSearchFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

