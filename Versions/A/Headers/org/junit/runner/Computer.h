//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/junit/build_result/java/org/junit/runner/Computer.java
//

#ifndef _OrgJunitRunnerComputer_H_
#define _OrgJunitRunnerComputer_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;

@interface OrgJunitRunnerComputer : NSObject

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerComputer *)serial;

#pragma mark Protected

- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerComputer)

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerComputer_serial();

FOUNDATION_EXPORT void OrgJunitRunnerComputer_init(OrgJunitRunnerComputer *self);

FOUNDATION_EXPORT OrgJunitRunnerComputer *new_OrgJunitRunnerComputer_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerComputer)

#endif // _OrgJunitRunnerComputer_H_
