//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsMocks.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_
#define _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingDefaultanswersReturnsMocks : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

#pragma mark Package-Private

- (id)returnValueForWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsMocks)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init(OrgMockitoInternalStubbingDefaultanswersReturnsMocks *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsMocks *new_OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsMocks)

#endif // _OrgMockitoInternalStubbingDefaultanswersReturnsMocks_H_
