//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/collect/AbstractIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractIterator_RESTRICT
#define ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractIterator_) && (ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractIterator_INCLUDE)
#define _ComGoogleCommonCollectAbstractIterator_

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"

@interface ComGoogleCommonCollectAbstractIterator : ComGoogleCommonCollectUnmodifiableIterator

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (id)peek;

#pragma mark Protected

- (instancetype)init;

- (id)computeNext;

- (id)endOfData;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIterator_init(ComGoogleCommonCollectAbstractIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractIterator)

#endif

#if !defined (_ComGoogleCommonCollectAbstractIterator_StateEnum_) && (ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractIterator_StateEnum_INCLUDE)
#define _ComGoogleCommonCollectAbstractIterator_StateEnum_

#endif
#pragma pop_macro("ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL")
