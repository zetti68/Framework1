//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/InstantiationException.java
//

#ifndef _JavaLangInstantiationException_H_
#define _JavaLangInstantiationException_H_

@class IOSClass;

#import "JreEmulation.h"
#include "java/lang/ReflectiveOperationException.h"

#define JavaLangInstantiationException_serialVersionUID -8441929162975509110LL

@interface JavaLangInstantiationException : JavaLangReflectiveOperationException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

@end

__attribute__((always_inline)) inline void JavaLangInstantiationException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangInstantiationException, serialVersionUID, jlong)

#endif // _JavaLangInstantiationException_H_