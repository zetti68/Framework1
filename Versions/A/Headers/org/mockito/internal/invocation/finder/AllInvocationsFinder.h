//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/invocation/finder/AllInvocationsFinder.java
//

#ifndef _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_
#define _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"
#include "java/util/Comparator.h"

@interface OrgMockitoInternalInvocationFinderAllInvocationsFinder : NSObject {
}

- (id<JavaUtilList>)findWithJavaUtilList:(id<JavaUtilList>)mocks;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationFinderAllInvocationsFinder_init() {}

@interface OrgMockitoInternalInvocationFinderAllInvocationsFinder_SequenceNumberComparator : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(id<OrgMockitoInvocationInvocation>)o1
               withId:(id<OrgMockitoInvocationInvocation>)o2;

- (instancetype)initWithOrgMockitoInternalInvocationFinderAllInvocationsFinder:(OrgMockitoInternalInvocationFinderAllInvocationsFinder *)outer$;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalInvocationFinderAllInvocationsFinder_SequenceNumberComparator_init() {}

#endif // _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_