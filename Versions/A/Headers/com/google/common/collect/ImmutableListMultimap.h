//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableListMultimap_RESTRICT
#define ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableListMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableListMultimap_) && (ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableListMultimap_INCLUDE)
#define _ComGoogleCommonCollectImmutableListMultimap_

#define ComGoogleCommonCollectImmutableMultimap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultimap_INCLUDE 1
#include "com/google/common/collect/ImmutableMultimap.h"

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableListMultimap_Builder;
@class ComGoogleCommonCollectImmutableMap;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectImmutableListMultimap : ComGoogleCommonCollectImmutableMultimap < ComGoogleCommonCollectListMultimap >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableListMultimap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableListMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableListMultimap *)inverse;

+ (ComGoogleCommonCollectImmutableListMultimap *)of;

+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id)k1
                                                   withId:(id)v1;

+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id)k1
                                                   withId:(id)v1
                                                   withId:(id)k2
                                                   withId:(id)v2;

+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id)k1
                                                   withId:(id)v1
                                                   withId:(id)k2
                                                   withId:(id)v2
                                                   withId:(id)k3
                                                   withId:(id)v3;

+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id)k1
                                                   withId:(id)v1
                                                   withId:(id)k2
                                                   withId:(id)v2
                                                   withId:(id)k3
                                                   withId:(id)v3
                                                   withId:(id)k4
                                                   withId:(id)v4;

+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id)k1
                                                   withId:(id)v1
                                                   withId:(id)k2
                                                   withId:(id)v2
                                                   withId:(id)k3
                                                   withId:(id)v3
                                                   withId:(id)k4
                                                   withId:(id)v4
                                                   withId:(id)k5
                                                   withId:(id)v5;

- (ComGoogleCommonCollectImmutableList *)removeAllWithId:(id)key;

- (ComGoogleCommonCollectImmutableList *)replaceValuesWithId:(id)key
                                        withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableListMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap_Builder *ComGoogleCommonCollectImmutableListMultimap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableListMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableListMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *new_ComGoogleCommonCollectImmutableListMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableMap *map, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableListMultimap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableListMultimap_Builder_) && (ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableListMultimap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableListMultimap_Builder_

#define ComGoogleCommonCollectImmutableMultimap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultimap_Builder_INCLUDE 1
#include "com/google/common/collect/ImmutableMultimap.h"

@class ComGoogleCommonCollectImmutableListMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableListMultimap_Builder : ComGoogleCommonCollectImmutableMultimap_Builder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableListMultimap *)build;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putWithId:(id)key
                                                            withId:(id)value;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithId:(id)key
                                                 withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithId:(id)key
                                                    withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableListMultimap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableListMultimap_Builder_init(ComGoogleCommonCollectImmutableListMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap_Builder *new_ComGoogleCommonCollectImmutableListMultimap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableListMultimap_Builder)

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableListMultimap_INCLUDE_ALL")
