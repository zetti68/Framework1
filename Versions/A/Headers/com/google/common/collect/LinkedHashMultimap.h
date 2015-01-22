//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/LinkedHashMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectLinkedHashMultimap_RESTRICT
#define ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLinkedHashMultimap_RESTRICT
#if ComGoogleCommonCollectLinkedHashMultimap_ValueSet_INCLUDE
#define ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE 1
#endif
#if ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_INCLUDE
#define ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_

@class ComGoogleCommonCollectLinkedHashMultimap_ValueEntry;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectAbstractSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSetMultimap.h"

#define ComGoogleCommonCollectLinkedHashMultimap_DEFAULT_KEY_CAPACITY 16
#define ComGoogleCommonCollectLinkedHashMultimap_DEFAULT_VALUE_SET_CAPACITY 2
#define ComGoogleCommonCollectLinkedHashMultimap_VALUE_SET_LOAD_FACTOR 1.0
#define ComGoogleCommonCollectLinkedHashMultimap_serialVersionUID 1LL

@interface ComGoogleCommonCollectLinkedHashMultimap : ComGoogleCommonCollectAbstractSetMultimap {
 @public
  jint valueSetCapacity_;
}

+ (ComGoogleCommonCollectLinkedHashMultimap *)create;

+ (ComGoogleCommonCollectLinkedHashMultimap *)createWithInt:(jint)expectedKeys
                                                    withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectLinkedHashMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilSet>)createCollection;

- (id<JavaUtilCollection>)createCollectionWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilIterator>)entryIterator;

- (void)clear;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_create();
FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);
FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLinkedHashMultimap, DEFAULT_KEY_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLinkedHashMultimap, DEFAULT_VALUE_SET_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLinkedHashMultimap, VALUE_SET_LOAD_FACTOR, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLinkedHashMultimap, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_

@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink < NSObject, JavaObject >

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_init() {}
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueEntry : ComGoogleCommonCollectAbstractMapEntry < ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink > {
 @public
  id key_;
  id value_;
  jint valueHash_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextInValueSetHashRow_;
  id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> predecessorInValueSet_;
  id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> successorInValueSet_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *predecessorInMultimap_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *successorInMultimap_;
}

- (instancetype)initWithId:(id)key
                    withId:(id)value
                   withInt:(jint)valueHash
withComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)nextInValueSetHashRow;

- (id)getKey;

- (id)getValue;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)getPredecessorInMultimap;

- (ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)getSuccessorInMultimap;

- (void)setSuccessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)multimapSuccessor;

- (void)setPredecessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)multimapPredecessor;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, value_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, nextInValueSetHashRow_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, predecessorInValueSet_, id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, successorInValueSet_, id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, predecessorInMultimap_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, successorInMultimap_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSet_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSet_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSet_

@class ComGoogleCommonCollectLinkedHashMultimap;
@class IOSObjectArray;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include "com/google/common/collect/Sets.h"

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueSet : ComGoogleCommonCollectSets_ImprovedAbstractSet < ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink > {
 @public
  IOSObjectArray *hashTable_;
}

- (instancetype)initWithComGoogleCommonCollectLinkedHashMultimap:(ComGoogleCommonCollectLinkedHashMultimap *)outer$
                                                          withId:(id)key
                                                         withInt:(jint)expectedValues;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)o;

- (jboolean)addWithId:(id)value;

- (jboolean)removeWithId:(id)o;

- (void)clear;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_ValueSet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueSet, hashTable_, IOSObjectArray *)
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_

@class ComGoogleCommonCollectLinkedHashMultimap_ValueEntry;
@class ComGoogleCommonCollectLinkedHashMultimap_ValueSet;
@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1 : NSObject < JavaUtilIterator > {
 @public
  id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> nextEntry_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *toRemove_;
  jint expectedModCount_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectLinkedHashMultimap_ValueSet:(ComGoogleCommonCollectLinkedHashMultimap_ValueSet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1, nextEntry_, id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1, toRemove_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_$1_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_$1_

@class ComGoogleCommonCollectLinkedHashMultimap;
@class ComGoogleCommonCollectLinkedHashMultimap_ValueEntry;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectLinkedHashMultimap_$1 : NSObject < JavaUtilIterator > {
 @public
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextEntry_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *toRemove_;
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectLinkedHashMultimap:(ComGoogleCommonCollectLinkedHashMultimap *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLinkedHashMultimap_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_$1, nextEntry_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_$1, toRemove_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
#endif
