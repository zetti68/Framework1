//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/PeekingIterator.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectPeekingIterator_RESTRICT
#define ComGoogleCommonCollectPeekingIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectPeekingIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectPeekingIterator_) && (ComGoogleCommonCollectPeekingIterator_INCLUDE_ALL || ComGoogleCommonCollectPeekingIterator_INCLUDE)
#define _ComGoogleCommonCollectPeekingIterator_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@protocol ComGoogleCommonCollectPeekingIterator < JavaUtilIterator, NSObject, JavaObject >
- (id)peek;

- (id)next;

- (void)remove;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectPeekingIterator_init() {}
#endif