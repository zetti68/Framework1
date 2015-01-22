//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/hash/PrimitiveSink.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonHashPrimitiveSink_RESTRICT
#define ComGoogleCommonHashPrimitiveSink_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashPrimitiveSink_RESTRICT

#if !defined (_ComGoogleCommonHashPrimitiveSink_) && (ComGoogleCommonHashPrimitiveSink_INCLUDE_ALL || ComGoogleCommonHashPrimitiveSink_INCLUDE)
#define _ComGoogleCommonHashPrimitiveSink_

@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol JavaLangCharSequence;

@protocol ComGoogleCommonHashPrimitiveSink < NSObject, JavaObject >

- (id<ComGoogleCommonHashPrimitiveSink>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashPrimitiveSink>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashPrimitiveSink>)putBytesWithByteArray:(IOSByteArray *)bytes
                                                      withInt:(jint)off
                                                      withInt:(jint)len;

- (id<ComGoogleCommonHashPrimitiveSink>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashPrimitiveSink>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashPrimitiveSink>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashPrimitiveSink>)putFloatWithFloat:(jfloat)f;

- (id<ComGoogleCommonHashPrimitiveSink>)putDoubleWithDouble:(jdouble)d;

- (id<ComGoogleCommonHashPrimitiveSink>)putBooleanWithBoolean:(jboolean)b;

- (id<ComGoogleCommonHashPrimitiveSink>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashPrimitiveSink>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

- (id<ComGoogleCommonHashPrimitiveSink>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

@end

__attribute__((always_inline)) inline void ComGoogleCommonHashPrimitiveSink_init() {}
#endif