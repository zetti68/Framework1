//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/CharSequenceAdapter.java
//

#ifndef _JavaNioCharSequenceAdapter_H_
#define _JavaNioCharSequenceAdapter_H_

@class IOSCharArray;
@class JavaNioByteOrder;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "java/nio/CharBuffer.h"

@interface JavaNioCharSequenceAdapter : JavaNioCharBuffer {
 @public
  id<JavaLangCharSequence> sequence_;
}

+ (JavaNioCharSequenceAdapter *)copy__WithJavaNioCharSequenceAdapter:(JavaNioCharSequenceAdapter *)other OBJC_METHOD_FAMILY_NONE;

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)chseq;

- (JavaNioCharBuffer *)asReadOnlyBuffer;

- (JavaNioCharBuffer *)compact;

- (JavaNioCharBuffer *)duplicate;

- (jchar)get;

- (jchar)getWithInt:(jint)index;

- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)charCount;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (IOSCharArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioCharBuffer *)putWithChar:(jchar)c;

- (JavaNioCharBuffer *)putWithInt:(jint)index
                         withChar:(jchar)c;

- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)charCount;

- (JavaNioCharBuffer *)putWithNSString:(NSString *)src
                               withInt:(jint)start
                               withInt:(jint)end;

- (JavaNioCharBuffer *)slice;

- (JavaNioCharBuffer *)subSequenceFrom:(int)start to:(int)end;

@end

__attribute__((always_inline)) inline void JavaNioCharSequenceAdapter_init() {}

J2OBJC_FIELD_SETTER(JavaNioCharSequenceAdapter, sequence_, id<JavaLangCharSequence>)
FOUNDATION_EXPORT JavaNioCharSequenceAdapter *JavaNioCharSequenceAdapter_copy__WithJavaNioCharSequenceAdapter_(JavaNioCharSequenceAdapter *other);

#endif // _JavaNioCharSequenceAdapter_H_