//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerFactory.java
//

#ifndef _OrgMockitoInternalRunnersRunnerFactory_H_
#define _OrgMockitoInternalRunnersRunnerFactory_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class OrgMockitoInternalRunnersUtilRunnerProvider;
@protocol OrgMockitoInternalRunnersRunnerImpl;

@interface OrgMockitoInternalRunnersRunnerFactory : NSObject

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalRunnersRunnerImpl>)createWithIOSClass:(IOSClass *)klass;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalRunnersUtilRunnerProvider:(OrgMockitoInternalRunnersUtilRunnerProvider *)runnerProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersRunnerFactory)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersRunnerFactory_initWithOrgMockitoInternalRunnersUtilRunnerProvider_(OrgMockitoInternalRunnersRunnerFactory *self, OrgMockitoInternalRunnersUtilRunnerProvider *runnerProvider);

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *new_OrgMockitoInternalRunnersRunnerFactory_initWithOrgMockitoInternalRunnersUtilRunnerProvider_(OrgMockitoInternalRunnersUtilRunnerProvider *runnerProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalRunnersRunnerFactory_init(OrgMockitoInternalRunnersRunnerFactory *self);

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *new_OrgMockitoInternalRunnersRunnerFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersRunnerFactory)

#endif // _OrgMockitoInternalRunnersRunnerFactory_H_
