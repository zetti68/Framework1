//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/SAXResult.java
//

#ifndef _JavaxXmlTransformSaxSAXResult_H_
#define _JavaxXmlTransformSaxSAXResult_H_

#include "J2ObjC_header.h"
#include "javax/xml/transform/Result.h"

@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

@interface JavaxXmlTransformSaxSAXResult : NSObject < JavaxXmlTransformResult >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (id<OrgXmlSaxContentHandler>)getHandler;

- (id<OrgXmlSaxExtLexicalHandler>)getLexicalHandler;

- (NSString *)getSystemId;

- (void)setHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)handler;

- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxSAXResult)

FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformSaxSAXResult, FEATURE_, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXResult_init(JavaxXmlTransformSaxSAXResult *self);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXResult *new_JavaxXmlTransformSaxSAXResult_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXResult_initWithOrgXmlSaxContentHandler_(JavaxXmlTransformSaxSAXResult *self, id<OrgXmlSaxContentHandler> handler);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXResult *new_JavaxXmlTransformSaxSAXResult_initWithOrgXmlSaxContentHandler_(id<OrgXmlSaxContentHandler> handler) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxSAXResult)

#endif // _JavaxXmlTransformSaxSAXResult_H_
