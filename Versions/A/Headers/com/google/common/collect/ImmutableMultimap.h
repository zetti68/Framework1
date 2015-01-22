//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/ImmutableMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableMultimap_RESTRICT
#define ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableMultimap_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultimap_Builder;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectAbstractMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMultimap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectImmutableMultimap_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMultimap : ComGoogleCommonCollectAbstractMultimap < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *map_;
  jint size__;
}

+ (ComGoogleCommonCollectImmutableMultimap *)of;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3
                                               withId:(id)k4
                                               withId:(id)v4;

+ (ComGoogleCommonCollectImmutableMultimap *)ofWithId:(id)k1
                                               withId:(id)v1
                                               withId:(id)k2
                                               withId:(id)v2
                                               withId:(id)k3
                                               withId:(id)v3
                                               withId:(id)k4
                                               withId:(id)v4
                                               withId:(id)k5
                                               withId:(id)v5;

+ (ComGoogleCommonCollectImmutableMultimap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size;

- (ComGoogleCommonCollectImmutableCollection *)removeAllWithId:(id)key;

- (ComGoogleCommonCollectImmutableCollection *)replaceValuesWithId:(id)key
                                              withJavaLangIterable:(id<JavaLangIterable>)values;

- (void)clear;

- (ComGoogleCommonCollectImmutableCollection *)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableMultimap *)inverse;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)isPartialView;

- (jboolean)containsKeyWithId:(id)key;

- (jint)size;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (ComGoogleCommonCollectImmutableMap *)asMap;

- (id<JavaUtilMap>)createAsMap;

- (ComGoogleCommonCollectImmutableCollection *)entries;

- (ComGoogleCommonCollectImmutableCollection *)createEntries;

- (ComGoogleCommonCollectUnmodifiableIterator *)entryIterator;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableMultiset *)createKeys;

- (ComGoogleCommonCollectImmutableCollection *)values;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap, map_, ComGoogleCommonCollectImmutableMap *)
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_of();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_(id k1, id v1);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap_Builder *ComGoogleCommonCollectImmutableMultimap_builder();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMultimap *ComGoogleCommonCollectImmutableMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_BuilderMultimap_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_BuilderMultimap_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_BuilderMultimap_

@protocol JavaUtilCollection;

#define ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define ComGoogleCommonCollectImmutableMultimap_BuilderMultimap_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMultimap_BuilderMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap {
}

- (instancetype)init;

- (id<JavaUtilCollection>)createCollection;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_BuilderMultimap_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_BuilderMultimap, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Builder_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Builder_

@class ComGoogleCommonCollectImmutableMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMultimap_Builder : NSObject {
 @public
  id<ComGoogleCommonCollectMultimap> builderMultimap_;
  id<JavaUtilComparator> keyComparator_;
  id<JavaUtilComparator> valueComparator_;
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putWithId:(id)key
                                                        withId:(id)value;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithId:(id)key
                                             withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithId:(id)key
                                                withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

- (ComGoogleCommonCollectImmutableMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableMultimap *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Builder_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, builderMultimap_, id<ComGoogleCommonCollectMultimap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, keyComparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_Builder, valueComparator_, id<JavaUtilComparator>)
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Builder_$1_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Builder_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Builder_$1_

@protocol JavaUtilMap_Entry;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

@interface ComGoogleCommonCollectImmutableMultimap_Builder_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id)applyWithId:(id<JavaUtilMap_Entry>)entry_;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Builder_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_EntryCollection_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_EntryCollection_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_EntryCollection_

@class ComGoogleCommonCollectImmutableMultimap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableCollection_RESTRICT 1
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#include "com/google/common/collect/ImmutableCollection.h"

#define ComGoogleCommonCollectImmutableMultimap_EntryCollection_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMultimap_EntryCollection : ComGoogleCommonCollectImmutableCollection {
 @public
  __weak ComGoogleCommonCollectImmutableMultimap *multimap_;
}

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap:(ComGoogleCommonCollectImmutableMultimap *)multimap;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)isPartialView;

- (jint)size;

- (jboolean)containsWithId:(id)object;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_EntryCollection_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_EntryCollection, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Keys_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Keys_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Keys_

@class ComGoogleCommonCollectImmutableMultimap;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"

@interface ComGoogleCommonCollectImmutableMultimap_Keys : ComGoogleCommonCollectImmutableMultiset {
}

- (jboolean)containsWithId:(id)object;

- (jint)countWithId:(id)element;

- (id<JavaUtilSet>)elementSet;

- (jint)size;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap:(ComGoogleCommonCollectImmutableMultimap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Keys_init() {}
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMultimap_Keys;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_EntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"

@interface ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet : ComGoogleCommonCollectImmutableMultiset_EntrySet {
}

- (jint)size;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap_Keys:(ComGoogleCommonCollectImmutableMultimap_Keys *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_$1_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet;
@protocol ComGoogleCommonCollectMultiset_Entry;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"

@interface ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id<ComGoogleCommonCollectMultiset_Entry>)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet:(ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet *)outer$
                                          withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)capture$0;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Keys_KeysEntrySet_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_Values_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_Values_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_Values_

@class ComGoogleCommonCollectImmutableMultimap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableCollection_RESTRICT 1
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#include "com/google/common/collect/ImmutableCollection.h"

#define ComGoogleCommonCollectImmutableMultimap_Values_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMultimap_Values : ComGoogleCommonCollectImmutableCollection {
 @public
  __weak ComGoogleCommonCollectImmutableMultimap *multimap_;
}

- (instancetype)initWithComGoogleCommonCollectImmutableMultimap:(ComGoogleCommonCollectImmutableMultimap *)multimap;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (jboolean)isPartialView;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_Values_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMultimap_Values, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectImmutableMultimap_$1_) && (ComGoogleCommonCollectImmutableMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMultimap_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMultimap_$1_

@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"

@interface ComGoogleCommonCollectImmutableMultimap_$1 : ComGoogleCommonCollectUnmodifiableIterator {
 @public
  id key_;
  id<JavaUtilIterator> valueIterator_;
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMultimap_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_$1, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMultimap_$1, valueIterator_, id<JavaUtilIterator>)
#endif
