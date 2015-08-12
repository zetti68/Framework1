//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/ConstructorInjection.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_
#define _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"
#include "org/mockito/internal/util/reflection/FieldInitializer.h"

@class IOSObjectArray;
@class JavaLangReflectField;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy

#pragma mark Public

- (instancetype)init;

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argResolver;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionConstructorInjection)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionConstructorInjection_init(OrgMockitoInternalConfigurationInjectionConstructorInjection *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection *new_OrgMockitoInternalConfigurationInjectionConstructorInjection_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionConstructorInjection_initWithOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver_(OrgMockitoInternalConfigurationInjectionConstructorInjection *self, id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver> argResolver);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection *new_OrgMockitoInternalConfigurationInjectionConstructorInjection_initWithOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver_(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver> argResolver) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionConstructorInjection)

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver > {
 @public
  id<JavaUtilSet> objects_;
}

#pragma mark Public

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)objects;

- (IOSObjectArray *)resolveTypeInstancesWithIOSClassArray:(IOSObjectArray *)argTypes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver)

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver, objects_, id<JavaUtilSet>)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_initWithJavaUtilSet_(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *self, id<JavaUtilSet> objects);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *new_OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_initWithJavaUtilSet_(id<JavaUtilSet> objects) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver)

#endif // _OrgMockitoInternalConfigurationInjectionConstructorInjection_H_
