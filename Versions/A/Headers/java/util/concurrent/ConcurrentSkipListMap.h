//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentSkipListMap.java
//

#ifndef _JavaUtilConcurrentConcurrentSkipListMap_H_
#define _JavaUtilConcurrentConcurrentSkipListMap_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilAbstractMap_SimpleImmutableEntry;
@class JavaUtilConcurrentConcurrentSkipListMap_EntrySet;
@class JavaUtilConcurrentConcurrentSkipListMap_HeadIndex;
@class JavaUtilConcurrentConcurrentSkipListMap_Index;
@class JavaUtilConcurrentConcurrentSkipListMap_KeySet;
@class JavaUtilConcurrentConcurrentSkipListMap_Node;
@class JavaUtilConcurrentConcurrentSkipListMap_Values;
@class JavaUtilRandom;
@class SunMiscUnsafe;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/util/concurrent/ConcurrentNavigableMap.h"

#define JavaUtilConcurrentConcurrentSkipListMap_EQ 1
#define JavaUtilConcurrentConcurrentSkipListMap_GT 0
#define JavaUtilConcurrentConcurrentSkipListMap_LT 2
#define JavaUtilConcurrentConcurrentSkipListMap_serialVersionUID -8627078645895051609LL

@interface JavaUtilConcurrentConcurrentSkipListMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentNavigableMap, NSCopying, JavaIoSerializable > {
}

- (void)initialize__ OBJC_METHOD_FAMILY_NONE;

- (jint)compareWithId:(id)k1
               withId:(id)k2;

- (jboolean)inHalfOpenRangeWithId:(id)key
                           withId:(id)least
                           withId:(id)fence;

- (jboolean)inOpenRangeWithId:(id)key
                       withId:(id)least
                       withId:(id)fence;

- (id)doRemoveWithId:(id)okey
              withId:(id)value;

- (JavaUtilConcurrentConcurrentSkipListMap_Node *)findFirst;

- (id<JavaUtilMap_Entry>)doRemoveFirstEntry;

- (JavaUtilConcurrentConcurrentSkipListMap_Node *)findLast;

- (id<JavaUtilMap_Entry>)doRemoveLastEntry;

- (JavaUtilConcurrentConcurrentSkipListMap_Node *)findNearWithId:(id)kkey
                                                         withInt:(jint)rel;

- (JavaUtilAbstractMap_SimpleImmutableEntry *)getNearWithId:(id)key
                                                    withInt:(jint)rel;

- (instancetype)init;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)m;

- (instancetype)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)m;

- (JavaUtilConcurrentConcurrentSkipListMap *)clone;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (jint)size;

- (jboolean)isEmpty;

- (void)clear;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)descendingMap;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (jboolean)isEqual:(id)o;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id)lastKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                 withBoolean:(jboolean)fromInclusive
                                                      withId:(id)toKey
                                                 withBoolean:(jboolean)toInclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey
                                                  withBoolean:(jboolean)inclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey
                                                  withBoolean:(jboolean)inclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                      withId:(id)toKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilIterator>)keyIterator;

- (id<JavaUtilIterator>)valueIterator;

- (id<JavaUtilIterator>)entryIterator;

+ (id<JavaUtilList>)toListWithJavaUtilCollection:(id<JavaUtilCollection>)c;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentSkipListMap_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentSkipListMap)
FOUNDATION_EXPORT id<JavaUtilList> JavaUtilConcurrentConcurrentSkipListMap_toListWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilRandom *JavaUtilConcurrentConcurrentSkipListMap_seedGenerator_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, seedGenerator_, JavaUtilRandom *)

FOUNDATION_EXPORT id JavaUtilConcurrentConcurrentSkipListMap_BASE_HEADER_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, BASE_HEADER_, id)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, EQ, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, LT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, GT, jint)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentSkipListMap_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentSkipListMap_headOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap, headOffset_, jlong)

@interface JavaUtilConcurrentConcurrentSkipListMap_Node : NSObject {
 @public
  id key_;
  id value_;
  JavaUtilConcurrentConcurrentSkipListMap_Node *next_;
}

- (instancetype)initWithId:(id)key
                    withId:(id)value
withJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)next;

