//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/org/hamcrest/core/IsNull.java
//

#ifndef _OrgHamcrestCoreIsNull_H_
#define _OrgHamcrestCoreIsNull_H_

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsNull : OrgHamcrestBaseMatcher {
}

- (jboolean)matchesWithId:(id)o;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)nullValue;

+ (id<OrgHamcrestMatcher>)notNullValue;

+ (id<OrgHamcrestMatcher>)nullValueWithIOSClass:(IOSClass *)type;

+ (id<OrgHamcrestMatcher>)notNullValueWithIOSClass:(IOSClass *)type;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsNull_init() {}

#endif // _OrgHamcrestCoreIsNull_H_