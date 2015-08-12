//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/AbstractSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT
#define ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractSortedMultiset_) && (ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedMultiset_

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"

#define ComGoogleCommonCollectSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectSortedMultiset_INCLUDE 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectAbstractSortedMultiset : ComGoogleCommonCollectAbstractMultiset < ComGoogleCommonCollectSortedMultiset > {
 @public
  id<JavaUtilComparator> comparator__;
}

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)fromElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)fromBoundType
                                                       withId:(id)toElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)toBoundType;

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)createDescendingMultiset;

- (id<JavaUtilNavigableSet>)createElementSet;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (id<JavaUtilIterator>)descendingIterator;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractSortedMultiset, comparator__, id<JavaUtilComparator>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedMultiset_init(ComGoogleCommonCollectAbstractSortedMultiset *self);

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedMultiset_initWithJavaUtilComparator_(ComGoogleCommonCollectAbstractSortedMultiset *self, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedMultiset)

#endif

#if !defined (_ComGoogleCommonCollectAbstractSortedMultiset_$1_) && (ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedMultiset_$1_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedMultiset_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL")
