//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/MockitoAnnotationsMockAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoMockitoAnnotations_Mock;

@interface OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMockitoAnnotations_Mock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor *new_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

#endif // _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
