//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationDataImpl.java
//

#ifndef _OrgMockitoInternalVerificationVerificationDataImpl_H_
#define _OrgMockitoInternalVerificationVerificationDataImpl_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/verification/api/VerificationData.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;

@interface OrgMockitoInternalVerificationVerificationDataImpl : NSObject < OrgMockitoInternalVerificationApiVerificationData >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainer:(id<OrgMockitoInternalStubbingInvocationContainer>)invocations
                    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)getAllInvocations;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

#pragma mark Package-Private

- (void)assertWantedIsVerifiable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationDataImpl)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationVerificationDataImpl_initWithOrgMockitoInternalStubbingInvocationContainer_withOrgMockitoInternalInvocationInvocationMatcher_(OrgMockitoInternalVerificationVerificationDataImpl *self, id<OrgMockitoInternalStubbingInvocationContainer> invocations, OrgMockitoInternalInvocationInvocationMatcher *wanted);

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationDataImpl *new_OrgMockitoInternalVerificationVerificationDataImpl_initWithOrgMockitoInternalStubbingInvocationContainer_withOrgMockitoInternalInvocationInvocationMatcher_(id<OrgMockitoInternalStubbingInvocationContainer> invocations, OrgMockitoInternalInvocationInvocationMatcher *wanted) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationDataImpl)

#endif // _OrgMockitoInternalVerificationVerificationDataImpl_H_
