//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/MockAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationMockAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationMockAnnotationProcessor_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoMock;

@interface OrgMockitoInternalConfigurationMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationMockAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationMockAnnotationProcessor_init(OrgMockitoInternalConfigurationMockAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockAnnotationProcessor *new_OrgMockitoInternalConfigurationMockAnnotationProcessor_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationMockAnnotationProcessor)

#endif // _OrgMockitoInternalConfigurationMockAnnotationProcessor_H_
