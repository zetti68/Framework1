//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/junit/build_result/java/org/junit/runners/model/InitializationError.java
//

#ifndef _OrgJunitRunnersModelInitializationError_H_
#define _OrgJunitRunnersModelInitializationError_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@class JavaLangThrowable;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelInitializationError : JavaLangException

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)errors;

- (instancetype)initWithNSString:(NSString *)string;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)error;

- (id<JavaUtilList>)getCauses;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelInitializationError)

FOUNDATION_EXPORT void OrgJunitRunnersModelInitializationError_initWithJavaUtilList_(OrgJunitRunnersModelInitializationError *self, id<JavaUtilList> errors);

FOUNDATION_EXPORT OrgJunitRunnersModelInitializationError *new_OrgJunitRunnersModelInitializationError_initWithJavaUtilList_(id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersModelInitializationError_initWithJavaLangThrowable_(OrgJunitRunnersModelInitializationError *self, JavaLangThrowable *error);

FOUNDATION_EXPORT OrgJunitRunnersModelInitializationError *new_OrgJunitRunnersModelInitializationError_initWithJavaLangThrowable_(JavaLangThrowable *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersModelInitializationError_initWithNSString_(OrgJunitRunnersModelInitializationError *self, NSString *string);

FOUNDATION_EXPORT OrgJunitRunnersModelInitializationError *new_OrgJunitRunnersModelInitializationError_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelInitializationError)

#endif // _OrgJunitRunnersModelInitializationError_H_
