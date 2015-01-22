//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AllEqualOrdering.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAllEqualOrdering_RESTRICT
#define ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAllEqualOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectAllEqualOrdering_) && (ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL || ComGoogleCommonCollectAllEqualOrdering_INCLUDE)
#define _ComGoogleCommonCollectAllEqualOrdering_

@class ComGoogleCommonCollectImmutableList;
@protocol JavaLangIterable;
@protocol JavaUtilList;

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectAllEqualOrdering_serialVersionUID 0LL

@interface ComGoogleCommonCollectAllEqualOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
}

- (jint)compareWithId:(id)left
               withId:(id)right;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectAllEqualOrdering_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectAllEqualOrdering)

FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *ComGoogleCommonCollectAllEqualOrdering_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAllEqualOrdering, INSTANCE_, ComGoogleCommonCollectAllEqualOrdering *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAllEqualOrdering, serialVersionUID, jlong)
#endif
