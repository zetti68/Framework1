//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalAccessError.java
//

#ifndef _JavaLangIllegalAccessError_H_
#define _JavaLangIllegalAccessError_H_

#import "JreEmulation.h"
#include "java/lang/IncompatibleClassChangeError.h"

#define JavaLangIllegalAccessError_serialVersionUID -8988904074992417891LL

@interface JavaLangIllegalAccessError : JavaLangIncompatibleClassChangeError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangIllegalAccessError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangIllegalAccessError, serialVersionUID, jlong)

#endif // _JavaLangIllegalAccessError_H_
