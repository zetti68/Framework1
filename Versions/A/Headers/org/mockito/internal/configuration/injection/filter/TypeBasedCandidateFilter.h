//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/TypeBasedCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

@interface OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter > {
 @public
  id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next_;
}

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter, next_, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *self, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

#endif // _OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_H_
