//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/Error.java
//

#ifndef _JavaLangError_H_
#define _JavaLangError_H_

#import "JreEmulation.h"
#include "java/lang/Throwable.h"

#define JavaLangError_serialVersionUID 4980196508277280342LL

@interface JavaLangError : JavaLangThrowable {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

__attribute__((always_inline)) inline void JavaLangError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangError, serialVersionUID, jlong)

#endif // _JavaLangError_H_