//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/apachecommons/ReflectionEquals.java
//

#ifndef _OrgMockitoInternalMatchersApachecommonsReflectionEquals_H_
#define _OrgMockitoInternalMatchersApachecommonsReflectionEquals_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@class IOSObjectArray;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersApachecommonsReflectionEquals : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)wanted
         withNSStringArray:(IOSObjectArray *)excludeFields;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersApachecommonsReflectionEquals)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersApachecommonsReflectionEquals_initWithId_withNSStringArray_(OrgMockitoInternalMatchersApachecommonsReflectionEquals *self, id wanted, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsReflectionEquals *new_OrgMockitoInternalMatchersApachecommonsReflectionEquals_initWithId_withNSStringArray_(id wanted, IOSObjectArray *excludeFields) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersApachecommonsReflectionEquals)

#endif // _OrgMockitoInternalMatchersApachecommonsReflectionEquals_H_
