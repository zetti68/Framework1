//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/util/concurrent/ForwardingListenableFuture.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

#define ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ForwardingFuture.h"

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ListenableFuture.h"

@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingFuture < ComGoogleCommonUtilConcurrentListenableFuture > {
}

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentForwardingListenableFuture_init() {}
#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_init() {}
#endif
