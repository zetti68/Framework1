//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/util/reflection/BeanPropertySetter.java
//

#ifndef _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_
#define _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_

#include "J2ObjC_header.h"

@class JavaLangReflectField;

@interface OrgMockitoInternalUtilReflectionBeanPropertySetter : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)propertyField;

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)propertyField
               withBoolean:(jboolean)reportNoSetterFound;

- (jboolean)setWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionBeanPropertySetter)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionBeanPropertySetter_initWithId_withJavaLangReflectField_withBoolean_(OrgMockitoInternalUtilReflectionBeanPropertySetter *self, id target, JavaLangReflectField *propertyField, jboolean reportNoSetterFound);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionBeanPropertySetter *new_OrgMockitoInternalUtilReflectionBeanPropertySetter_initWithId_withJavaLangReflectField_withBoolean_(id target, JavaLangReflectField *propertyField, jboolean reportNoSetterFound) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionBeanPropertySetter_initWithId_withJavaLangReflectField_(OrgMockitoInternalUtilReflectionBeanPropertySetter *self, id target, JavaLangReflectField *propertyField);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionBeanPropertySetter *new_OrgMockitoInternalUtilReflectionBeanPropertySetter_initWithId_withJavaLangReflectField_(id target, JavaLangReflectField *propertyField) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionBeanPropertySetter)

#endif // _OrgMockitoInternalUtilReflectionBeanPropertySetter_H_
