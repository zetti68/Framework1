//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/junit/build_result/java/org/junit/runner/Result.java
//

#ifndef _OrgJunitRunnerResult_H_
#define _OrgJunitRunnerResult_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class OrgJunitRunnerNotificationRunListener;
@protocol JavaUtilList;

@interface OrgJunitRunnerResult : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerNotificationRunListener *)createListener;

- (jint)getFailureCount;

- (id<JavaUtilList>)getFailures;

- (jint)getIgnoreCount;

- (jint)getRunCount;

- (jlong)getRunTime;

- (jboolean)wasSuccessful;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerResult)

FOUNDATION_EXPORT void OrgJunitRunnerResult_init(OrgJunitRunnerResult *self);

FOUNDATION_EXPORT OrgJunitRunnerResult *new_OrgJunitRunnerResult_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerResult)

#endif // _OrgJunitRunnerResult_H_
