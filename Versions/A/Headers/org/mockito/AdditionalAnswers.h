//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/AdditionalAnswers.java
//

#ifndef _OrgMockitoAdditionalAnswers_H_
#define _OrgMockitoAdditionalAnswers_H_

@class OrgMockitoInternalStubbingAnswersReturnsArgumentAt;
@protocol JavaUtilCollection;
@protocol OrgMockitoStubbingAnswer;

#import "JreEmulation.h"

@interface OrgMockitoAdditionalAnswers : NSObject {
}

+ (id<OrgMockitoStubbingAnswer>)returnsFirstArg;

+ (id<OrgMockitoStubbingAnswer>)returnsSecondArg;

+ (id<OrgMockitoStubbingAnswer>)returnsLastArg;

+ (id<OrgMockitoStubbingAnswer>)returnsArgAtWithInt:(jint)position;

+ (id<OrgMockitoStubbingAnswer>)delegatesToWithId:(id)delegate;

+ (id<OrgMockitoStubbingAnswer>)returnsElementsOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoAdditionalAnswers_initialized;
J2OBJC_STATIC_INIT(OrgMockitoAdditionalAnswers)

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsArgumentAt *OrgMockitoAdditionalAnswers_RETURNS_FIRST_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoAdditionalAnswers, RETURNS_FIRST_ARGUMENT_, OrgMockitoInternalStubbingAnswersReturnsArgumentAt *)

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsArgumentAt *OrgMockitoAdditionalAnswers_RETURNS_SECOND_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoAdditionalAnswers, RETURNS_SECOND_ARGUMENT_, OrgMockitoInternalStubbingAnswersReturnsArgumentAt *)

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsArgumentAt *OrgMockitoAdditionalAnswers_RETURNS_LAST_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoAdditionalAnswers, RETURNS_LAST_ARGUMENT_, OrgMockitoInternalStubbingAnswersReturnsArgumentAt *)

#endif // _OrgMockitoAdditionalAnswers_H_
