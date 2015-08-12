//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/ForwardingMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingMap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingMap_RESTRICT
#define ComGoogleCommonCollectForwardingMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingMap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingMap_) && (ComGoogleCommonCollectForwardingMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingMap_INCLUDE)
#define _ComGoogleCommonCollectForwardingMap_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "java/util/Map.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectForwardingMap : ComGoogleCommonCollectForwardingObject < JavaUtilMap >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)object;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilMap>)delegate;

- (void)standardClear;

- (jboolean)standardContainsKeyWithId:(id)key;

- (jboolean)standardContainsValueWithId:(id)value;

- (jboolean)standardEqualsWithId:(id)object;

- (jint)standardHashCode;

- (jboolean)standardIsEmpty;

- (void)standardPutAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)standardRemoveWithId:(id)key;

- (NSString *)standardToString;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMap_init(ComGoogleCommonCollectForwardingMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMap)

#endif

#if !defined (_ComGoogleCommonCollectForwardingMap_StandardKeySet_) && (ComGoogleCommonCollectForwardingMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingMap_StandardKeySet_INCLUDE)
#define _ComGoogleCommonCollectForwardingMap_StandardKeySet_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectForwardingMap_StandardKeySet : ComGoogleCommonCollectMaps_KeySet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingMap:(ComGoogleCommonCollectForwardingMap *)outer$;

#pragma mark Package-Private

- (id<JavaUtilMap>)map;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMap_StandardKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMap_StandardKeySet_initWithComGoogleCommonCollectForwardingMap_(ComGoogleCommonCollectForwardingMap_StandardKeySet *self, ComGoogleCommonCollectForwardingMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingMap_StandardKeySet *new_ComGoogleCommonCollectForwardingMap_StandardKeySet_initWithComGoogleCommonCollectForwardingMap_(ComGoogleCommonCollectForwardingMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMap_StandardKeySet)

#endif

#if !defined (_ComGoogleCommonCollectForwardingMap_StandardValues_) && (ComGoogleCommonCollectForwardingMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingMap_StandardValues_INCLUDE)
#define _ComGoogleCommonCollectForwardingMap_StandardValues_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_Values_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectForwardingMap_StandardValues : ComGoogleCommonCollectMaps_Values

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingMap:(ComGoogleCommonCollectForwardingMap *)outer$;

#pragma mark Package-Private

- (id<JavaUtilMap>)map;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMap_StandardValues)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMap_StandardValues_initWithComGoogleCommonCollectForwardingMap_(ComGoogleCommonCollectForwardingMap_StandardValues *self, ComGoogleCommonCollectForwardingMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingMap_StandardValues *new_ComGoogleCommonCollectForwardingMap_StandardValues_initWithComGoogleCommonCollectForwardingMap_(ComGoogleCommonCollectForwardingMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMap_StandardValues)

#endif

#if !defined (_ComGoogleCommonCollectForwardingMap_StandardEntrySet_) && (ComGoogleCommonCollectForwardingMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingMap_StandardEntrySet_INCLUDE)
#define _ComGoogleCommonCollectForwardingMap_StandardEntrySet_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectForwardingMap_StandardEntrySet : ComGoogleCommonCollectMaps_EntrySet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingMap:(ComGoogleCommonCollectForwardingMap *)outer$;

#pragma mark Package-Private

- (id<JavaUtilMap>)map;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMap_StandardEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingMap_StandardEntrySet_initWithComGoogleCommonCollectForwardingMap_(ComGoogleCommonCollectForwardingMap_StandardEntrySet *self, ComGoogleCommonCollectForwardingMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMap_StandardEntrySet)

#endif
#pragma pop_macro("ComGoogleCommonCollectForwardingMap_INCLUDE_ALL")
