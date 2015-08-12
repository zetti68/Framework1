//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationImpl.java
//

#ifndef _OrgMockitoInternalInvocationInvocationImpl_H_
#define _OrgMockitoInternalInvocationInvocationImpl_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/exceptions/VerificationAwareInvocation.h"
#include "org/mockito/invocation/Invocation.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol OrgMockitoInternalInvocationMockitoMethod;
@protocol OrgMockitoInternalInvocationRealmethodRealMethod;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

@interface OrgMockitoInternalInvocationInvocationImpl : NSObject < OrgMockitoInvocationInvocation, OrgMockitoInternalExceptionsVerificationAwareInvocation > {
 @public
  id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod_;
}

#pragma mark Public

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalInvocationMockitoMethod:(id<OrgMockitoInternalInvocationMockitoMethod>)mockitoMethod
         withNSObjectArray:(IOSObjectArray *)args
                   withInt:(jint)sequenceNumber
withOrgMockitoInternalInvocationRealmethodRealMethod:(id<OrgMockitoInternalInvocationRealmethodRealMethod>)realMethod;

- (id)callRealMethod;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)getArguments;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (JavaLangReflectMethod *)getMethod;

- (id)getMock;

- (IOSObjectArray *)getRawArguments;

- (jint)getSequenceNumber;

- (NSUInteger)hash;

- (void)ignoreForVerification;

- (jboolean)isIgnoredForVerification;

- (jboolean)isVerified;

- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

- (void)markVerified;

- (id<OrgMockitoInvocationStubInfo>)stubInfo;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalInvocationInvocationImpl, realMethod_, id<OrgMockitoInternalInvocationRealmethodRealMethod>)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationImpl_initWithId_withOrgMockitoInternalInvocationMockitoMethod_withNSObjectArray_withInt_withOrgMockitoInternalInvocationRealmethodRealMethod_(OrgMockitoInternalInvocationInvocationImpl *self, id mock, id<OrgMockitoInternalInvocationMockitoMethod> mockitoMethod, IOSObjectArray *args, jint sequenceNumber, id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationImpl *new_OrgMockitoInternalInvocationInvocationImpl_initWithId_withOrgMockitoInternalInvocationMockitoMethod_withNSObjectArray_withInt_withOrgMockitoInternalInvocationRealmethodRealMethod_(id mock, id<OrgMockitoInternalInvocationMockitoMethod> mockitoMethod, IOSObjectArray *args, jint sequenceNumber, id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationImpl)

#endif // _OrgMockitoInternalInvocationInvocationImpl_H_
