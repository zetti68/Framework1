//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldSetter.java
//

#ifndef _OrgMockitoInternalUtilReflectionFieldSetter_H_
#define _OrgMockitoInternalUtilReflectionFieldSetter_H_

@class JavaLangReflectField;

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilReflectionFieldSetter : NSObject {
 @public
  id target_;
  JavaLangReflectField *field_;
}

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (void)setWithId:(id)value;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionFieldSetter *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldSetter_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldSetter, target_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldSetter, field_, JavaLangReflectField *)

#endif // _OrgMockitoInternalUtilReflectionFieldSetter_H_