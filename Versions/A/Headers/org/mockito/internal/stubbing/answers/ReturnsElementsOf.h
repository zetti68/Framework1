//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ReturnsElementsOf.java
//

#ifndef _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_
#define _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_

#include "J2ObjC_header.h"
#include "org/mockito/stubbing/Answer.h"

@protocol JavaUtilCollection;
@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingAnswersReturnsElementsOf : NSObject < OrgMockitoStubbingAnswer >

#pragma mark Public

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersReturnsElementsOf_initWithJavaUtilCollection_(OrgMockitoInternalStubbingAnswersReturnsElementsOf *self, id<JavaUtilCollection> elements);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsElementsOf *new_OrgMockitoInternalStubbingAnswersReturnsElementsOf_initWithJavaUtilCollection_(id<JavaUtilCollection> elements) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

#endif // _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_
