//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/GloballyConfiguredAnswer.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_
#define _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_

@protocol OrgMockitoInvocationInvocationOnMock;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_serialVersionUID 3585893470101750917LL

@interface OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer, serialVersionUID, jlong)

#endif // _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_
