//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/jsr305/build_result/java/javax/annotation/meta/TypeQualifier.java
//

#ifndef _JavaxAnnotationMetaTypeQualifier_H_
#define _JavaxAnnotationMetaTypeQualifier_H_

@class IOSClass;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationMetaTypeQualifier < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *applicableTo;


@end

@interface JavaxAnnotationMetaTypeQualifier : NSObject < JavaxAnnotationMetaTypeQualifier > {
 @private
  IOSClass *applicableTo;
}

- (instancetype)initWithApplicableTo:(IOSClass *)applicableTo_;

+ (IOSClass *)applicableToDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationMetaTypeQualifier_init() {}

#endif // _JavaxAnnotationMetaTypeQualifier_H_
