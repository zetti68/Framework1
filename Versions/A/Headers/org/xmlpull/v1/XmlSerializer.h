//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/XmlSerializer.java
//

#ifndef _OrgXmlpullV1XmlSerializer_H_
#define _OrgXmlpullV1XmlSerializer_H_

#include "J2ObjC_header.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaLangBoolean;

@protocol OrgXmlpullV1XmlSerializer < NSObject, JavaObject >

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)state;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

- (id)getPropertyWithNSString:(NSString *)name;

- (void)setOutputWithJavaIoOutputStream:(JavaIoOutputStream *)os
                           withNSString:(NSString *)encoding;

- (void)setOutputWithJavaIoWriter:(JavaIoWriter *)writer;

- (void)startDocumentWithNSString:(NSString *)encoding
              withJavaLangBoolean:(JavaLangBoolean *)standalone;

- (void)endDocument;

- (void)setPrefixWithNSString:(NSString *)prefix
                 withNSString:(NSString *)namespace_;

- (NSString *)getPrefixWithNSString:(NSString *)namespace_
                        withBoolean:(jboolean)generatePrefix;

- (jint)getDepth;

- (NSString *)getNamespace;

- (NSString *)getName;

- (id<OrgXmlpullV1XmlSerializer>)startTagWithNSString:(NSString *)namespace_
                                         withNSString:(NSString *)name;

- (id<OrgXmlpullV1XmlSerializer>)attributeWithNSString:(NSString *)namespace_
                                          withNSString:(NSString *)name
                                          withNSString:(NSString *)value;

- (id<OrgXmlpullV1XmlSerializer>)endTagWithNSString:(NSString *)namespace_
                                       withNSString:(NSString *)name;

- (id<OrgXmlpullV1XmlSerializer>)textWithNSString:(NSString *)text;

- (id<OrgXmlpullV1XmlSerializer>)textWithCharArray:(IOSCharArray *)buf
                                           withInt:(jint)start
                                           withInt:(jint)len;

- (void)cdsectWithNSString:(NSString *)text;

- (void)entityRefWithNSString:(NSString *)text;

- (void)processingInstructionWithNSString:(NSString *)text;

- (void)commentWithNSString:(NSString *)text;

- (void)docdeclWithNSString:(NSString *)text;

- (void)ignorableWhitespaceWithNSString:(NSString *)text;

- (void)flush;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1XmlSerializer)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1XmlSerializer)

#endif // _OrgXmlpullV1XmlSerializer_H_
