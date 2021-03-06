/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import <UIKit/UIView.h>
#import "AirWatch-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "AWBasicScrubbingViewDelegate.h"
#import "AWBasicScrubViewDataSource.h"
#import "AWToCViewDelegate.h"

@class UIScrollView, UITapGestureRecognizer, NSArray, NSMutableArray, NSMutableDictionary, AWToCView, UITableView, AWPDFDocument, NSMutableSet, NSString, AWBasicScrubbingView;
@protocol AWDocumentContainerViewDataSource, AWDocumentContainerViewDelegate;

@interface AWDocumentContainerView : UIView <UIScrollViewDelegate, AWBasicScrubbingViewDelegate, AWBasicScrubViewDataSource, AWToCViewDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {
	NSMutableSet* visiblePages;
	BOOL isLeftViewVisible;
	AWToCView* tableOfContents;
	NSMutableSet* bookmarkSet;
	NSArray* sortedArray;
	BOOL isHighlighting;
	unsigned _splitViewPageNumber;
	unsigned _historyIndex;
	BOOL _isLeftViewVisible;
	BOOL _shouldLoopDocument;
	BOOL _isBookmarkedPagesOnly;
	id<AWDocumentContainerViewDataSource> _dataSource;
	id<AWDocumentContainerViewDelegate> _delegate;
	UIScrollView* _scrollView;
	AWBasicScrubbingView* _scrubView;
	UITapGestureRecognizer* _gestureRecognizer;
	unsigned _currentPage;
	NSString* _bookmarkIconPath;
	NSString* _highlightKeyword;
	NSMutableDictionary* _pdfPageViews;
	NSMutableArray* _historyQueue;
	AWPDFDocument* _documentWithTOCMapped;
	UIView* _documentOutlineView;
	UIView* _customHeaderView;
	UITableView* _documentOutlineTableView;
}
@property(retain, nonatomic) UITableView* documentOutlineTableView;
@property(retain, nonatomic) UIView* customHeaderView;
@property(retain, nonatomic) UIView* documentOutlineView;
@property(retain, nonatomic) NSMutableArray* historyQueue;
@property(assign, nonatomic) BOOL isBookmarkedPagesOnly;
@property(retain, nonatomic) NSString* highlightKeyword;
@property(retain, nonatomic) UITapGestureRecognizer* gestureRecognizer;
@property(retain, nonatomic) AWBasicScrubbingView* scrubView;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) AWPDFDocument* documentWithTOCMapped;
@property(assign, nonatomic) BOOL isLeftViewVisible;
@property(readonly, assign, nonatomic) NSMutableDictionary* pdfPageViews;
@property(retain, nonatomic) NSString* bookmarkIconPath;
@property(readonly, assign, nonatomic) unsigned currentPage;
@property(assign, nonatomic) BOOL shouldLoopDocument;
@property(assign, nonatomic) id<AWDocumentContainerViewDelegate> delegate;
@property(assign, nonatomic) id<AWDocumentContainerViewDataSource> dataSource;
-(BOOL)documentOutlineTableViewPresent:(id)present;
-(void)reloadScrubView;
-(void)goForthOnePage:(id)page;
-(void)goBackOnePage:(id)page;
-(void)updateButtons;
-(void)jumpToPreviousHistoryAnimated:(BOOL)previousHistoryAnimated;
-(void)jumpToNextHistoryAnimated:(BOOL)nextHistoryAnimated;
-(BOOL)hasPreviousHistory;
-(BOOL)hasNextHistory;
-(id)previousHistory;
-(id)nextHistory;
-(void)addToHistory:(id)history;
-(void)refreshOutline;
-(void)reloadData;
-(void)outlineThumbnailTapped:(id)tapped;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)TocView:(id)view didSelectHyperLink:(id)link;
-(void)TocView:(id)view didSelectPageNumber:(id)number;
-(unsigned)numberOfPagesInScrubView:(id)scrubView;
-(void)scrubView:(id)view didSelectIndex:(unsigned)index;
-(void)toggleMenuState:(id)state;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(float)screenWidthWithIsSplitScreen:(BOOL)isSplitScreen;
-(void)stopHighlighting;
-(void)highlightKeyword:(id)keyword;
-(void)layoutSubviews;
-(void)resizeTableOfContents;
-(void)scrollToIndex:(unsigned)index animated:(BOOL)animated writeHistory:(BOOL)history;
-(void)scrollToCurrentIndex;
-(void)scrollToIndex:(unsigned)index animated:(BOOL)animated;
-(CGRect)frameForPageAtIndex:(unsigned)index;
-(BOOL)isDisplayingPageForIndex:(unsigned)index;
-(void)splitViewControllerDidResize;
-(void)splitViewControllerWillResize;
-(void)splitViewDidToggleLeftSide:(BOOL)splitView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)tilePagesForceRender:(BOOL)render;
-(id)viewAtIndex:(unsigned)index;
-(CGSize)contentSizeForPagingScrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)didRotate;
-(void)willAnimateRotation;
-(void)rotateToInterface:(int)interface;
-(void)beforeRotateToInterface;
-(id)visiblePageWithPageNumber:(unsigned)pageNumber;
-(void)outlinePageChange:(id)change;
-(BOOL)removeBookmarkIconOnPage:(unsigned)page;
-(BOOL)addBookmarkIconToPage:(unsigned)page;
-(BOOL)bookmarkPageNumber:(id)number;
-(BOOL)removeBookmarkAtCurrentPage;
-(BOOL)bookmarkCurrentPage;
-(id)currentBookmarks;
-(void)refreshBookmarks;
-(void)setBookmarks:(id)bookmarks;
-(BOOL)isBookmarked;
-(unsigned)pageCount;
-(void)hideDocumentOutline;
-(void)showDocumentOutline;
-(void)toggleDocumentOutline;
-(void)hideTableOfContents;
-(void)showTableOfContents;
-(void)toggleTableOfContents;
-(void)setDocumentOutlineFrame:(CGRect)frame;
-(void)setTableOfContentsFrame:(CGRect)contentsFrame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

