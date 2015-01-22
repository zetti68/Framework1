//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AbstractMapBasedMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultiset_) && (ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultiset_

@class ComGoogleCommonCollectCount;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCollectAbstractMapBasedMultiset_serialVersionUID -2250766705698539974LL

@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable > {
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (void)setBackingMapWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilIterator>)entryIterator;

- (void)clear;

- (jint)distinctElements;

- (jint)size;

- (id<JavaUtilIterator>)iterator;

- (jint)countWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractMapBasedMultiset_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractMapBasedMultiset, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator_) && (ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator_

@class ComGoogleCommonCollectAbstractMapBasedMultiset;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> entryIterator_;
  id<JavaUtilMap_Entry> currentEntry_;
  jint occurrencesLeft_;
  jboolean canRemove_;
}

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultiset:(ComGoogleCommonCollectAbstractMapBasedMultiset *)outer$;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator, entryIterator_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultiset_MapBasedMultisetIterator, currentEntry_, id<JavaUtilMap_Entry>)
#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultiset_$1_) && (ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultiset_$1_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultiset_$1_

@class ComGoogleCommonCollectAbstractMapBasedMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilMap_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectAbstractMapBasedMultiset_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilMap_Entry> toRemove_;
}

- (jboolean)hasNext;

- (id<ComGoogleCommonCollectMultiset_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultiset:(ComGoogleCommonCollectAbstractMapBasedMultiset *)outer$
                                                  withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractMapBasedMultiset_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultiset_$1, toRemove_, id<JavaUtilMap_Entry>)
#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultiset_$1_$1_) && (ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultiset_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultiset_$1_$1_

@class ComGoogleCommonCollectAbstractMapBasedMultiset_$1;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_AbstractEntry_INCLUDE 1
#include "com/google/common/collect/Multisets.h"

@interface ComGoogleCommonCollectAbstractMapBasedMultiset_$1_$1 : ComGoogleCommonCollectMultisets_AbstractEntry {
}

- (id)getElement;

- (jint)getCount;

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultiset_$1:(ComGoogleCommonCollectAbstractMapBasedMultiset_$1 *)outer$
                                                    withJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractMapBasedMultiset_$1_$1_init() {}
#endif
