//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/CompareEqual.java
//

#ifndef _OrgMockitoInternalMatchersCompareEqual_H_
#define _OrgMockitoInternalMatchersCompareEqual_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersCompareEqual : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersCompareEqual)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersCompareEqual_initWithJavaLangComparable_(OrgMockitoInternalMatchersCompareEqual *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersCompareEqual *new_OrgMockitoInternalMatchersCompareEqual_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersCompareEqual)

#endif // _OrgMockitoInternalMatchersCompareEqual_H_
