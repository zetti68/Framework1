//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/UsingToStringOrdering.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectUsingToStringOrdering_RESTRICT
#define ComGoogleCommonCollectUsingToStringOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectUsingToStringOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectUsingToStringOrdering_) && (ComGoogleCommonCollectUsingToStringOrdering_INCLUDE_ALL || ComGoogleCommonCollectUsingToStringOrdering_INCLUDE)
#define _ComGoogleCommonCollectUsingToStringOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectUsingToStringOrdering_serialVersionUID 0LL

@interface ComGoogleCommonCollectUsingToStringOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
}

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectUsingToStringOrdering_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectUsingToStringOrdering)

FOUNDATION_EXPORT ComGoogleCommonCollectUsingToStringOrdering *ComGoogleCommonCollectUsingToStringOrdering_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectUsingToStringOrdering, INSTANCE_, ComGoogleCommonCollectUsingToStringOrdering *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectUsingToStringOrdering, serialVersionUID, jlong)
#endif
