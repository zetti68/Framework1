//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/util/ObjectMethodsGuru.java
//

#ifndef _OrgMockitoInternalUtilObjectMethodsGuru_H_
#define _OrgMockitoInternalUtilObjectMethodsGuru_H_

@class JavaLangReflectMethod;
@protocol OrgMockitoInternalInvocationMockitoMethod;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define OrgMockitoInternalUtilObjectMethodsGuru_serialVersionUID -1286718569065470494LL

@interface OrgMockitoInternalUtilObjectMethodsGuru : NSObject < JavaIoSerializable > {
}

- (jboolean)isToStringWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isToStringWithOrgMockitoInternalInvocationMockitoMethod:(id<OrgMockitoInternalInvocationMockitoMethod>)method;

- (jboolean)isEqualsMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isHashCodeMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isCompareToMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilObjectMethodsGuru_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalUtilObjectMethodsGuru, serialVersionUID, jlong)

#endif // _OrgMockitoInternalUtilObjectMethodsGuru_H_