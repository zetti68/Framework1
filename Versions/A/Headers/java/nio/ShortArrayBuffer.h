//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ShortArrayBuffer.java
//

#ifndef _JavaNioShortArrayBuffer_H_
#define _JavaNioShortArrayBuffer_H_

#include "J2ObjC_header.h"
#include "java/nio/ShortBuffer.h"

@class IOSShortArray;
@class JavaNioByteOrder;

@interface JavaNioShortArrayBuffer : JavaNioShortBuffer

#pragma mark Public

- (JavaNioShortBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)compact;

- (JavaNioShortBuffer *)duplicate;

- (jshort)get;

- (jshort)getWithInt:(jint)index;

- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)shortCount;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (JavaNioShortBuffer *)putWithInt:(jint)index
                         withShort:(jshort)c;

- (JavaNioShortBuffer *)putWithShort:(jshort)c;

- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)shortCount;

- (JavaNioShortBuffer *)slice;

#pragma mark Package-Private

- (instancetype)initWithShortArray:(IOSShortArray *)array;

- (IOSShortArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioShortArrayBuffer)

FOUNDATION_EXPORT void JavaNioShortArrayBuffer_initWithShortArray_(JavaNioShortArrayBuffer *self, IOSShortArray *array);

FOUNDATION_EXPORT JavaNioShortArrayBuffer *new_JavaNioShortArrayBuffer_initWithShortArray_(IOSShortArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioShortArrayBuffer)

#endif // _JavaNioShortArrayBuffer_H_
