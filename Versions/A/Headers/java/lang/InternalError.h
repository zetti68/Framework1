//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/InternalError.java
//

#ifndef _JavaLangInternalError_H_
#define _JavaLangInternalError_H_

#import "JreEmulation.h"
#include "java/lang/Error.h"

#define JavaLangInternalError_serialVersionUID -9062593416125562365LL

@interface JavaLangInternalError : JavaLangError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangInternalError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangInternalError, serialVersionUID, jlong)

#endif // _JavaLangInternalError_H_
