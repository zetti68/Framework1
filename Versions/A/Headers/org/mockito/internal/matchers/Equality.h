//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/Equality.java
//

#ifndef _OrgMockitoInternalMatchersEquality_H_
#define _OrgMockitoInternalMatchersEquality_H_

#include "J2ObjC_header.h"

@interface OrgMockitoInternalMatchersEquality : NSObject

#pragma mark Public

- (instancetype)init;

+ (jboolean)areEqualWithId:(id)o1
                    withId:(id)o2;

#pragma mark Package-Private

+ (jboolean)areArrayElementsEqualWithId:(id)o1
                                 withId:(id)o2;

+ (jboolean)areArrayLengthsEqualWithId:(id)o1
                                withId:(id)o2;

+ (jboolean)areArraysEqualWithId:(id)o1
                          withId:(id)o2;

+ (jboolean)isArrayWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEquality)

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArraysEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArrayLengthsEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_areArrayElementsEqualWithId_withId_(id o1, id o2);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersEquality_isArrayWithId_(id o);

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEquality_init(OrgMockitoInternalMatchersEquality *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquality *new_OrgMockitoInternalMatchersEquality_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEquality)

#endif // _OrgMockitoInternalMatchersEquality_H_
