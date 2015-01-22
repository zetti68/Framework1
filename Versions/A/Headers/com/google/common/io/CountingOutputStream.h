//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/io/CountingOutputStream.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoCountingOutputStream_RESTRICT
#define ComGoogleCommonIoCountingOutputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCountingOutputStream_RESTRICT

#if !defined (_ComGoogleCommonIoCountingOutputStream_) && (ComGoogleCommonIoCountingOutputStream_INCLUDE_ALL || ComGoogleCommonIoCountingOutputStream_INCLUDE)
#define _ComGoogleCommonIoCountingOutputStream_

@class IOSByteArray;
@class JavaIoOutputStream;

#define JavaIoFilterOutputStream_RESTRICT 1
#define JavaIoFilterOutputStream_INCLUDE 1
#include "java/io/FilterOutputStream.h"

@interface ComGoogleCommonIoCountingOutputStream : JavaIoFilterOutputStream {
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (jlong)getCount;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCountingOutputStream_init() {}
#endif
