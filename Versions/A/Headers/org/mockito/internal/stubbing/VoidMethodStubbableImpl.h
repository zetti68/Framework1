//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/stubbing/VoidMethodStubbableImpl.java
//

#ifndef _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_
#define _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_

@class JavaLangThrowable;
@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoStubbingAnswer;

#import "JreEmulation.h"
#include "org/mockito/stubbing/VoidMethodStubbable.h"

@interface OrgMockitoInternalStubbingVoidMethodStubbableImpl : NSObject < OrgMockitoStubbingVoidMethodStubbable > {
 @public
  id mock_;
  OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl_;
}

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toThrowWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toReturn;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)on;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingVoidMethodStubbableImpl *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingVoidMethodStubbableImpl_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingVoidMethodStubbableImpl, mock_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingVoidMethodStubbableImpl, invocationContainerImpl_, OrgMockitoInternalStubbingInvocationContainerImpl *)

#endif // _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_
