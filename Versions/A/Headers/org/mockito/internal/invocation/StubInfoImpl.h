//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/invocation/StubInfoImpl.java
//

#ifndef _OrgMockitoInternalInvocationStubInfoImpl_H_
#define _OrgMockitoInternalInvocationStubInfoImpl_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/invocation/StubInfo.h"

@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalInvocationStubInfoImpl : NSObject < OrgMockitoInvocationStubInfo, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)stubbedAt;

- (id<OrgMockitoInvocationLocation>)stubbedAt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationStubInfoImpl)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationStubInfoImpl_initWithOrgMockitoInvocationDescribedInvocation_(OrgMockitoInternalInvocationStubInfoImpl *self, id<OrgMockitoInvocationDescribedInvocation> stubbedAt);

FOUNDATION_EXPORT OrgMockitoInternalInvocationStubInfoImpl *new_OrgMockitoInternalInvocationStubInfoImpl_initWithOrgMockitoInvocationDescribedInvocation_(id<OrgMockitoInvocationDescribedInvocation> stubbedAt) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationStubInfoImpl)

#endif // _OrgMockitoInternalInvocationStubInfoImpl_H_
