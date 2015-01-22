//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/util/concurrent/ExecutionList.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentExecutionList_RESTRICT
#define ComGoogleCommonUtilConcurrentExecutionList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentExecutionList_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentExecutionList_) && (ComGoogleCommonUtilConcurrentExecutionList_INCLUDE_ALL || ComGoogleCommonUtilConcurrentExecutionList_INCLUDE)
#define _ComGoogleCommonUtilConcurrentExecutionList_

@class JavaUtilLoggingLogger;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilQueue;

@interface ComGoogleCommonUtilConcurrentExecutionList : NSObject {
}

- (instancetype)init;

- (void)addWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
 withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)execute;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentExecutionList_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentExecutionList)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentExecutionList_log_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentExecutionList, log_, JavaUtilLoggingLogger *)
#endif

#if !defined (_ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair_) && (ComGoogleCommonUtilConcurrentExecutionList_INCLUDE_ALL || ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair_INCLUDE)
#define _ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair_

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair : NSObject {
 @public
  id<JavaLangRunnable> runnable_;
  id<JavaUtilConcurrentExecutor> executor_;
}

- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
          withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)execute;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair, runnable_, id<JavaLangRunnable>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentExecutionList_RunnableExecutorPair, executor_, id<JavaUtilConcurrentExecutor>)
#endif