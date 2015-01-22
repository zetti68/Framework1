//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/util/collections/HashCodeAndEqualsSafeSet.java
//

#ifndef _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_H_
#define _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_H_

@class IOSObjectArray;
@class JavaUtilHashSet;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/util/Iterator.h"
#include "java/util/Set.h"

@interface OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet : NSObject < JavaUtilSet > {
 @public
  JavaUtilHashSet *backingHashSet_;
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)mock;

- (jboolean)addWithId:(id)mock;

- (jboolean)removeWithId:(id)mock;

- (void)clear;

- (id)clone;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)unwrapToWithNSObjectArray:(IOSObjectArray *)array;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)typedArray;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (JavaUtilHashSet *)asWrappedMocksWithJavaUtilCollection:(id<JavaUtilCollection>)mocks;

- (NSString *)description;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)ofWithNSObjectArray:(IOSObjectArray *)mocks;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)ofWithJavaLangIterable:(id<JavaLangIterable>)objects;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)other;


@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet, backingHashSet_, JavaUtilHashSet *)

@interface OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_$1 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> iterator_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithOrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet:(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_$1 *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_$1_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_$1, iterator_, id<JavaUtilIterator>)

#endif // _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsSafeSet_H_