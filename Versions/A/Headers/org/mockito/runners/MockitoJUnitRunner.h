//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/runners/MockitoJUnitRunner.java
//

#ifndef _OrgMockitoRunnersMockitoJUnitRunner_H_
#define _OrgMockitoRunnersMockitoJUnitRunner_H_

#include "J2ObjC_header.h"
#include "org/junit/runner/Runner.h"
#include "org/junit/runner/manipulation/Filterable.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgMockitoRunnersMockitoJUnitRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoRunnersMockitoJUnitRunner)

FOUNDATION_EXPORT void OrgMockitoRunnersMockitoJUnitRunner_initWithIOSClass_(OrgMockitoRunnersMockitoJUnitRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner *new_OrgMockitoRunnersMockitoJUnitRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoRunnersMockitoJUnitRunner)

#endif // _OrgMockitoRunnersMockitoJUnitRunner_H_
