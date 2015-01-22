//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/verification/Times.java
//

#ifndef _OrgMockitoInternalVerificationTimes_H_
#define _OrgMockitoInternalVerificationTimes_H_

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

#import "JreEmulation.h"
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"
#include "org/mockito/verification/VerificationMode.h"

@interface OrgMockitoInternalVerificationTimes : NSObject < OrgMockitoInternalVerificationApiVerificationInOrderMode, OrgMockitoVerificationVerificationMode > {
 @public
  jint wantedCount_;
}

- (instancetype)initWithInt:(jint)wantedNumberOfInvocations;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

- (NSString *)description;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationTimes *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationTimes_init() {}

#endif // _OrgMockitoInternalVerificationTimes_H_