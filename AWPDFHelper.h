/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AirWatch-Structs.h"

@class AWCryptData;

@interface AWPDFHelper : NSObject {
	CGDataProviderRef _dataProvider;
	CGDataProviderSequentialCallbacks _callBacks;
	void* _infoAddress;
	AWCryptData* _cryptData;
}
@property(retain, nonatomic) AWCryptData* cryptData;
-(CGDataProviderRef)createPDFAndGetProviderForPdfDocumentAtUrl:(id)url withKey:(id)key;
-(CGPDFDocumentRef)createPDFDocumentAtURL:(id)url withKey:(id)key;
-(void)dealloc;
@end

