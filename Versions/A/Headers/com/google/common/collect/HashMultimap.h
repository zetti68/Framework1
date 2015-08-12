//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/HashMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectHashMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectHashMultimap_RESTRICT
#define ComGoogleCommonCollectHashMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectHashMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectHashMultimap_) && (ComGoogleCommonCollectHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectHashMultimap_INCLUDE)
#define _ComGoogleCommonCollectHashMultimap_

#define ComGoogleCommonCollectAbstractSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSetMultimap.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectHashMultimap : ComGoogleCommonCollectAbstractSetMultimap {
 @public
  jint expectedValuesPerKey_;
}

#pragma mark Public

+ (ComGoogleCommonCollectHashMultimap *)create;

+ (ComGoogleCommonCollectHashMultimap *)createWithInt:(jint)expectedKeys
                                              withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectHashMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashMultimap)

#endif
#pragma pop_macro("ComGoogleCommonCollectHashMultimap_INCLUDE_ALL")
