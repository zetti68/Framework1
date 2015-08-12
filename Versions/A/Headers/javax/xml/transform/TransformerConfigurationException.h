//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerConfigurationException.java
//

#ifndef _JavaxXmlTransformTransformerConfigurationException_H_
#define _JavaxXmlTransformTransformerConfigurationException_H_

#include "J2ObjC_header.h"
#include "javax/xml/transform/TransformerException.h"

@class JavaLangThrowable;
@protocol JavaxXmlTransformSourceLocator;

@interface JavaxXmlTransformTransformerConfigurationException : JavaxXmlTransformTransformerException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
           withJavaLangThrowable:(JavaLangThrowable *)e;

- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangThrowable:(JavaLangThrowable *)e;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerConfigurationException)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_init(JavaxXmlTransformTransformerConfigurationException *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withJavaLangThrowable_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator, JavaLangThrowable *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withJavaLangThrowable_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, JavaLangThrowable *e) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerConfigurationException)

#endif // _JavaxXmlTransformTransformerConfigurationException_H_