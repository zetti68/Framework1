//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableSortedMultisetFauxverideShim.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_RESTRICT
#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_) && (ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE_ALL || ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE)
#define _ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSortedMultiset;
@class ComGoogleCommonCollectImmutableSortedMultiset_Builder;
@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5
                                                     withId:(id)e6
                                          withNSObjectArray:(IOSObjectArray *)remaining;

#pragma mark Package-Private

- (instancetype)init;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_copyOfWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_init(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE_ALL")
