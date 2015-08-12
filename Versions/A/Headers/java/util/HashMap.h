//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/HashMap.java
//

#ifndef _JavaUtilHashMap_H_
#define _JavaUtilHashMap_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map.h"

@class IOSObjectArray;
@class JavaUtilHashMap_HashMapEntry;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define JavaUtilHashMap_DEFAULT_LOAD_FACTOR 0.75f

@interface JavaUtilHashMap : JavaUtilAbstractMap < NSCopying, JavaIoSerializable > {
 @public
  IOSObjectArray *table_;
  JavaUtilHashMap_HashMapEntry *entryForNullKey_;
  jint size__;
  jint modCount_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithInt:(jint)capacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)clear;

- (id)clone;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (id)getWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (void)addNewEntryWithId:(id)key
                   withId:(id)value
                  withInt:(jint)hash_
                  withInt:(jint)index;

- (void)addNewEntryForNullKeyWithId:(id)value;

+ (jint)capacityForInitSizeWithInt:(jint)size;

- (JavaUtilHashMap_HashMapEntry *)constructorNewRetainedEntryWithId:(id)key
                                                             withId:(id)value
                                                            withInt:(jint)hash_
                                   withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)first;

- (void)constructorPutAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)init__ OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newEntryIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newKeyIterator OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilIterator>)newValueIterator OBJC_METHOD_FAMILY_NONE;

- (void)postRemoveWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;

- (void)preModifyWithJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)e;


@end

J2OBJC_STATIC_INIT(JavaUtilHashMap)

J2OBJC_FIELD_SETTER(JavaUtilHashMap, table_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilHashMap, entryForNullKey_, JavaUtilHashMap_HashMapEntry *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashMap, DEFAULT_LOAD_FACTOR, jfloat)

FOUNDATION_EXPORT void JavaUtilHashMap_init(JavaUtilHashMap *self);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashMap_initWithInt_(JavaUtilHashMap *self, jint capacity);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashMap_initWithInt_withFloat_(JavaUtilHashMap *self, jint capacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithInt_withFloat_(jint capacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashMap_initWithJavaUtilMap_(JavaUtilHashMap *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT JavaUtilHashMap *new_JavaUtilHashMap_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint JavaUtilHashMap_capacityForInitSizeWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap)

@interface JavaUtilHashMap_HashMapEntry : NSObject < JavaUtilMap_Entry > {
 @public
  id key_;
  id value_;
  jint hash__;
  JavaUtilHashMap_HashMapEntry *next_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)value;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                    withId:(id)value
                   withInt:(jint)hash_
withJavaUtilHashMap_HashMapEntry:(JavaUtilHashMap_HashMapEntry *)next;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashMap_HashMapEntry)

J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, key_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, value_, id)
J2OBJC_FIELD_SETTER(JavaUtilHashMap_HashMapEntry, next_, JavaUtilHashMap_HashMapEntry *)

FOUNDATION_EXPORT void JavaUtilHashMap_HashMapEntry_initWithId_withId_withInt_withJavaUtilHashMap_HashMapEntry_(JavaUtilHashMap_HashMapEntry *self, id key, id value, jint hash_, JavaUtilHashMap_HashMapEntry *next);

FOUNDATION_EXPORT JavaUtilHashMap_HashMapEntry *new_JavaUtilHashMap_HashMapEntry_initWithId_withId_withInt_withJavaUtilHashMap_HashMapEntry_(id key, id value, jint hash_, JavaUtilHashMap_HashMapEntry *next) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashMap_HashMapEntry)

#endif // _JavaUtilHashMap_H_
