//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/invocation/MockitoMethod.java
//

#ifndef _OrgMockitoInternalInvocationMockitoMethod_H_
#define _OrgMockitoInternalInvocationMockitoMethod_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

#import "JreEmulation.h"

@protocol OrgMockitoInternalInvocationMockitoMethod < NSObject, JavaObject >

- (NSString *)getName;

- (IOSClass *)getReturnType;

- (IOSObjectArray *)getParameterTypes;

- (IOSObjectArray *)getExceptionTypes;

- (jboolean)isVarArgs;

- (JavaLangReflectMethod *)getJavaMethod;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationMockitoMethod_init() {}

#endif // _OrgMockitoInternalInvocationMockitoMethod_H_
