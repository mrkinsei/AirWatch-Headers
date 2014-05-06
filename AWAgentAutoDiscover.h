/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface AWAgentAutoDiscover : NSObject {
	BOOL _autodiscoveryReturnURL;
	BOOL _hideEmailField;
	BOOL _removeEmailField;
	BOOL _showGroupId;
}
@property(assign, nonatomic) BOOL showGroupId;
@property(assign, nonatomic) BOOL removeEmailField;
@property(assign, nonatomic) BOOL hideEmailField;
@property(assign, nonatomic) BOOL autodiscoveryReturnURL;
+(id)sharedInstance;
-(void)getServerVersionforServer:(id)server withCompletionBlock:(id)completionBlock;
-(void)checkForAutoDiscoverServerInfo:(id)autoDiscoverServerInfo;
@end

