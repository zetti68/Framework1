//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/org/hamcrest/core/IsEqual.java
//

#ifndef _OrgHamcrestCoreIsEqual_H_
#define _OrgHamcrestCoreIsEqual_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsEqual : OrgHamcrestBaseMatcher {
 @public
  id object_;
}

- (instancetype)initWithId:(id)equalArg;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (jboolean)areEqualWithId:(id)o1
                    withId:(id)o2;

+ (jboolean)areArraysEqualWithId:(id)o1
                          withId:(id)o2;

+ (jboolean)areArrayLengthsEqualWithId:(id)o1
                                withId:(id)o2;

+ (jboolean)areArrayElementsEqualWithId:(id)o1
                                 withId:(id)o2;

+ (jboolean)isArrayWithId:(id)o;

+ (id<OrgHamcrestMatcher>)equalToWithId:(id)operand;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgHamcrestCoreIsEqual *)other;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsEqual_init() {}

J2OBJC_FIELD_SETTER(OrgHamcrestCoreIsEqual, object_, id)

#endif // _OrgHamcrestCoreIsEqual_H_
