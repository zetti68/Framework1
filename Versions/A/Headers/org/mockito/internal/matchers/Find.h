//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/Find.java
//

#ifndef _OrgMockitoInternalMatchersFind_H_
#define _OrgMockitoInternalMatchersFind_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersFind : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)regex;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersFind)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersFind_initWithNSString_(OrgMockitoInternalMatchersFind *self, NSString *regex);

FOUNDATION_EXPORT OrgMockitoInternalMatchersFind *new_OrgMockitoInternalMatchersFind_initWithNSString_(NSString *regex) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersFind)

#endif // _OrgMockitoInternalMatchersFind_H_
