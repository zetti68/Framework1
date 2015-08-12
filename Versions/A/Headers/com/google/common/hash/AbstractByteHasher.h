//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/hash/AbstractByteHasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL")
#if ComGoogleCommonHashAbstractByteHasher_RESTRICT
#define ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashAbstractByteHasher_RESTRICT

#if !defined (_ComGoogleCommonHashAbstractByteHasher_) && (ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL || ComGoogleCommonHashAbstractByteHasher_INCLUDE)
#define _ComGoogleCommonHashAbstractByteHasher_

#define ComGoogleCommonHashAbstractHasher_RESTRICT 1
#define ComGoogleCommonHashAbstractHasher_INCLUDE 1
#include "com/google/common/hash/AbstractHasher.h"

@class IOSByteArray;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashAbstractByteHasher : ComGoogleCommonHashAbstractHasher

#pragma mark Public

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

#pragma mark Protected

- (void)updateWithByte:(jbyte)b;

- (void)updateWithByteArray:(IOSByteArray *)b;

- (void)updateWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractByteHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractByteHasher_init(ComGoogleCommonHashAbstractByteHasher *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractByteHasher)

#endif
#pragma pop_macro("ComGoogleCommonHashAbstractByteHasher_INCLUDE_ALL")
