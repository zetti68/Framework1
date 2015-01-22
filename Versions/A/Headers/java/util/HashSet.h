//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/HashSet.java
//

#ifndef _JavaUtilHashSet_H_
#define _JavaUtilHashSet_H_

@class JavaUtilHashMap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractSet.h"
#include "java/util/Set.h"

#define JavaUtilHashSet_serialVersionUID -5024744406713321676LL

@interface JavaUtilHashSet : JavaUtilAbstractSet < JavaUtilSet, NSCopying, JavaIoSerializable > {
 @public
  JavaUtilHashMap *backingMap_;
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithInt:(jint)capacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (instancetype)initWithJavaUtilHashMap:(JavaUtilHashMap *)backingMap;

- (jboolean)addWithId:(id)object;

- (void)clear;

- (id)clone;

- (jboolean)containsWithId:(id)object;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jint)size;

- (JavaUtilHashMap *)createBackingMapWithInt:(jint)capacity
                                   withFloat:(jfloat)loadFactor;


@end

FOUNDATION_EXPORT BOOL JavaUtilHashSet_initialized;
J2OBJC_STATIC_INIT(JavaUtilHashSet)

J2OBJC_FIELD_SETTER(JavaUtilHashSet, backingMap_, JavaUtilHashMap *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashSet, serialVersionUID, jlong)

FOUNDATION_EXPORT id JavaUtilHashSet_dummyKey_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilHashSet, dummyKey_, id)

#endif // _JavaUtilHashSet_H_
