//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/GreaterOrEqual.java
//

#ifndef _OrgMockitoInternalMatchersGreaterOrEqual_H_
#define _OrgMockitoInternalMatchersGreaterOrEqual_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersGreaterOrEqual : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersGreaterOrEqual)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersGreaterOrEqual_initWithJavaLangComparable_(OrgMockitoInternalMatchersGreaterOrEqual *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersGreaterOrEqual *new_OrgMockitoInternalMatchersGreaterOrEqual_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersGreaterOrEqual)

#endif // _OrgMockitoInternalMatchersGreaterOrEqual_H_
