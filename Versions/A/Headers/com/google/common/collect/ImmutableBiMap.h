//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/ImmutableBiMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableBiMap_RESTRICT
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableBiMap_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_

@class ComGoogleCommonCollectImmutableBiMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

@interface ComGoogleCommonCollectImmutableBiMap : ComGoogleCommonCollectImmutableMap < ComGoogleCommonCollectBiMap > {
}

+ (ComGoogleCommonCollectImmutableBiMap *)of;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5;

+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableBiMap *)fromEntriesWithJavaUtilCollection:(id<JavaUtilCollection>)entries;

- (instancetype)init;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)values;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)writeReplace;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableBiMap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_of();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_(id k1, id v1);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builder();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_fromEntriesWithJavaUtilCollection_(id<JavaUtilCollection> entries);
#endif

#if !defined (_ComGoogleCommonCollectImmutableBiMap_Builder_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_Builder_

@class ComGoogleCommonCollectImmutableBiMap;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_Builder_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

@interface ComGoogleCommonCollectImmutableBiMap_Builder : ComGoogleCommonCollectImmutableMap_Builder {
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithId:(id)key
                                                     withId:(id)value;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (ComGoogleCommonCollectImmutableBiMap *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableBiMap_Builder_init() {}
#endif

#if !defined (_ComGoogleCommonCollectImmutableBiMap_SerializedForm_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_SerializedForm_

@class ComGoogleCommonCollectImmutableBiMap;

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_SerializedForm_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

#define ComGoogleCommonCollectImmutableBiMap_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableBiMap_SerializedForm : ComGoogleCommonCollectImmutableMap_SerializedForm {
}

- (instancetype)initWithComGoogleCommonCollectImmutableBiMap:(ComGoogleCommonCollectImmutableBiMap *)bimap;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableBiMap_SerializedForm_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableBiMap_SerializedForm, serialVersionUID, jlong)
#endif
