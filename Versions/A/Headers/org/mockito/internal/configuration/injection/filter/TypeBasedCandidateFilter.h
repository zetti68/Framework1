//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/TypeBasedCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

#import "JreEmulation.h"
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@interface OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter > {
 @public
  id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next_;
}

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter, next_, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)

#endif // _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_
