//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/GlobalConfiguration.java
//

#ifndef _OrgMockitoInternalConfigurationGlobalConfiguration_H_
#define _OrgMockitoInternalConfigurationGlobalConfiguration_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/configuration/IMockitoConfiguration.h"

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;

#define OrgMockitoInternalConfigurationGlobalConfiguration_serialVersionUID -2860353062105505938LL

@interface OrgMockitoInternalConfigurationGlobalConfiguration : NSObject < OrgMockitoConfigurationIMockitoConfiguration, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (jboolean)cleansStackTrace;

- (jboolean)enableClassCache;

- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<OrgMockitoReturnValues>)getReturnValues;

+ (void)validate;

#pragma mark Package-Private

- (id<OrgMockitoConfigurationIMockitoConfiguration>)getIt;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalConfigurationGlobalConfiguration)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalConfigurationGlobalConfiguration, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationGlobalConfiguration_init(OrgMockitoInternalConfigurationGlobalConfiguration *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationGlobalConfiguration *new_OrgMockitoInternalConfigurationGlobalConfiguration_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationGlobalConfiguration_validate();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationGlobalConfiguration)

#endif // _OrgMockitoInternalConfigurationGlobalConfiguration_H_
