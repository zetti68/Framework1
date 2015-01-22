//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/org/junit/runner/Request.java
//

#ifndef _OrgJunitRunnerRequest_H_
#define _OrgJunitRunnerRequest_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThrowable;
@class OrgJunitRunnerComputer;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRunner;
@protocol JavaUtilComparator;

#import "JreEmulation.h"

@interface OrgJunitRunnerRequest : NSObject {
}

+ (OrgJunitRunnerRequest *)methodWithIOSClass:(IOSClass *)clazz
                                 withNSString:(NSString *)methodName;

+ (OrgJunitRunnerRequest *)aClassWithIOSClass:(IOSClass *)clazz;

+ (OrgJunitRunnerRequest *)classWithoutSuiteMethodWithIOSClass:(IOSClass *)clazz;

+ (OrgJunitRunnerRequest *)classesWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                           withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerRequest *)classesWithIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerRequest *)errorReportWithIOSClass:(IOSClass *)klass
                             withJavaLangThrowable:(JavaLangThrowable *)cause;

+ (OrgJunitRunnerRequest *)runnerWithOrgJunitRunnerRunner:(OrgJunitRunnerRunner *)runner;

- (OrgJunitRunnerRunner *)getRunner;

- (OrgJunitRunnerRequest *)filterWithWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerRequest *)filterWithWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)desiredDescription;

- (OrgJunitRunnerRequest *)sortWithWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerRequest_init() {}

@interface OrgJunitRunnerRequest_$1 : OrgJunitRunnerRequest {
 @public
  OrgJunitRunnerRunner *val$runner_;
}

- (OrgJunitRunnerRunner *)getRunner;

- (instancetype)initWithOrgJunitRunnerRunner:(OrgJunitRunnerRunner *)capture$0;

- (void)dealloc;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerRequest_$1_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnerRequest_$1, val$runner_, OrgJunitRunnerRunner *)

#endif // _OrgJunitRunnerRequest_H_