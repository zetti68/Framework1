//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/AnyVararg.java
//

#ifndef _OrgMockitoInternalMatchersAnyVararg_H_
#define _OrgMockitoInternalMatchersAnyVararg_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"
#include "org/mockito/internal/matchers/VarargMatcher.h"

@protocol OrgHamcrestMatcher;

@interface OrgMockitoInternalMatchersAnyVararg : OrgMockitoArgumentMatcher < OrgMockitoInternalMatchersVarargMatcher, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersAnyVararg)

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgMockitoInternalMatchersAnyVararg_ANY_VARARG_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersAnyVararg, ANY_VARARG_, id<OrgHamcrestMatcher>)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersAnyVararg_init(OrgMockitoInternalMatchersAnyVararg *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnyVararg *new_OrgMockitoInternalMatchersAnyVararg_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAnyVararg)

#endif // _OrgMockitoInternalMatchersAnyVararg_H_
