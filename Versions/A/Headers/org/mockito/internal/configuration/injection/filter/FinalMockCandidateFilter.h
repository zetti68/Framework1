//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/FinalMockCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

@interface OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter)

#endif // _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_
