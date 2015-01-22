//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/matchers/LocalizedMatcher.java
//

#ifndef _OrgMockitoInternalMatchersLocalizedMatcher_H_
#define _OrgMockitoInternalMatchersLocalizedMatcher_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestSelfDescribing;
@protocol OrgMockitoInvocationLocation;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/hamcrest/Matcher.h"
#include "org/mockito/internal/matchers/CapturesArguments.h"
#include "org/mockito/internal/matchers/ContainsExtraTypeInformation.h"
#include "org/mockito/internal/matchers/MatcherDecorator.h"

#define OrgMockitoInternalMatchersLocalizedMatcher_serialVersionUID 6748641229659825725LL

@interface OrgMockitoInternalMatchersLocalizedMatcher : NSObject < OrgHamcrestMatcher, OrgMockitoInternalMatchersContainsExtraTypeInformation, OrgMockitoInternalMatchersCapturesArguments, OrgMockitoInternalMatchersMatcherDecorator, JavaIoSerializable > {
 @public
  id<OrgHamcrestMatcher> actualMatcher_;
  id<OrgMockitoInvocationLocation> location_;
}

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)actualMatcher;

- (void)_dont_implement_Matcher___instead_extend_BaseMatcher_;

- (jboolean)matchesWithId:(id)item;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (NSString *)description;

- (id<OrgHamcrestSelfDescribing>)withExtraTypeInfo;

- (jboolean)typeMatchesWithId:(id)object;

- (void)captureFromWithId:(id)argument;

- (id<OrgHamcrestMatcher>)getActualMatcher;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalMatchersLocalizedMatcher *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersLocalizedMatcher_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersLocalizedMatcher, actualMatcher_, id<OrgHamcrestMatcher>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersLocalizedMatcher, location_, id<OrgMockitoInvocationLocation>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLocalizedMatcher, serialVersionUID, jlong)

#endif // _OrgMockitoInternalMatchersLocalizedMatcher_H_