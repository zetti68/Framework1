//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/NullsFirstOrdering.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectNullsFirstOrdering_RESTRICT
#define ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectNullsFirstOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectNullsFirstOrdering_) && (ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL || ComGoogleCommonCollectNullsFirstOrdering_INCLUDE)
#define _ComGoogleCommonCollectNullsFirstOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectNullsFirstOrdering_serialVersionUID 0LL

@interface ComGoogleCommonCollectNullsFirstOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *ordering_;
}

- (instancetype)initWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

- (jint)compareWithId:(id)left
               withId:(id)right;

- (ComGoogleCommonCollectOrdering *)reverse;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectNullsFirstOrdering_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectNullsFirstOrdering, ordering_, ComGoogleCommonCollectOrdering *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectNullsFirstOrdering, serialVersionUID, jlong)
#endif
