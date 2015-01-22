//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/LexicographicalOrdering.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectLexicographicalOrdering_RESTRICT
#define ComGoogleCommonCollectLexicographicalOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLexicographicalOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectLexicographicalOrdering_) && (ComGoogleCommonCollectLexicographicalOrdering_INCLUDE_ALL || ComGoogleCommonCollectLexicographicalOrdering_INCLUDE)
#define _ComGoogleCommonCollectLexicographicalOrdering_

@protocol JavaLangIterable;

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectLexicographicalOrdering_serialVersionUID 0LL

@interface ComGoogleCommonCollectLexicographicalOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *elementOrder_;
}

- (instancetype)initWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)elementOrder;

- (jint)compareWithId:(id<JavaLangIterable>)leftIterable
               withId:(id<JavaLangIterable>)rightIterable;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLexicographicalOrdering_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLexicographicalOrdering, elementOrder_, ComGoogleCommonCollectOrdering *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLexicographicalOrdering, serialVersionUID, jlong)
#endif