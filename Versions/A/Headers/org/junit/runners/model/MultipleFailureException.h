//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/junit/build_result/java/org/junit/runners/model/MultipleFailureException.java
//

#ifndef _OrgJunitRunnersModelMultipleFailureException_H_
#define _OrgJunitRunnersModelMultipleFailureException_H_

@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define OrgJunitRunnersModelMultipleFailureException_serialVersionUID 1LL

@interface OrgJunitRunnersModelMultipleFailureException : JavaLangException {
 @public
  id<JavaUtilList> fErrors_;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)getFailures;

- (NSString *)getMessage;

+ (void)assertEmptyWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersModelMultipleFailureException *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersModelMultipleFailureException_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelMultipleFailureException, fErrors_, id<JavaUtilList>)

J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnersModelMultipleFailureException, serialVersionUID, jlong)

#endif // _OrgJunitRunnersModelMultipleFailureException_H_
