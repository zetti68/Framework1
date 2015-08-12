//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/RegularImmutableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableMap_RESTRICT
#define ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableMap_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableMap_) && (ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMap_

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableMap : ComGoogleCommonCollectImmutableMap

#pragma mark Public

- (id)getWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilMap_EntryArray:(IOSObjectArray *)immutableEntries;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableMap_initWithJavaUtilMap_EntryArray_(ComGoogleCommonCollectRegularImmutableMap *self, IOSObjectArray *immutableEntries);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMap *new_ComGoogleCommonCollectRegularImmutableMap_initWithJavaUtilMap_EntryArray_(IOSObjectArray *immutableEntries) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableMap)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMap_LinkedEntry_) && (ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMap_LinkedEntry_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMap_LinkedEntry_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMap_NonTerminalEntry_) && (ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMap_NonTerminalEntry_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMap_NonTerminalEntry_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMap_TerminalEntry_) && (ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMap_TerminalEntry_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMap_TerminalEntry_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMap_EntrySet_) && (ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMap_EntrySet_

#endif
#pragma pop_macro("ComGoogleCommonCollectRegularImmutableMap_INCLUDE_ALL")
