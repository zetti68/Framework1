//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/jsr305/build_result/java/javax/annotation/meta/TypeQualifier.java
//

#ifndef _JavaxAnnotationMetaTypeQualifier_H_
#define _JavaxAnnotationMetaTypeQualifier_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationMetaTypeQualifier < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *applicableTo;

@end

@interface JavaxAnnotationMetaTypeQualifier : NSObject < JavaxAnnotationMetaTypeQualifier > {
 @private
  IOSClass *applicableTo_;
}

- (instancetype)initWithApplicableTo:(IOSClass *)applicableTo__;

+ (IOSClass *)applicableToDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifier)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifier)

#endif // _JavaxAnnotationMetaTypeQualifier_H_
