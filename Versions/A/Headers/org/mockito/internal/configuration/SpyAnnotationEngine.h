//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/SpyAnnotationEngine.java
//

#ifndef _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_
#define _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_

#include "J2ObjC_header.h"
#include "org/mockito/configuration/AnnotationEngine.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

@interface OrgMockitoInternalConfigurationSpyAnnotationEngine : NSObject < OrgMockitoConfigurationAnnotationEngine >

#pragma mark Public

- (instancetype)init;

- (id)createMockForWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field;

- (void)processWithIOSClass:(IOSClass *)context
                     withId:(id)testInstance;

#pragma mark Package-Private

- (void)assertNoIncompatibleAnnotationsWithIOSClass:(IOSClass *)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field
                                  withIOSClassArray:(IOSObjectArray *)undesiredAnnotations;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationSpyAnnotationEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationSpyAnnotationEngine_init(OrgMockitoInternalConfigurationSpyAnnotationEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationSpyAnnotationEngine *new_OrgMockitoInternalConfigurationSpyAnnotationEngine_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationSpyAnnotationEngine)

#endif // _OrgMockitoInternalConfigurationSpyAnnotationEngine_H_
