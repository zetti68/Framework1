//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/stubbing/OngoingStubbingImpl.java
//

#ifndef _OrgMockitoInternalStubbingOngoingStubbingImpl_H_
#define _OrgMockitoInternalStubbingOngoingStubbingImpl_H_

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol JavaUtilList;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;

#import "JreEmulation.h"
#include "org/mockito/internal/stubbing/BaseStubbing.h"

@interface OrgMockitoInternalStubbingOngoingStubbingImpl : OrgMockitoInternalStubbingBaseStubbing {
 @public
  OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl_;
}

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<JavaUtilList>)getRegisteredInvocations;

- (id)getMock;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingOngoingStubbingImpl *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingOngoingStubbingImpl_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingOngoingStubbingImpl, invocationContainerImpl_, OrgMockitoInternalStubbingInvocationContainerImpl *)

#endif // _OrgMockitoInternalStubbingOngoingStubbingImpl_H_