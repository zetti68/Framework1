//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/InvalidParameterException.java
//

#ifndef _JavaSecurityInvalidParameterException_H_
#define _JavaSecurityInvalidParameterException_H_

#import "JreEmulation.h"
#include "java/lang/IllegalArgumentException.h"

#define JavaSecurityInvalidParameterException_serialVersionUID -857968536935667808LL

@interface JavaSecurityInvalidParameterException : JavaLangIllegalArgumentException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecurityInvalidParameterException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInvalidParameterException, serialVersionUID, jlong)

#endif // _JavaSecurityInvalidParameterException_H_