- (jboolean)casValueWithId:(id)cmp
                    withId:(id)val;

- (jboolean)casNextWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)cmp
                   withJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)val;

- (jboolean)isMarker;

- (jboolean)isBaseHeader;

- (jboolean)appendMarkerWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)f;

- (void)helpDeleteWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)b
                  withJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)f;

- (id)getValidValue;

- (JavaUtilAbstractMap_SimpleImmutableEntry *)createSnapshot;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentSkipListMap_Node_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentSkipListMap_Node)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, value_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, next_, JavaUtilConcurrentConcurrentSkipListMap_Node *)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentSkipListMap_Node_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentSkipListMap_Node_valueOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, valueOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentSkipListMap_Node_nextOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_Node, nextOffset_, jlong)

@interface JavaUtilConcurrentConcurrentSkipListMap_Index : NSObject {
 @public
  JavaUtilConcurrentConcurrentSkipListMap_Node *node_;
  JavaUtilConcurrentConcurrentSkipListMap_Index *down_;
  JavaUtilConcurrentConcurrentSkipListMap_Index *right_;
}

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)node
                   withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)down
                   withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)right;

- (jboolean)casRightWithJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)cmp
                    withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)val;

- (jboolean)indexesDeletedNode;

- (jboolean)linkWithJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)succ
                withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)newSucc;

- (jboolean)unlinkWithJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)succ;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentSkipListMap_Index_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentSkipListMap_Index)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Index, node_, JavaUtilConcurrentConcurrentSkipListMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Index, down_, JavaUtilConcurrentConcurrentSkipListMap_Index *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Index, right_, JavaUtilConcurrentConcurrentSkipListMap_Index *)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentSkipListMap_Index_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_Index, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentSkipListMap_Index_rightOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_Index, rightOffset_, jlong)

@interface JavaUtilConcurrentConcurrentSkipListMap_HeadIndex : JavaUtilConcurrentConcurrentSkipListMap_Index {
 @public
  jint level_;
}

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_Node:(JavaUtilConcurrentConcurrentSkipListMap_Node *)node
                   withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)down
                   withJavaUtilConcurrentConcurrentSkipListMap_Index:(JavaUtilConcurrentConcurrentSkipListMap_Index *)right
                                                             withInt:(jint)level;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_HeadIndex_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_ComparableUsingComparator : NSObject < JavaLangComparable > {
 @public
  id actualKey_;
  id<JavaUtilComparator> cmp_;
}

- (instancetype)initWithId:(id)key
    withJavaUtilComparator:(id<JavaUtilComparator>)cmp;

- (jint)compareToWithId:(id)k2;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_ComparableUsingComparator_init() {}

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_ComparableUsingComparator, actualKey_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_ComparableUsingComparator, cmp_, id<JavaUtilComparator>)

@interface JavaUtilConcurrentConcurrentSkipListMap_Iter : NSObject < JavaUtilIterator > {
 @public
  JavaUtilConcurrentConcurrentSkipListMap_Node *lastReturned_;
  JavaUtilConcurrentConcurrentSkipListMap_Node *next_;
  id nextValue_;
}

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap:(JavaUtilConcurrentConcurrentSkipListMap *)outer$;

- (jboolean)hasNext;

- (void)advance;

- (void)remove;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_Iter_init() {}

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Iter, lastReturned_, JavaUtilConcurrentConcurrentSkipListMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Iter, next_, JavaUtilConcurrentConcurrentSkipListMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_Iter, nextValue_, id)

@interface JavaUtilConcurrentConcurrentSkipListMap_ValueIterator : JavaUtilConcurrentConcurrentSkipListMap_Iter {
}

