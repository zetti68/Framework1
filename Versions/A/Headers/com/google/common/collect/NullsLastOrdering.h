//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/NullsLastOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectNullsLastOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectNullsLastOrdering_RESTRICT
#define ComGoogleCommonCollectNullsLastOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectNullsLastOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectNullsLastOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectNullsLastOrdering_) && (ComGoogleCommonCollectNullsLastOrdering_INCLUDE_ALL || ComGoogleCommonCollectNullsLastOrdering_INCLUDE)
#define _ComGoogleCommonCollectNullsLastOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectNullsLastOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *ordering_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectNullsLastOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectNullsLastOrdering, ordering_, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectNullsLastOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectNullsLastOrdering *self, ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectNullsLastOrdering *new_ComGoogleCommonCollectNullsLastOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectNullsLastOrdering)

#endif
#pragma pop_macro("ComGoogleCommonCollectNullsLastOrdering_INCLUDE_ALL")
