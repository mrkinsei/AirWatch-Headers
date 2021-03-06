/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSXMLParserDelegate.h"

@class NSString, NSMutableDictionary;
@protocol AWSOAPSerializationDelegate;

@interface AWSOAPSerialization : NSObject <NSXMLParserDelegate> {
	BOOL _parserInSoapBody;
	NSString* _currentElementName;
	NSMutableDictionary* _resultInfoBuffer;
	id<AWSOAPSerializationDelegate> _delegate;
}
@property(assign, nonatomic) id<AWSOAPSerializationDelegate> delegate;
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(void)deserializeResponseData:(id)data;
-(id)payloadWithActionURL:(id)actionURL namespaceURL:(id)url paramaters:(id)paramaters;
-(void)dealloc;
@end

