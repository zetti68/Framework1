//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_H_
#define _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker : NSObject {
 @public
  OrgMockitoExceptionsReporter *reporter_;
  OrgMockitoInternalInvocationInvocationsFinder *finder_;
  OrgMockitoInternalInvocationInvocationMarker *invocationMarker_;
}

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, finder_, OrgMockitoInternalInvocationInvocationsFinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker, invocationMarker_, OrgMockitoInternalInvocationInvocationMarker *)

#endif // _OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_H_
