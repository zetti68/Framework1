//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/DOMImplementationImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomDOMImplementationImpl_H_
#define _OrgApacheHarmonyXmlDomDOMImplementationImpl_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/DOMImplementation.h"

@protocol OrgW3cDomDocument;
@protocol OrgW3cDomDocumentType;

@interface OrgApacheHarmonyXmlDomDOMImplementationImpl : NSObject < OrgW3cDomDOMImplementation >

#pragma mark Public

- (id<OrgW3cDomDocument>)createDocumentWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName
                          withOrgW3cDomDocumentType:(id<OrgW3cDomDocumentType>)doctype;

- (id<OrgW3cDomDocumentType>)createDocumentTypeWithNSString:(NSString *)qualifiedName
                                               withNSString:(NSString *)publicId
                                               withNSString:(NSString *)systemId;

- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

+ (OrgApacheHarmonyXmlDomDOMImplementationImpl *)getInstance;

- (jboolean)hasFeatureWithNSString:(NSString *)feature
                      withNSString:(NSString *)version_;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomDOMImplementationImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDOMImplementationImpl_init(OrgApacheHarmonyXmlDomDOMImplementationImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMImplementationImpl *new_OrgApacheHarmonyXmlDomDOMImplementationImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMImplementationImpl *OrgApacheHarmonyXmlDomDOMImplementationImpl_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDOMImplementationImpl)

#endif // _OrgApacheHarmonyXmlDomDOMImplementationImpl_H_
