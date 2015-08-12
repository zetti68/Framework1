//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/hash/Murmur3_32HashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashMurmur3_32HashFunction_RESTRICT
#define ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashMurmur3_32HashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashMurmur3_32HashFunction_) && (ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL || ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE)
#define _ComGoogleCommonHashMurmur3_32HashFunction_

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonHashHashCode;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonHashMurmur3_32HashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashMurmur3_32HashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashMurmur3_32HashFunction_initWithInt_(ComGoogleCommonHashMurmur3_32HashFunction *self, jint seed);

FOUNDATION_EXPORT ComGoogleCommonHashMurmur3_32HashFunction *new_ComGoogleCommonHashMurmur3_32HashFunction_initWithInt_(jint seed) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashMurmur3_32HashFunction)

#endif

#if !defined (_ComGoogleCommonHashMurmur3_32HashFunction_Murmur3_32Hasher_) && (ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL || ComGoogleCommonHashMurmur3_32HashFunction_Murmur3_32Hasher_INCLUDE)
#define _ComGoogleCommonHashMurmur3_32HashFunction_Murmur3_32Hasher_

#endif
#pragma pop_macro("ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL")
