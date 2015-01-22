//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/junit/runner/TestRunListener.java
//

#ifndef _JunitRunnerTestRunListener_H_
#define _JunitRunnerTestRunListener_H_

#import "JreEmulation.h"

#define JunitRunnerTestRunListener_STATUS_ERROR 1
#define JunitRunnerTestRunListener_STATUS_FAILURE 2

@protocol JunitRunnerTestRunListener < NSObject, JavaObject >

- (void)testRunStartedWithNSString:(NSString *)testSuiteName
                           withInt:(jint)testCount;

- (void)testRunEndedWithLong:(jlong)elapsedTime;

- (void)testRunStoppedWithLong:(jlong)elapsedTime;

- (void)testStartedWithNSString:(NSString *)testName;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
             withNSString:(NSString *)testName
             withNSString:(NSString *)trace;

@end

__attribute__((always_inline)) inline void JunitRunnerTestRunListener_init() {}

J2OBJC_STATIC_FIELD_GETTER(JunitRunnerTestRunListener, STATUS_ERROR, jint)

J2OBJC_STATIC_FIELD_GETTER(JunitRunnerTestRunListener, STATUS_FAILURE, jint)

#endif // _JunitRunnerTestRunListener_H_