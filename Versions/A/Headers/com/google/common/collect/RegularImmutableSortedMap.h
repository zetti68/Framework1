//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/RegularImmutableSortedMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectRegularImmutableSortedMap_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSortedMap_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMap_) && (ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMap_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;

#define ComGoogleCommonCollectImmutableSortedMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMap_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMap.h"

@interface ComGoogleCommonCollectRegularImmutableSortedMap : ComGoogleCommonCollectImmutableSortedMap {
}

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList
                           withComGoogleCommonCollectImmutableSortedMap:(ComGoogleCommonCollectImmutableSortedMap *)descendingMap;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSortedSet *)keySet;

- (ComGoogleCommonCollectImmutableCollection *)values;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSortedMap *)headMapWithId:(id)toKey
                                                withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableSortedMap *)tailMapWithId:(id)fromKey
                                                withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableSortedMap *)createDescendingMap;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMap_init() {}
#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_) && (ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableSortedMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT 1
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMapEntrySet.h"

@interface ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet : ComGoogleCommonCollectImmutableMapEntrySet {
}

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (ComGoogleCommonCollectImmutableMap *)map;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedMap:(ComGoogleCommonCollectRegularImmutableSortedMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_$1_) && (ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"

@interface ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id<JavaUtilMap_Entry>)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedMap_EntrySet:(ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMap_EntrySet_$1_init() {}
#endif
