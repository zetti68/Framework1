//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/FilteredMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectFilteredMultimap_RESTRICT
#define ComGoogleCommonCollectFilteredMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectFilteredMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectFilteredMultimap_) && (ComGoogleCommonCollectFilteredMultimap_INCLUDE_ALL || ComGoogleCommonCollectFilteredMultimap_INCLUDE)
#define _ComGoogleCommonCollectFilteredMultimap_

@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMultimap;

#define ComGoogleCommonCollectAbstractMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMultimap.h"

@interface ComGoogleCommonCollectFilteredMultimap : ComGoogleCommonCollectAbstractMultimap {
 @public
  id<ComGoogleCommonCollectMultimap> unfiltered_;
}

- (instancetype)initWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)unfiltered;

- (id<ComGoogleCommonBasePredicate>)entryPredicate;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectFilteredMultimap_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectFilteredMultimap, unfiltered_, id<ComGoogleCommonCollectMultimap>)
#endif
