//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/FactoryConfigurationError.java
//

#ifndef _JavaxXmlParsersFactoryConfigurationError_H_
#define _JavaxXmlParsersFactoryConfigurationError_H_

#include "J2ObjC_header.h"
#include "java/lang/Error.h"

@class JavaLangException;

@interface JavaxXmlParsersFactoryConfigurationError : JavaLangError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangException:(JavaLangException *)e;

- (instancetype)initWithJavaLangException:(JavaLangException *)e
                             withNSString:(NSString *)msg;

- (instancetype)initWithNSString:(NSString *)msg;

- (JavaLangException *)getException;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersFactoryConfigurationError)

FOUNDATION_EXPORT void JavaxXmlParsersFactoryConfigurationError_init(JavaxXmlParsersFactoryConfigurationError *self);

FOUNDATION_EXPORT JavaxXmlParsersFactoryConfigurationError *new_JavaxXmlParsersFactoryConfigurationError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlParsersFactoryConfigurationError_initWithNSString_(JavaxXmlParsersFactoryConfigurationError *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlParsersFactoryConfigurationError *new_JavaxXmlParsersFactoryConfigurationError_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlParsersFactoryConfigurationError_initWithJavaLangException_(JavaxXmlParsersFactoryConfigurationError *self, JavaLangException *e);

FOUNDATION_EXPORT JavaxXmlParsersFactoryConfigurationError *new_JavaxXmlParsersFactoryConfigurationError_initWithJavaLangException_(JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlParsersFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaxXmlParsersFactoryConfigurationError *self, JavaLangException *e, NSString *msg);

FOUNDATION_EXPORT JavaxXmlParsersFactoryConfigurationError *new_JavaxXmlParsersFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaLangException *e, NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersFactoryConfigurationError)

#endif // _JavaxXmlParsersFactoryConfigurationError_H_
