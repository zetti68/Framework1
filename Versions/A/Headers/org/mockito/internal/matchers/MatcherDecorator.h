//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/matchers/MatcherDecorator.java
//

#ifndef _OrgMockitoInternalMatchersMatcherDecorator_H_
#define _OrgMockitoInternalMatchersMatcherDecorator_H_

@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@protocol OrgMockitoInternalMatchersMatcherDecorator < JavaIoSerializable, NSObject, JavaObject >
- (id<OrgHamcrestMatcher>)getActualMatcher;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersMatcherDecorator_init() {}

#endif // _OrgMockitoInternalMatchersMatcherDecorator_H_