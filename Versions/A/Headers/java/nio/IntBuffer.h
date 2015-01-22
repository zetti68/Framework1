//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/IntBuffer.java
//

#ifndef _JavaNioIntBuffer_H_
#define _JavaNioIntBuffer_H_

@class IOSIntArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@interface JavaNioIntBuffer : JavaNioBuffer < JavaLangComparable > {
}

+ (JavaNioIntBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaNioIntBuffer *)wrapWithIntArray:(IOSIntArray *)array;

+ (JavaNioIntBuffer *)wrapWithIntArray:(IOSIntArray *)array
                               withInt:(jint)start
                               withInt:(jint)intCount;

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (IOSIntArray *)array;

- (jint)arrayOffset;

- (JavaNioIntBuffer *)asReadOnlyBuffer;

- (JavaNioIntBuffer *)compact;

- (jint)compareToWithId:(JavaNioIntBuffer *)otherBuffer;

- (JavaNioIntBuffer *)duplicate;

- (jboolean)isEqual:(id)other;

- (jint)get;

- (JavaNioIntBuffer *)getWithIntArray:(IOSIntArray *)dst;

- (JavaNioIntBuffer *)getWithIntArray:(IOSIntArray *)dst
                              withInt:(jint)dstOffset
                              withInt:(jint)intCount;

- (jint)getWithInt:(jint)index;

- (jboolean)hasArray;

- (NSUInteger)hash;

- (jboolean)isDirect;

- (JavaNioByteOrder *)order;

- (IOSIntArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioIntBuffer *)putWithInt:(jint)i;

- (JavaNioIntBuffer *)putWithIntArray:(IOSIntArray *)src;

- (JavaNioIntBuffer *)putWithIntArray:(IOSIntArray *)src
                              withInt:(jint)srcOffset
                              withInt:(jint)intCount;

- (JavaNioIntBuffer *)putWithJavaNioIntBuffer:(JavaNioIntBuffer *)src;

- (JavaNioIntBuffer *)putWithInt:(jint)index
                         withInt:(jint)i;

- (JavaNioIntBuffer *)slice;

@end

__attribute__((always_inline)) inline void JavaNioIntBuffer_init() {}
FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_allocateWithInt_(jint capacity);
FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_wrapWithIntArray_(IOSIntArray *array);
FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_wrapWithIntArray_withInt_withInt_(IOSIntArray *array, jint start, jint intCount);

#endif // _JavaNioIntBuffer_H_