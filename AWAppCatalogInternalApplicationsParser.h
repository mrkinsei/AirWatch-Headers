/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWXMLParser.h"

@class NSString, AWAppCatalogApplication, NSMutableArray;

@interface AWAppCatalogInternalApplicationsParser : AWXMLParser {
	NSMutableArray* _applications;
	NSString* _currentElementName;
	AWAppCatalogApplication* _currentApplication;
}
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(void)dealloc;
@end

