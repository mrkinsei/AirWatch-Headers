/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSXMLParserDelegate.h"

@class NSData, NSXMLParser;

@interface AWXMLParser : NSObject <NSXMLParserDelegate> {
	id _completionBlock;
	NSXMLParser* _xmlParser;
	NSData* _parseData;
}
-(void)dealloc;
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(void)parseData:(id)data completionBlock:(id)block;
@end

