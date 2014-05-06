/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface AWUtility : NSObject {
}
+(id)pathForResource:(id)resource ofType:(id)type;
+(id)defaultSDKWorkSpaceScheme;
+(id)defaultSDKAgentScheme;
+(id)locationGroup;
+(void)setLocationGroup:(id)group;
+(void)setPreventCopyPaste:(BOOL)paste;
+(BOOL)preventCopyPaste;
+(void)setPrintEnabled:(BOOL)enabled;
+(BOOL)printingEnabled;
+(int)locationMode;
+(int)transmitInterval;
+(int)sampleInterval;
+(int)heartBeatInterval;
+(id)APNSToken;
+(void)setAPNSToken:(id)token;
+(id)workspaceIdentifier;
+(id)defaultSDKValueForKey:(id)key;
+(id)agentScheme;
+(BOOL)canUseAgent;
+(id)brokerAppScheme;
+(BOOL)canUseWorkspace;
+(BOOL)loadDeviceServicesURLWithCompletion:(id)completion;
+(void)saveURL:(id)url;
+(id)serverURLFromKeyChain;
+(id)deviceservicesURLFromKeyChain;
+(id)serverURLForDeviceServiceURL:(id)deviceServiceURL;
+(id)deviceservicesURLForServerURL:(id)serverURL;
@end

