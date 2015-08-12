//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/DescendingMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectDescendingMultiset_RESTRICT
#define ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectDescendingMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectDescendingMultiset_) && (ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL || ComGoogleCommonCollectDescendingMultiset_INCLUDE)
#define _ComGoogleCommonCollectDescendingMultiset_

#define ComGoogleCommonCollectForwardingMultiset_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultiset_INCLUDE 1
#include "com/google/common/collect/ForwardingMultiset.h"

#define ComGoogleCommonCollectSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectSortedMultiset_INCLUDE 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectDescendingMultiset : ComGoogleCommonCollectForwardingMultiset < ComGoogleCommonCollectSortedMultiset >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)toElement
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (id<JavaUtilIterator>)iterator;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)fromElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)fromBoundType
                                                       withId:(id)toElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)toBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)fromElement
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)description;

#pragma mark Protected

- (id<ComGoogleCommonCollectMultiset>)delegate;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilIterator>)entryIterator;

- (id<ComGoogleCommonCollectSortedMultiset>)forwardMultiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDescendingMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectDescendingMultiset_init(ComGoogleCommonCollectDescendingMultiset *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDescendingMultiset)

#endif

#if !defined (_ComGoogleCommonCollectDescendingMultiset_1DescendingMultisetEntrySet_) && (ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL || ComGoogleCommonCollectDescendingMultiset_1DescendingMultisetEntrySet_INCLUDE)
#define _ComGoogleCommonCollectDescendingMultiset_1DescendingMultisetEntrySet_

#endif
#pragma pop_macro("ComGoogleCommonCollectDescendingMultiset_INCLUDE_ALL")
