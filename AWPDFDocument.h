/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "UIAlertViewDelegate.h"
#import <Foundation/NSObject.h>
#import "AWDocument.h"

@class NSMutableArray, UITextField, NSData, AWPDFHelper, NSString, NSURL;

@interface AWPDFDocument : NSObject <AWDocument, UIAlertViewDelegate> {
	dispatch_queue_s* documentDispatch;
	AWPDFHelper* _pdfHelper;
	id delegate;
	NSURL* _filePath;
	CGPDFDocumentRef _document;
	NSString* _password;
	UITextField* _passwordField;
	NSMutableArray* _flattenedList;
	NSData* _key;
}
@property(retain, nonatomic) NSMutableArray* flattenedList;
@property(retain, nonatomic) UITextField* passwordField;
@property(assign) CGPDFDocumentRef document;
@property(retain, nonatomic) NSData* key;
@property(readonly, assign, nonatomic) NSString* password;
@property(readonly, assign, nonatomic) NSURL* filePath;
@property(assign, nonatomic) id delegate;
-(void)initPDFHelper;
-(id)getTOCSectionTitleFromPage:(int)page;
-(void)flattenNode:(id)node;
-(BOOL)loadPDFatPath:(id)path withPassword:(id)password;
-(CGPDFPageRef)pageRefAtIndex:(unsigned)index;
-(void)flushCache;
-(id)rootTOCNode;
-(id)thumbnailAtIndex:(unsigned)index size:(CGSize)size;
-(id)pageViewAtIndex:(unsigned)index withFrame:(CGRect)frame;
-(unsigned)numberOfPages;
-(void)openDocument;
-(BOOL)doesUnlockWithPassword:(id)password;
-(BOOL)isFileLocked:(id)locked;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)displayPasswordPrompt;
-(void)dealloc;
-(void)openFileWithFilePath:(id)filePath password:(id)password;
-(id)init;
@end

