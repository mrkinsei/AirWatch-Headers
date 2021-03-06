/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class AWEnrollmentAccount, NSURL;

@interface AWKeyStore : NSObject {
	NSURL* _hostURL;
	AWEnrollmentAccount* _account;
	int _usageType;
}
@property(assign, nonatomic) int usageType;
@property(retain, nonatomic) AWEnrollmentAccount* account;
@property(retain, nonatomic) NSURL* hostURL;
+(id)keySizeTextFromKeySize:(int)keySize;
-(id)payloadDictionaryForRetrieveKey;
-(id)payloadDictionaryForStoreKey:(id)storeKey keySize:(int)size;
-(id)retrieveKeyPayload;
-(id)storeKeyPayloadWithEncodedKey:(id)encodedKey keySize:(int)size;
-(void)createHMACRetrieveKeyRequestWithPayload:(id)payload completion:(id)completion;
-(void)createSVCRetrieveKeyRequestWithPayload:(id)payload completion:(id)completion;
-(void)retreiveKeyWithCompletionBlock:(id)completionBlock;
-(void)createHMACStoreKeyRequestWithPayload:(id)payload completion:(id)completion;
-(void)createSVCStoreKeyRequestWithPayload:(id)payload completion:(id)completion;
-(void)storeKey:(id)key keySize:(int)size callbackBlock:(id)block;
-(void)dealloc;
-(id)initWithDeviceServicesURL:(id)deviceServicesURL account:(id)account usage:(int)usage;
@end

