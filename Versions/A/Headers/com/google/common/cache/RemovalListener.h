//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/cache/RemovalListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheRemovalListener_INCLUDE_ALL")
#if ComGoogleCommonCacheRemovalListener_RESTRICT
#define ComGoogleCommonCacheRemovalListener_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheRemovalListener_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheRemovalListener_RESTRICT

#if !defined (_ComGoogleCommonCacheRemovalListener_) && (ComGoogleCommonCacheRemovalListener_INCLUDE_ALL || ComGoogleCommonCacheRemovalListener_INCLUDE)
#define _ComGoogleCommonCacheRemovalListener_

@class ComGoogleCommonCacheRemovalNotification;

@protocol ComGoogleCommonCacheRemovalListener < NSObject, JavaObject >

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListener)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListener)

#endif
#pragma pop_macro("ComGoogleCommonCacheRemovalListener_INCLUDE_ALL")
