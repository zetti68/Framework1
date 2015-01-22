//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/MockInjectionStrategy.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_
#define _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_

@class JavaLangReflectField;
@protocol JavaUtilSet;

#import "JreEmulation.h"

@interface OrgMockitoInternalConfigurationInjectionMockInjectionStrategy : NSObject {
 @public
  OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *nextStrategy_;
}

+ (OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)nop;

- (OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)thenTryWithOrgMockitoInternalConfigurationInjectionMockInjectionStrategy:(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)strategy;

- (jboolean)processWithJavaLangReflectField:(JavaLangReflectField *)onField
                                     withId:(id)fieldOwnedBy
                            withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (jboolean)relayProcessToNextStrategyWithJavaLangReflectField:(JavaLangReflectField *)field
                                                        withId:(id)fieldOwner
                                               withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy, nextStrategy_, OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)

@interface OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_$1 : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy {
}

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_$1_init() {}

#endif // _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_