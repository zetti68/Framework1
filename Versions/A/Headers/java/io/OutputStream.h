//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/OutputStream.java
//

#ifndef _JavaIoOutputStream_H_
#define _JavaIoOutputStream_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/Closeable.h"
#include "java/io/Flushable.h"

@interface JavaIoOutputStream : NSObject < JavaIoCloseable, JavaIoFlushable > {
}

- (instancetype)init;

- (void)close;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)buffer;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)oneByte;

- (jboolean)checkError;

@end

__attribute__((always_inline)) inline void JavaIoOutputStream_init() {}

#endif // _JavaIoOutputStream_H_
