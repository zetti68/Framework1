//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/invocation/MockitoMethod.java
//

#ifndef _OrgMockitoInternalInvocationMockitoMethod_H_
#define _OrgMockitoInternalInvocationMockitoMethod_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

@protocol OrgMockitoInternalInvocationMockitoMethod < NSObject, JavaObject >

- (NSString *)getName;

- (IOSClass *)getReturnType;

- (IOSObjectArray *)getParameterTypes;

- (IOSObjectArray *)getExceptionTypes;

- (jboolean)isVarArgs;

- (JavaLangReflectMethod *)getJavaMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationMockitoMethod)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationMockitoMethod)

#endif // _OrgMockitoInternalInvocationMockitoMethod_H_
