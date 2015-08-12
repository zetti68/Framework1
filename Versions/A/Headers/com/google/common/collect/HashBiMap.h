//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/HashBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectHashBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectHashBiMap_RESTRICT
#define ComGoogleCommonCollectHashBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectHashBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectHashBiMap_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectHashBiMap : JavaUtilAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectHashBiMap *)create;

+ (ComGoogleCommonCollectHashBiMap *)createWithInt:(jint)expectedSize;

+ (ComGoogleCommonCollectHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilSet>)entrySet;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)getWithId:(id)key;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilSet>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap)

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_BiEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_BiEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_BiEntry_

@interface ComGoogleCommonCollectHashBiMap_BiEntry : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_BiEntry)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_BiEntry)

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Itr_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Itr_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Itr_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@class ComGoogleCommonCollectHashBiMap;
@class ComGoogleCommonCollectHashBiMap_BiEntry;

@interface ComGoogleCommonCollectHashBiMap_Itr : NSObject < JavaUtilIterator > {
 @public
  jint nextBucket_;
  ComGoogleCommonCollectHashBiMap_BiEntry *next__;
  ComGoogleCommonCollectHashBiMap_BiEntry *toRemove_;
  jint expectedModCount_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

- (id)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_Itr)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, next__, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, toRemove_, ComGoogleCommonCollectHashBiMap_BiEntry *)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_Itr_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_Itr *self, ComGoogleCommonCollectHashBiMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_Itr)

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_KeySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_KeySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_KeySet_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_KeySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_KeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_KeySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_EntrySet_$1_MapEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_EntrySet_$1_MapEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_EntrySet_$1_MapEntry_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_InverseKeySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_InverseEntry_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_InverseEntry_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_Inverse_$1_$1_InverseEntry_

#endif

#if !defined (_ComGoogleCommonCollectHashBiMap_InverseSerializedForm_) && (ComGoogleCommonCollectHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectHashBiMap_InverseSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectHashBiMap_InverseSerializedForm_

#endif
#pragma pop_macro("ComGoogleCommonCollectHashBiMap_INCLUDE_ALL")
