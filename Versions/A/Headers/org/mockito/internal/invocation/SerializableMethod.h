//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/invocation/SerializableMethod.java
//

#ifndef _OrgMockitoInternalInvocationSerializableMethod_H_
#define _OrgMockitoInternalInvocationSerializableMethod_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/invocation/MockitoMethod.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

@interface OrgMockitoInternalInvocationSerializableMethod : NSObject < JavaIoSerializable, OrgMockitoInternalInvocationMockitoMethod >

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

- (IOSObjectArray *)getExceptionTypes;

- (JavaLangReflectMethod *)getJavaMethod;

- (NSString *)getName;

- (IOSObjectArray *)getParameterTypes;

- (IOSClass *)getReturnType;

- (NSUInteger)hash;

- (jboolean)isVarArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationSerializableMethod)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationSerializableMethod_initWithJavaLangReflectMethod_(OrgMockitoInternalInvocationSerializableMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgMockitoInternalInvocationSerializableMethod *new_OrgMockitoInternalInvocationSerializableMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationSerializableMethod)

#endif // _OrgMockitoInternalInvocationSerializableMethod_H_
