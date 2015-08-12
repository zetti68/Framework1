//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ForkJoinPool.java
//

#ifndef _JavaUtilConcurrentForkJoinPool_H_
#define _JavaUtilConcurrentForkJoinPool_H_

#include "J2ObjC_header.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/RecursiveAction.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilArrayList;
@class JavaUtilConcurrentForkJoinTask;
@class JavaUtilConcurrentForkJoinWorkerThread;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilRandom;
@protocol JavaLangRunnable;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory;
@protocol JavaUtilConcurrentForkJoinPool_ManagedBlocker;
@protocol JavaUtilConcurrentRunnableFuture;
@protocol JavaUtilList;

@interface JavaUtilConcurrentForkJoinPool : JavaUtilConcurrentAbstractExecutorService {
 @public
  IOSObjectArray *workers_;
  id<JavaLangThread_UncaughtExceptionHandler> ueh_;
  jlong ctl_;
  jint parallelism_;
  jint queueBase_;
  jint queueTop_;
  jboolean shutdown__;
  jboolean locallyFifo_;
  jint quiescerCount_;
  jint blockedCount_;
  jint scanGuard_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)parallelism;

- (instancetype)initWithInt:(jint)parallelism
withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory:(id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)factory
withJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler
                withBoolean:(jboolean)asyncMode;

- (jboolean)awaitTerminationWithLong:(jlong)timeout
  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)executeWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (jint)getActiveThreadCount;

- (jboolean)getAsyncMode;

- (id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)getFactory;

- (jint)getParallelism;

- (jint)getPoolSize;

- (jint)getQueuedSubmissionCount;

- (jlong)getQueuedTaskCount;

- (jint)getRunningThreadCount;

- (jlong)getStealCount;

- (id<JavaLangThread_UncaughtExceptionHandler>)getUncaughtExceptionHandler;

- (jboolean)hasQueuedSubmissions;

- (id)invokeWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (jboolean)isQuiescent;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (jboolean)isTerminating;

+ (void)managedBlockWithJavaUtilConcurrentForkJoinPool_ManagedBlocker:(id<JavaUtilConcurrentForkJoinPool_ManagedBlocker>)blocker;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                        withId:(id)result;

- (NSString *)description;

#pragma mark Protected

- (jint)drainTasksToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                withId:(id)value OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentForkJoinTask *)pollSubmission;

#pragma mark Package-Private

- (void)addActiveCountWithInt:(jint)delta;

- (void)addQuiescerCountWithInt:(jint)delta;

- (void)deregisterWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w
                                             withJavaLangThrowable:(JavaLangThrowable *)ex;

- (jint)idlePerActive;

- (jboolean)isAtLeastTerminating;

- (NSString *)nextWorkerName;

- (jint)registerWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w;

- (void)signalWork;

- (void)timedAwaitJoinWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)joinMe
                                                withLong:(jlong)nanos;

- (void)tryAwaitJoinWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)joinMe;

- (void)workWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentForkJoinPool)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool, workers_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool, ueh_, id<JavaLangThread_UncaughtExceptionHandler>)

FOUNDATION_EXPORT id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory> JavaUtilConcurrentForkJoinPool_defaultForkJoinWorkerThreadFactory_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, defaultForkJoinWorkerThreadFactory_, id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)

FOUNDATION_EXPORT JavaUtilRandom *JavaUtilConcurrentForkJoinPool_workerSeedGenerator_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, workerSeedGenerator_, JavaUtilRandom *)

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_init(JavaUtilConcurrentForkJoinPool *self);

FOUNDATION_EXPORT JavaUtilConcurrentForkJoinPool *new_JavaUtilConcurrentForkJoinPool_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_initWithInt_(JavaUtilConcurrentForkJoinPool *self, jint parallelism);

FOUNDATION_EXPORT JavaUtilConcurrentForkJoinPool *new_JavaUtilConcurrentForkJoinPool_initWithInt_(jint parallelism) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_initWithInt_withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory_withJavaLangThread_UncaughtExceptionHandler_withBoolean_(JavaUtilConcurrentForkJoinPool *self, jint parallelism, id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory> factory, id<JavaLangThread_UncaughtExceptionHandler> handler, jboolean asyncMode);

FOUNDATION_EXPORT JavaUtilConcurrentForkJoinPool *new_JavaUtilConcurrentForkJoinPool_initWithInt_withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory_withJavaLangThread_UncaughtExceptionHandler_withBoolean_(jint parallelism, id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory> factory, id<JavaLangThread_UncaughtExceptionHandler> handler, jboolean asyncMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_managedBlockWithJavaUtilConcurrentForkJoinPool_ManagedBlocker_(id<JavaUtilConcurrentForkJoinPool_ManagedBlocker> blocker);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool)

@protocol JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory < NSObject, JavaObject >

- (JavaUtilConcurrentForkJoinWorkerThread *)newThreadWithJavaUtilConcurrentForkJoinPool:(JavaUtilConcurrentForkJoinPool *)pool OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory)

@interface JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory : NSObject < JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory >

#pragma mark Public

- (JavaUtilConcurrentForkJoinWorkerThread *)newThreadWithJavaUtilConcurrentForkJoinPool:(JavaUtilConcurrentForkJoinPool *)pool OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory)

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory_init(JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory *self);

FOUNDATION_EXPORT JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory *new_JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory)

@interface JavaUtilConcurrentForkJoinPool_InvokeAll : JavaUtilConcurrentRecursiveAction {
 @public
  JavaUtilArrayList *tasks_;
}

#pragma mark Public

- (void)compute;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilArrayList:(JavaUtilArrayList *)tasks;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_InvokeAll)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool_InvokeAll, tasks_, JavaUtilArrayList *)

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_InvokeAll_initWithJavaUtilArrayList_(JavaUtilConcurrentForkJoinPool_InvokeAll *self, JavaUtilArrayList *tasks);

FOUNDATION_EXPORT JavaUtilConcurrentForkJoinPool_InvokeAll *new_JavaUtilConcurrentForkJoinPool_InvokeAll_initWithJavaUtilArrayList_(JavaUtilArrayList *tasks) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_InvokeAll)

@protocol JavaUtilConcurrentForkJoinPool_ManagedBlocker < NSObject, JavaObject >

- (jboolean)block;

- (jboolean)isReleasable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_ManagedBlocker)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_ManagedBlocker)

#endif // _JavaUtilConcurrentForkJoinPool_H_
