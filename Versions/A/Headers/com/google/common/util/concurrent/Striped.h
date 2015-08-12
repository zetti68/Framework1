//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/Striped.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentStriped_RESTRICT
#define ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentStriped_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_

@protocol JavaLangIterable;

@interface ComGoogleCommonUtilConcurrentStriped : NSObject

#pragma mark Public

- (id<JavaLangIterable>)bulkGetWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getWithId:(id)key;

- (id)getAtWithInt:(jint)index;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakLockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakReadWriteLockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)lazyWeakSemaphoreWithInt:(jint)stripes
                                                           withInt:(jint)permits;

+ (ComGoogleCommonUtilConcurrentStriped *)lockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)readWriteLockWithInt:(jint)stripes;

+ (ComGoogleCommonUtilConcurrentStriped *)semaphoreWithInt:(jint)stripes
                                                   withInt:(jint)permits;

- (jint)size;

#pragma mark Package-Private

- (jint)indexForWithId:(id)key;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentStriped)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_semaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakSemaphoreWithInt_withInt_(jint stripes, jint permits);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_readWriteLockWithInt_(jint stripes);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentStriped *ComGoogleCommonUtilConcurrentStriped_lazyWeakReadWriteLockWithInt_(jint stripes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentStriped)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PowerOfTwoStriped_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_CompactStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_CompactStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_CompactStriped_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_LazyStriped_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_LazyStriped_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_LazyStriped_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_PaddedLock_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PaddedLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PaddedLock_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_PaddedSemaphore_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_$2_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$2_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_$3_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$3_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$3_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_$4_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$4_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$4_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_$5_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$5_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$5_

#endif

#if !defined (_ComGoogleCommonUtilConcurrentStriped_$1_) && (ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL || ComGoogleCommonUtilConcurrentStriped_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentStriped_$1_

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentStriped_INCLUDE_ALL")