- (id)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap:(JavaUtilConcurrentConcurrentSkipListMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_ValueIterator_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_KeyIterator : JavaUtilConcurrentConcurrentSkipListMap_Iter {
}

- (id)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap:(JavaUtilConcurrentConcurrentSkipListMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_KeyIterator_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_EntryIterator : JavaUtilConcurrentConcurrentSkipListMap_Iter {
}

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap:(JavaUtilConcurrentConcurrentSkipListMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_EntryIterator_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_KeySet : JavaUtilAbstractSet < JavaUtilNavigableSet > {
}

- (instancetype)initWithJavaUtilConcurrentConcurrentNavigableMap:(id<JavaUtilConcurrentConcurrentNavigableMap>)map;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (void)clear;

- (id)lowerWithId:(id)e;

- (id)floorWithId:(id)e;

- (id)ceilingWithId:(id)e;

- (id)higherWithId:(id)e;

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id)last;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilIterator>)iterator;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                                  withId:(id)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement;

- (id<JavaUtilNavigableSet>)descendingSet;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_KeySet_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_Values : JavaUtilAbstractCollection {
}

- (instancetype)initWithJavaUtilConcurrentConcurrentNavigableMap:(id<JavaUtilConcurrentConcurrentNavigableMap>)map;

- (id<JavaUtilIterator>)iterator;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)containsWithId:(id)o;

- (void)clear;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_Values_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_EntrySet : JavaUtilAbstractSet {
}

- (instancetype)initWithJavaUtilConcurrentConcurrentNavigableMap:(id<JavaUtilConcurrentConcurrentNavigableMap>)map;

- (id<JavaUtilIterator>)iterator;

- (jboolean)containsWithId:(id)o;

- (jboolean)removeWithId:(id)o;

- (jboolean)isEmpty;

- (jint)size;

- (void)clear;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_EntrySet_init() {}

#define JavaUtilConcurrentConcurrentSkipListMap_SubMap_serialVersionUID -7647078645895051609LL

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentNavigableMap, NSCopying, JavaIoSerializable > {
}

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap:(JavaUtilConcurrentConcurrentSkipListMap *)map
                                                         withId:(id)fromKey
                                                    withBoolean:(jboolean)fromInclusive
                                                         withId:(id)toKey
                                                    withBoolean:(jboolean)toInclusive
                                                    withBoolean:(jboolean)isDescending;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsValueWithId:(id)value;

- (void)clear;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (id<JavaUtilComparator>)comparator;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)subMapWithId:(id)fromKey
                                                     withBoolean:(jboolean)fromInclusive
                                                          withId:(id)toKey
                                                     withBoolean:(jboolean)toInclusive;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)headMapWithId:(id)toKey
                                                      withBoolean:(jboolean)inclusive;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)tailMapWithId:(id)fromKey
                                                      withBoolean:(jboolean)inclusive;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)subMapWithId:(id)fromKey
                                                          withId:(id)toKey;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)headMapWithId:(id)toKey;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)tailMapWithId:(id)fromKey;

- (JavaUtilConcurrentConcurrentSkipListMap_SubMap *)descendingMap;

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id)firstKey;

- (id)lastKey;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilIterator>)keyIterator;

- (id<JavaUtilIterator>)valueIterator;

- (id<JavaUtilIterator>)entryIterator;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_SubMap_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListMap_SubMap, serialVersionUID, jlong)

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter : NSObject < JavaUtilIterator > {
 @public
  JavaUtilConcurrentConcurrentSkipListMap_Node *lastReturned_;
  JavaUtilConcurrentConcurrentSkipListMap_Node *next_;
  id nextValue_;
}

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_SubMap:(JavaUtilConcurrentConcurrentSkipListMap_SubMap *)outer$;

- (jboolean)hasNext;

- (void)advance;

- (void)remove;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter_init() {}

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter, lastReturned_, JavaUtilConcurrentConcurrentSkipListMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter, next_, JavaUtilConcurrentConcurrentSkipListMap_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter, nextValue_, id)

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapValueIterator : JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter {
}

- (id)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_SubMap:(JavaUtilConcurrentConcurrentSkipListMap_SubMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapValueIterator_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapKeyIterator : JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter {
}

- (id)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_SubMap:(JavaUtilConcurrentConcurrentSkipListMap_SubMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapKeyIterator_init() {}

@interface JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapEntryIterator : JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapIter {
}

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilConcurrentConcurrentSkipListMap_SubMap:(JavaUtilConcurrentConcurrentSkipListMap_SubMap *)outer$;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentConcurrentSkipListMap_SubMap_SubMapEntryIterator_init() {}

#endif // _JavaUtilConcurrentConcurrentSkipListMap_H_