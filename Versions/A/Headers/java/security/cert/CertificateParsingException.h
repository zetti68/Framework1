//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateParsingException.java
//

#ifndef _JavaSecurityCertCertificateParsingException_H_
#define _JavaSecurityCertCertificateParsingException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/security/cert/CertificateException.h"

#define JavaSecurityCertCertificateParsingException_serialVersionUID -7989222416793322029LL

@interface JavaSecurityCertCertificateParsingException : JavaSecurityCertCertificateException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void JavaSecurityCertCertificateParsingException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCertificateParsingException, serialVersionUID, jlong)

#endif // _JavaSecurityCertCertificateParsingException_H_
