//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Member.java
//

#ifndef _JavaLangReflectMember_H_
#define _JavaLangReflectMember_H_

@class IOSClass;

#import "JreEmulation.h"

#define JavaLangReflectMember_DECLARED 1
#define JavaLangReflectMember_PUBLIC 0

@protocol JavaLangReflectMember < NSObject, JavaObject >

- (IOSClass *)getDeclaringClass;

- (jint)getModifiers;

- (NSString *)getName;

- (jboolean)isSynthetic;

@end

__attribute__((always_inline)) inline void JavaLangReflectMember_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectMember, PUBLIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectMember, DECLARED, jint)

#endif // _JavaLangReflectMember_H_
