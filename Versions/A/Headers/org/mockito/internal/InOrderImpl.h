//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/InOrderImpl.java
//

#ifndef _OrgMockitoInternalInOrderImpl_H_
#define _OrgMockitoInternalInOrderImpl_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalMockitoCore;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoVerificationVerificationMode;

#import "JreEmulation.h"
#include "org/mockito/InOrder.h"
#include "org/mockito/internal/verification/api/InOrderContext.h"

@interface OrgMockitoInternalInOrderImpl : NSObject < OrgMockitoInOrder, OrgMockitoInternalVerificationApiInOrderContext > {
 @public
  OrgMockitoInternalMockitoCore *mockitoCore_;
  OrgMockitoExceptionsReporter *reporter_;
  id<JavaUtilList> mocksToBeVerifiedInOrder_;
  id<OrgMockitoInternalVerificationApiInOrderContext> inOrderContext_;
}

- (id<JavaUtilList>)getMocksToBeVerifiedInOrder;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)mocksToBeVerifiedInOrder;

- (id)verifyWithId:(id)mock;

- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (jboolean)isVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

- (void)verifyNoMoreInteractions;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalInOrderImpl *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInOrderImpl_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalInOrderImpl, mockitoCore_, OrgMockitoInternalMockitoCore *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalInOrderImpl, reporter_, OrgMockitoExceptionsReporter *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalInOrderImpl, mocksToBeVerifiedInOrder_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalInOrderImpl, inOrderContext_, id<OrgMockitoInternalVerificationApiInOrderContext>)

#endif // _OrgMockitoInternalInOrderImpl_H_
