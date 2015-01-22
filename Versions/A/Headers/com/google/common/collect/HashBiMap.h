//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/HashBiMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectHashBiMap_RESTRICT
#define ComGoogleCommonCollectHashBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashBiMap_RESTRICT
#if ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_INCLUDE
#define ComGoogleCommonCollectHashBiMap_Itr_INCLUDE 1
#endif
#if ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_INCLUDE
#define ComGoogleCommonCollectHashBiMap_Itr_INCLUDE 1
#endif
#if ComGoogleCommonCollectHashBiMap_EntrySet_$1_INCLUDE
#define ComGoogleCommonCollectHashBiMap_Itr_INCLUDE 1
#endif
#if ComGoogleCommonCollectHashBiMap_KeySet_$1_INCLUDE
#define ComGoogleCommonCollectHashBiMap_Itr_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectHashBiMap_LOAD_FACTOR 1.0
#define ComGoogleCommonCollectHashBiMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectHashBiMap : JavaUtilAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable > {
}

+ (ComGoogleCommonCollectHashBiMap *)create;

+ (ComGoogleCommonCollectHashBiMap *)createWithInt:(jint)expectedSize;

+ (ComGoogleCommonCollectHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)removeWithId:(id)key;

- (void)clear;

- (jint)size;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)values;

- (id<JavaUtilSet>)entrySet;

- (id<ComGoogleCommonCollectBiMap>)inverse;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_create();
FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithInt_(jint expectedSize);
FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashBiMap, LOAD_FACTOR, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashBiMap, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_BiEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_BiEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_BiEntry_

@interface ComGoogleCommonCollectHashBiMap_BiEntry : NSObject {
 @public
  id key_;
  jint keyHash_;
  id value_;
  jint valueHash_;
  ComGoogleCommonCollectHashBiMap_BiEntry *nextInKToVBucket_;
  ComGoogleCommonCollectHashBiMap_BiEntry *nextInVToKBucket_;
}

- (instancetype)initWithId:(id)key
                   withInt:(jint)keyHash
                    withId:(id)value
                   withInt:(jint)valueHash;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_BiEntry_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, value_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, nextInKToVBucket_, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, nextInVToKBucket_, ComGoogleCommonCollectHashBiMap_BiEntry *)
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_KeySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_KeySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_KeySet_

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@interface ComGoogleCommonCollectHashBiMap_KeySet : ComGoogleCommonCollectMaps_KeySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_KeySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Itr_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Itr_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Itr_

@class ComGoogleCommonCollectHashBiMap;
@class ComGoogleCommonCollectHashBiMap_BiEntry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectHashBiMap_Itr : NSObject < JavaUtilIterator > {
 @public
  jint nextBucket_;
  ComGoogleCommonCollectHashBiMap_BiEntry *next__;
  ComGoogleCommonCollectHashBiMap_BiEntry *toRemove_;
  jint expectedModCount_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (id)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Itr_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, next__, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, toRemove_, ComGoogleCommonCollectHashBiMap_BiEntry *)
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_KeySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_KeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_KeySet_$1_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_KeySet;

@interface ComGoogleCommonCollectHashBiMap_KeySet_$1 : ComGoogleCommonCollectHashBiMap_Itr {
}

- (id)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_KeySet:(ComGoogleCommonCollectHashBiMap_KeySet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_KeySet_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@interface ComGoogleCommonCollectHashBiMap_EntrySet : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_EntrySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_$1_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_EntrySet;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectHashBiMap_EntrySet_$1 : ComGoogleCommonCollectHashBiMap_Itr {
}

- (id<JavaUtilMap_Entry>)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_EntrySet:(ComGoogleCommonCollectHashBiMap_EntrySet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_EntrySet_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_EntrySet_$1;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"

@interface ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry : ComGoogleCommonCollectAbstractMapEntry {
 @public
  ComGoogleCommonCollectHashBiMap_BiEntry *delegate_;
}

- (instancetype)initWithComGoogleCommonCollectHashBiMap_EntrySet_$1:(ComGoogleCommonCollectHashBiMap_EntrySet_$1 *)outer$
                        withComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_EntrySet_$1_iterator_MapEntry, delegate_, ComGoogleCommonCollectHashBiMap_BiEntry *)
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_

@class ComGoogleCommonCollectHashBiMap;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectHashBiMap_Inverse : JavaUtilAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable > {
}

- (id<ComGoogleCommonCollectBiMap>)forward;

- (jint)size;

- (void)clear;

- (jboolean)containsKeyWithId:(id)value;

- (id)getWithId:(id)value;

- (id)putWithId:(id)value
         withId:(id)key;

- (id)forcePutWithId:(id)value
              withId:(id)key;

- (id)removeWithId:(id)value;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)values;

- (id<JavaUtilSet>)entrySet;

- (id)writeReplace;

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_

@class ComGoogleCommonCollectHashBiMap_Inverse;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@interface ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet : ComGoogleCommonCollectMaps_KeySet {
}

- (id<JavaUtilMap>)map;

- (jboolean)removeWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_Inverse:(ComGoogleCommonCollectHashBiMap_Inverse *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet;

@interface ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1 : ComGoogleCommonCollectHashBiMap_Itr {
}

- (id)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet:(ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_

@class ComGoogleCommonCollectHashBiMap_Inverse;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@interface ComGoogleCommonCollectHashBiMap_Inverse_$1 : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_Inverse:(ComGoogleCommonCollectHashBiMap_Inverse *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_Inverse_$1;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectHashBiMap_Inverse_$1_$1 : ComGoogleCommonCollectHashBiMap_Itr {
}

- (id<JavaUtilMap_Entry>)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (instancetype)initWithComGoogleCommonCollectHashBiMap_Inverse_$1:(ComGoogleCommonCollectHashBiMap_Inverse_$1 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_init() {}
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry_

@class ComGoogleCommonCollectHashBiMap_BiEntry;
@class ComGoogleCommonCollectHashBiMap_Inverse_$1_$1;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"

@interface ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry : ComGoogleCommonCollectAbstractMapEntry {
 @public
  ComGoogleCommonCollectHashBiMap_BiEntry *delegate_;
}

- (instancetype)initWithComGoogleCommonCollectHashBiMap_Inverse_$1_$1:(ComGoogleCommonCollectHashBiMap_Inverse_$1_$1 *)outer$
                          withComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)key;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_iterator_InverseEntry, delegate_, ComGoogleCommonCollectHashBiMap_BiEntry *)
#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_InverseSerializedForm_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_InverseSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_InverseSerializedForm_

@class ComGoogleCommonCollectHashBiMap;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectHashBiMap_InverseSerializedForm : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)bimap;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashBiMap_InverseSerializedForm_init() {}
#endif
