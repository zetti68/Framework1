//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/ForwardingListIterator.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectForwardingListIterator_RESTRICT
#define ComGoogleCommonCollectForwardingListIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingListIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingListIterator_) && (ComGoogleCommonCollectForwardingListIterator_INCLUDE_ALL || ComGoogleCommonCollectForwardingListIterator_INCLUDE)
#define _ComGoogleCommonCollectForwardingListIterator_

#define ComGoogleCommonCollectForwardingIterator_RESTRICT 1
#define ComGoogleCommonCollectForwardingIterator_INCLUDE 1
#include "com/google/common/collect/ForwardingIterator.h"

#define JavaUtilListIterator_RESTRICT 1
#define JavaUtilListIterator_INCLUDE 1
#include "java/util/ListIterator.h"

@interface ComGoogleCommonCollectForwardingListIterator : ComGoogleCommonCollectForwardingIterator < JavaUtilListIterator > {
}

- (instancetype)init;

- (id<JavaUtilListIterator>)delegate;

- (void)addWithId:(id)element;

- (jboolean)hasPrevious;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)setWithId:(id)element;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectForwardingListIterator_init() {}
#endif
