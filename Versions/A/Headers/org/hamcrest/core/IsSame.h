//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/org/hamcrest/core/IsSame.java
//

#ifndef _OrgHamcrestCoreIsSame_H_
#define _OrgHamcrestCoreIsSame_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsSame : OrgHamcrestBaseMatcher {
 @public
  id object_;
}

- (instancetype)initWithId:(id)object;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)sameInstanceWithId:(id)object;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgHamcrestCoreIsSame *)other;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsSame_init() {}

J2OBJC_FIELD_SETTER(OrgHamcrestCoreIsSame, object_, id)

#endif // _OrgHamcrestCoreIsSame_H_