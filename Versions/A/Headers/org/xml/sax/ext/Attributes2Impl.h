//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/Attributes2Impl.java
//

#ifndef _OrgXmlSaxExtAttributes2Impl_H_
#define _OrgXmlSaxExtAttributes2Impl_H_

@class IOSBooleanArray;
@protocol OrgXmlSaxAttributes;

#import "JreEmulation.h"
#include "org/xml/sax/ext/Attributes2.h"
#include "org/xml/sax/helpers/AttributesImpl.h"

@interface OrgXmlSaxExtAttributes2Impl : OrgXmlSaxHelpersAttributesImpl < OrgXmlSaxExtAttributes2 > {
}

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (jboolean)isDeclaredWithInt:(jint)index;

- (jboolean)isDeclaredWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (jboolean)isDeclaredWithNSString:(NSString *)qName;

- (jboolean)isSpecifiedWithInt:(jint)index;

- (jboolean)isSpecifiedWithNSString:(NSString *)uri
                       withNSString:(NSString *)localName;

- (jboolean)isSpecifiedWithNSString:(NSString *)qName;

- (void)setAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

- (void)removeAttributeWithInt:(jint)index;

- (void)setDeclaredWithInt:(jint)index
               withBoolean:(jboolean)value;

- (void)setSpecifiedWithInt:(jint)index
                withBoolean:(jboolean)value;

@end

__attribute__((always_inline)) inline void OrgXmlSaxExtAttributes2Impl_init() {}

#endif // _OrgXmlSaxExtAttributes2Impl_H_
