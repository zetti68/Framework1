//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AbstractSortedKeySortedSetMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_) && (ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_

@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectAbstractSortedSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSortedSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSortedSetMultimap.h"

@interface ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap : ComGoogleCommonCollectAbstractSortedSetMultimap {
}

- (instancetype)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)map;

- (id<JavaUtilSortedMap>)asMap;

- (id<JavaUtilSortedMap>)backingMap;

- (id<JavaUtilSortedSet>)keySet;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_init() {}
#endif
