//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/Platform.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectPlatform_RESTRICT
#define ComGoogleCommonCollectPlatform_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectPlatform_RESTRICT

#if !defined (_ComGoogleCommonCollectPlatform_) && (ComGoogleCommonCollectPlatform_INCLUDE_ALL || ComGoogleCommonCollectPlatform_INCLUDE)
#define _ComGoogleCommonCollectPlatform_

@class ComGoogleCommonCollectMapMaker;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectMaps_EntryTransformer;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectPlatform : NSObject {
}

+ (IOSObjectArray *)cloneWithNSObjectArray:(IOSObjectArray *)array;

+ (IOSObjectArray *)newArrayWithNSObjectArray:(IOSObjectArray *)reference
                                      withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectMapMaker *)tryWeakKeysWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

+ (id<JavaUtilSortedMap>)mapsTransformEntriesSortedMapWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)fromMap
                            withComGoogleCommonCollectMaps_EntryTransformer:(id<ComGoogleCommonCollectMaps_EntryTransformer>)transformer;

+ (id<JavaUtilSortedMap>)mapsAsMapSortedSetWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)set
                                 withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<JavaUtilSortedSet>)setsFilterSortedSetWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)set
                                 withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilSortedMap>)mapsFilterSortedMapWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)map
                                 withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectPlatform_init() {}
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectPlatform_cloneWithNSObjectArray_(IOSObjectArray *array);
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectPlatform_newArrayWithNSObjectArray_withInt_(IOSObjectArray *reference, jint length);
FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *ComGoogleCommonCollectPlatform_tryWeakKeysWithComGoogleCommonCollectMapMaker_(ComGoogleCommonCollectMapMaker *mapMaker);
FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsTransformEntriesSortedMapWithJavaUtilSortedMap_withComGoogleCommonCollectMaps_EntryTransformer_(id<JavaUtilSortedMap> fromMap, id<ComGoogleCommonCollectMaps_EntryTransformer> transformer);
FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsAsMapSortedSetWithJavaUtilSortedSet_withComGoogleCommonBaseFunction_(id<JavaUtilSortedSet> set, id<ComGoogleCommonBaseFunction> function);
FOUNDATION_EXPORT id<JavaUtilSortedSet> ComGoogleCommonCollectPlatform_setsFilterSortedSetWithJavaUtilSortedSet_withComGoogleCommonBasePredicate_(id<JavaUtilSortedSet> set, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT id<JavaUtilSortedMap> ComGoogleCommonCollectPlatform_mapsFilterSortedMapWithJavaUtilSortedMap_withComGoogleCommonBasePredicate_(id<JavaUtilSortedMap> map, id<ComGoogleCommonBasePredicate> predicate);
#endif
