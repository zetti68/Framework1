//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationMarker.java
//

#ifndef _OrgMockitoInternalInvocationInvocationMarker_H_
#define _OrgMockitoInternalInvocationInvocationMarker_H_

@protocol JavaUtilList;
@protocol OrgMockitoInternalInvocationCapturesArgumensFromInvocation;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"

@interface OrgMockitoInternalInvocationInvocationMarker : NSObject {
}

- (void)markVerifiedWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)chunk
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationInvocationMarker_init() {}

#endif // _OrgMockitoInternalInvocationInvocationMarker_H_