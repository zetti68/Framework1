//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/junit/build_result/java/org/hamcrest/core/IsInstanceOf.java
//

#ifndef _OrgHamcrestCoreIsInstanceOf_H_
#define _OrgHamcrestCoreIsInstanceOf_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsInstanceOf : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)theClass;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)instanceOfWithIOSClass:(IOSClass *)type;

- (jboolean)matchesWithId:(id)item;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsInstanceOf)

FOUNDATION_EXPORT void OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(OrgHamcrestCoreIsInstanceOf *self, IOSClass *theClass);

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *new_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *theClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_instanceOfWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsInstanceOf)

#endif // _OrgHamcrestCoreIsInstanceOf_H_
