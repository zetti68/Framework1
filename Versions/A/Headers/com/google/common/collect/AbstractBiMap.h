//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AbstractBiMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractBiMap_RESTRICT
#define ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractBiMap_RESTRICT
#if ComGoogleCommonCollectAbstractBiMap_Inverse_INCLUDE
#define ComGoogleCommonCollectAbstractBiMap_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_KeySet_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_KeySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_KeySet_

@class ComGoogleCommonCollectAbstractBiMap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"

@interface ComGoogleCommonCollectAbstractBiMap_KeySet : ComGoogleCommonCollectForwardingSet {
}

- (id<JavaUtilSet>)delegate;

- (void)clear;

- (jboolean)removeWithId:(id)key;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)keysToRemove;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)keysToRetain;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectAbstractBiMap:(ComGoogleCommonCollectAbstractBiMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_KeySet_init() {}
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_ValueSet_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_ValueSet_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_ValueSet_

@class ComGoogleCommonCollectAbstractBiMap;
@class IOSObjectArray;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"

@interface ComGoogleCommonCollectAbstractBiMap_ValueSet : ComGoogleCommonCollectForwardingSet {
 @public
  id<JavaUtilSet> valuesDelegate_;
}

- (id<JavaUtilSet>)delegate;

- (id<JavaUtilIterator>)iterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)description;

- (instancetype)initWithComGoogleCommonCollectAbstractBiMap:(ComGoogleCommonCollectAbstractBiMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_ValueSet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractBiMap_ValueSet, valuesDelegate_, id<JavaUtilSet>)
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_EntrySet_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_EntrySet_

@class ComGoogleCommonCollectAbstractBiMap;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"

@interface ComGoogleCommonCollectAbstractBiMap_EntrySet : ComGoogleCommonCollectForwardingSet {
 @public
  id<JavaUtilSet> esDelegate_;
}

- (id<JavaUtilSet>)delegate;

- (void)clear;

- (jboolean)removeWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectAbstractBiMap:(ComGoogleCommonCollectAbstractBiMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_EntrySet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractBiMap_EntrySet, esDelegate_, id<JavaUtilSet>)
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_

@class ComGoogleCommonCollectAbstractBiMap_EntrySet;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectAbstractBiMap_EntrySet_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilMap_Entry> entry__;
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectAbstractBiMap_EntrySet:(ComGoogleCommonCollectAbstractBiMap_EntrySet *)outer$
                                                withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractBiMap_EntrySet_$1, entry__, id<JavaUtilMap_Entry>)
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_next_BiMapEntry_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_next_BiMapEntry_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_next_BiMapEntry_

@class ComGoogleCommonCollectAbstractBiMap_EntrySet_$1;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectForwardingMapEntry_RESTRICT 1
#define ComGoogleCommonCollectForwardingMapEntry_INCLUDE 1
#include "com/google/common/collect/ForwardingMapEntry.h"

@interface ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_next_BiMapEntry : ComGoogleCommonCollectForwardingMapEntry {
}

- (id<JavaUtilMap_Entry>)delegate;

- (id)setValueWithId:(id)value;

- (instancetype)initWithComGoogleCommonCollectAbstractBiMap_EntrySet_$1:(ComGoogleCommonCollectAbstractBiMap_EntrySet_$1 *)outer$
                                                  withJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_EntrySet_$1_next_BiMapEntry_init() {}
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_

@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectAbstractBiMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectAbstractBiMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonCollectBiMap, JavaIoSerializable > {
 @public
  ComGoogleCommonCollectAbstractBiMap *inverse__;
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)forward
                    withJavaUtilMap:(id<JavaUtilMap>)backward;

- (id<JavaUtilMap>)delegate;

- (id)checkKeyWithId:(id)key;

- (id)checkValueWithId:(id)value;

- (void)setDelegatesWithJavaUtilMap:(id<JavaUtilMap>)forward
                    withJavaUtilMap:(id<JavaUtilMap>)backward;

- (void)setInverseWithComGoogleCommonCollectAbstractBiMap:(ComGoogleCommonCollectAbstractBiMap *)inverse;

- (jboolean)containsValueWithId:(id)value;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)removeWithId:(id)key;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)clear;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)values;

- (id<JavaUtilSet>)entrySet;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractBiMap, inverse__, ComGoogleCommonCollectAbstractBiMap *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractBiMap, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectAbstractBiMap_Inverse_) && (ComGoogleCommonCollectAbstractBiMap_INCLUDE_ALL || ComGoogleCommonCollectAbstractBiMap_Inverse_INCLUDE)
#define _ComGoogleCommonCollectAbstractBiMap_Inverse_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectAbstractBiMap_Inverse_serialVersionUID 0LL

@interface ComGoogleCommonCollectAbstractBiMap_Inverse : ComGoogleCommonCollectAbstractBiMap {
}

- (id)checkKeyWithId:(id)key;

- (id)checkValueWithId:(id)value;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractBiMap_Inverse_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractBiMap_Inverse, serialVersionUID, jlong)
#endif
