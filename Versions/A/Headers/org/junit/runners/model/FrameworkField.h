//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/junit/build_result/java/org/junit/runners/model/FrameworkField.java
//

#ifndef _OrgJunitRunnersModelFrameworkField_H_
#define _OrgJunitRunnersModelFrameworkField_H_

#include "J2ObjC_header.h"
#include "org/junit/runners/model/FrameworkMember.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectField;

@interface OrgJunitRunnersModelFrameworkField : OrgJunitRunnersModelFrameworkMember

#pragma mark Public

- (id)getWithId:(id)target;

- (IOSObjectArray *)getAnnotations;

- (JavaLangReflectField *)getField;

- (NSString *)getName;

- (IOSClass *)getType;

- (jboolean)isPublic;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkField *)otherMember;

- (jboolean)isStatic;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkField)

FOUNDATION_EXPORT void OrgJunitRunnersModelFrameworkField_initWithJavaLangReflectField_(OrgJunitRunnersModelFrameworkField *self, JavaLangReflectField *field);

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkField *new_OrgJunitRunnersModelFrameworkField_initWithJavaLangReflectField_(JavaLangReflectField *field) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkField)

#endif // _OrgJunitRunnersModelFrameworkField_H_
