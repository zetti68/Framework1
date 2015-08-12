//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/DocumentBuilder.java
//

#ifndef _JavaxXmlParsersDocumentBuilder_H_
#define _JavaxXmlParsersDocumentBuilder_H_

#include "J2ObjC_header.h"

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaxXmlValidationSchema;
@class OrgXmlSaxInputSource;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocument;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

@interface JavaxXmlParsersDocumentBuilder : NSObject

#pragma mark Public

- (id<OrgW3cDomDOMImplementation>)getDOMImplementation;

- (JavaxXmlValidationSchema *)getSchema;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (jboolean)isXIncludeAware;

- (id<OrgW3cDomDocument>)newDocument OBJC_METHOD_FAMILY_NONE;

- (id<OrgW3cDomDocument>)parseWithJavaIoFile:(JavaIoFile *)f;

- (id<OrgW3cDomDocument>)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)is;

- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is;

- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is
                                       withNSString:(NSString *)systemId;

- (id<OrgW3cDomDocument>)parseWithNSString:(NSString *)uri;

- (void)reset;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)er;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)eh;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersDocumentBuilder)

FOUNDATION_EXPORT void JavaxXmlParsersDocumentBuilder_init(JavaxXmlParsersDocumentBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersDocumentBuilder)

#endif // _JavaxXmlParsersDocumentBuilder_H_
