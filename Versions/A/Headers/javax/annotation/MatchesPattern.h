//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/jsr305/build_result/java/javax/annotation/MatchesPattern.java
//

#ifndef _JavaxAnnotationMatchesPattern_H_
#define _JavaxAnnotationMatchesPattern_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"
#include "javax/annotation/meta/TypeQualifierValidator.h"

@class JavaxAnnotationMetaWhenEnum;

@protocol JavaxAnnotationMatchesPattern < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) jint flags;

@end

@interface JavaxAnnotationMatchesPattern : NSObject < JavaxAnnotationMatchesPattern > {
 @private
  NSString *value_;
  jint flags_;
}

- (instancetype)initWithFlags:(jint)flags__ withValue:(NSString *)value__;

+ (jint)flagsDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern)

@interface JavaxAnnotationMatchesPattern_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationMatchesPattern>)annotation
                                                                           withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern_Checker)

FOUNDATION_EXPORT void JavaxAnnotationMatchesPattern_Checker_init(JavaxAnnotationMatchesPattern_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationMatchesPattern_Checker *new_JavaxAnnotationMatchesPattern_Checker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern_Checker)

#endif // _JavaxAnnotationMatchesPattern_H_
