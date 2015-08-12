//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyStoreException.java
//

#ifndef _JavaSecurityKeyStoreException_H_
#define _JavaSecurityKeyStoreException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

@interface JavaSecurityKeyStoreException : JavaSecurityGeneralSecurityException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyStoreException)

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_(JavaSecurityKeyStoreException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_init(JavaSecurityKeyStoreException *self);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_withJavaLangThrowable_(JavaSecurityKeyStoreException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithJavaLangThrowable_(JavaSecurityKeyStoreException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyStoreException)

#endif // _JavaSecurityKeyStoreException_H_
