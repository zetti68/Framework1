//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationDataInOrder.java
//

#ifndef _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_
#define _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

#import "JreEmulation.h"

@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder < NSObject, JavaObject >

- (id<JavaUtilList>)getAllInvocations;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

- (id<OrgMockitoInternalVerificationApiInOrderContext>)getOrderingContext;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationApiVerificationDataInOrder_init() {}

#endif // _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_
