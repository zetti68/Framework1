//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/WellBehavedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL")
#if ComGoogleCommonCollectWellBehavedMap_RESTRICT
#define ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectWellBehavedMap_RESTRICT

#if !defined (_ComGoogleCommonCollectWellBehavedMap_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectWellBehavedMap : ComGoogleCommonCollectForwardingMap

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

#pragma mark Package-Private

+ (ComGoogleCommonCollectWellBehavedMap *)wrapWithJavaUtilMap:(id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectWellBehavedMap)

FOUNDATION_EXPORT ComGoogleCommonCollectWellBehavedMap *ComGoogleCommonCollectWellBehavedMap_wrapWithJavaUtilMap_(id<JavaUtilMap> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectWellBehavedMap)

#endif

#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_

#endif

#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL")
