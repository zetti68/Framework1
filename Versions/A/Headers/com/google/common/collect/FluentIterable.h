//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/FluentIterable.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectFluentIterable_RESTRICT
#define ComGoogleCommonCollectFluentIterable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectFluentIterable_RESTRICT
#if ComGoogleCommonCollectFluentIterable_$1_INCLUDE
#define ComGoogleCommonCollectFluentIterable_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectFluentIterable_FromIterableFunction_) && (ComGoogleCommonCollectFluentIterable_INCLUDE_ALL || ComGoogleCommonCollectFluentIterable_FromIterableFunction_INCLUDE)
#define _ComGoogleCommonCollectFluentIterable_FromIterableFunction_

@class ComGoogleCommonCollectFluentIterable;
@protocol JavaLangIterable;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

@interface ComGoogleCommonCollectFluentIterable_FromIterableFunction : NSObject < ComGoogleCommonBaseFunction > {
}

- (ComGoogleCommonCollectFluentIterable *)applyWithId:(id<JavaLangIterable>)fromObject;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectFluentIterable_FromIterableFunction_init() {}
#endif

#if !defined (_ComGoogleCommonCollectFluentIterable_) && (ComGoogleCommonCollectFluentIterable_INCLUDE_ALL || ComGoogleCommonCollectFluentIterable_INCLUDE)
#define _ComGoogleCommonCollectFluentIterable_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableListMultimap;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

#define JavaLangIterable_RESTRICT 1
#define JavaLangIterable_INCLUDE 1
#include "java/lang/Iterable.h"

@interface ComGoogleCommonCollectFluentIterable : NSObject < JavaLangIterable > {
}

- (instancetype)init;

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (ComGoogleCommonCollectFluentIterable *)fromWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (ComGoogleCommonCollectFluentIterable *)fromWithComGoogleCommonCollectFluentIterable:(ComGoogleCommonCollectFluentIterable *)iterable;

- (NSString *)description;

- (jint)size;

- (jboolean)containsWithId:(id)element;

- (ComGoogleCommonCollectFluentIterable *)cycle;

- (ComGoogleCommonCollectFluentIterable *)filterWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonCollectFluentIterable *)filterWithIOSClass:(IOSClass *)type;

- (jboolean)anyMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jboolean)allMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonBaseOptional *)firstMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonCollectFluentIterable *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectFluentIterable *)transformAndConcatWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonBaseOptional *)first;

- (ComGoogleCommonBaseOptional *)last;

- (ComGoogleCommonCollectFluentIterable *)skipWithInt:(jint)numberToSkip;

- (ComGoogleCommonCollectFluentIterable *)limitWithInt:(jint)size;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableList *)toList;

- (ComGoogleCommonCollectImmutableList *)toSortedListWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSet *)toSet;

- (ComGoogleCommonCollectImmutableSortedSet *)toSortedSetWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableMap *)toMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)valueFunction;

- (ComGoogleCommonCollectImmutableListMultimap *)indexWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

- (ComGoogleCommonCollectImmutableMap *)uniqueIndexWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

- (ComGoogleCommonCollectImmutableList *)toImmutableList;

- (ComGoogleCommonCollectImmutableList *)toSortedImmutableListWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSet *)toImmutableSet;

- (ComGoogleCommonCollectImmutableSortedSet *)toImmutableSortedSetWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)type;

- (id)copyIntoWithJavaUtilCollection:(id<JavaUtilCollection>)collection OBJC_METHOD_FAMILY_NONE;

- (id)getWithInt:(jint)position;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectFluentIterable_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectFluentIterable *ComGoogleCommonCollectFluentIterable_fromWithJavaLangIterable_(id<JavaLangIterable> iterable);
FOUNDATION_EXPORT ComGoogleCommonCollectFluentIterable *ComGoogleCommonCollectFluentIterable_fromWithComGoogleCommonCollectFluentIterable_(ComGoogleCommonCollectFluentIterable *iterable);
#endif

#if !defined (_ComGoogleCommonCollectFluentIterable_$1_) && (ComGoogleCommonCollectFluentIterable_INCLUDE_ALL || ComGoogleCommonCollectFluentIterable_$1_INCLUDE)
#define _ComGoogleCommonCollectFluentIterable_$1_

@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectFluentIterable_$1 : ComGoogleCommonCollectFluentIterable {
}

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)arg$0
                    withJavaLangIterable:(id<JavaLangIterable>)capture$0;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectFluentIterable_$1_init() {}
#endif
