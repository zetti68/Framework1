//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/DefaultInjectionEngine.java
//

#ifndef _OrgMockitoInternalConfigurationDefaultInjectionEngine_H_
#define _OrgMockitoInternalConfigurationDefaultInjectionEngine_H_

#include "J2ObjC_header.h"

@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationDefaultInjectionEngine : NSObject

#pragma mark Public

- (instancetype)init;

- (void)injectMocksOnFieldsWithJavaUtilSet:(id<JavaUtilSet>)needingInjection
                           withJavaUtilSet:(id<JavaUtilSet>)mocks
                                    withId:(id)testClassInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationDefaultInjectionEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationDefaultInjectionEngine_init(OrgMockitoInternalConfigurationDefaultInjectionEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationDefaultInjectionEngine *new_OrgMockitoInternalConfigurationDefaultInjectionEngine_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationDefaultInjectionEngine)

#endif // _OrgMockitoInternalConfigurationDefaultInjectionEngine_H_
