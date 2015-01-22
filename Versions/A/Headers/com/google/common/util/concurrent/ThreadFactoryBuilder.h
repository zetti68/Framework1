//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/util/concurrent/ThreadFactoryBuilder.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentThreadFactoryBuilder_RESTRICT
#define ComGoogleCommonUtilConcurrentThreadFactoryBuilder_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentThreadFactoryBuilder_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentThreadFactoryBuilder_) && (ComGoogleCommonUtilConcurrentThreadFactoryBuilder_INCLUDE_ALL || ComGoogleCommonUtilConcurrentThreadFactoryBuilder_INCLUDE)
#define _ComGoogleCommonUtilConcurrentThreadFactoryBuilder_

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilConcurrentThreadFactory;

@interface ComGoogleCommonUtilConcurrentThreadFactoryBuilder : NSObject {
}

- (instancetype)init;

- (ComGoogleCommonUtilConcurrentThreadFactoryBuilder *)setNameFormatWithNSString:(NSString *)nameFormat;

- (ComGoogleCommonUtilConcurrentThreadFactoryBuilder *)setDaemonWithBoolean:(jboolean)daemon;

- (ComGoogleCommonUtilConcurrentThreadFactoryBuilder *)setPriorityWithInt:(jint)priority;

- (ComGoogleCommonUtilConcurrentThreadFactoryBuilder *)setUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)uncaughtExceptionHandler;

- (ComGoogleCommonUtilConcurrentThreadFactoryBuilder *)setThreadFactoryWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)backingThreadFactory;

- (id<JavaUtilConcurrentThreadFactory>)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentThreadFactoryBuilder_init() {}
#endif

#if !defined (_ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1_) && (ComGoogleCommonUtilConcurrentThreadFactoryBuilder_INCLUDE_ALL || ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThread;
@class JavaUtilConcurrentAtomicAtomicLong;
@protocol JavaLangRunnable;
@protocol JavaLangThread_UncaughtExceptionHandler;

#define JavaUtilConcurrentThreadFactory_RESTRICT 1
#define JavaUtilConcurrentThreadFactory_INCLUDE 1
#include "java/util/concurrent/ThreadFactory.h"

@interface ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1 : NSObject < JavaUtilConcurrentThreadFactory > {
}

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable OBJC_METHOD_FAMILY_NONE;

- (instancetype)initWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)capture$0
                                           withNSString:(NSString *)capture$1
                 withJavaUtilConcurrentAtomicAtomicLong:(JavaUtilConcurrentAtomicAtomicLong *)capture$2
                                    withJavaLangBoolean:(JavaLangBoolean *)capture$3
                                    withJavaLangInteger:(JavaLangInteger *)capture$4
            withJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)capture$5;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1_init() {}
#endif
