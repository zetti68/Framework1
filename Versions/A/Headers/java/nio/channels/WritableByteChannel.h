//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/WritableByteChannel.java
//

#ifndef _JavaNioChannelsWritableByteChannel_H_
#define _JavaNioChannelsWritableByteChannel_H_

@class JavaNioByteBuffer;

#import "JreEmulation.h"
#include "java/nio/channels/Channel.h"

@protocol JavaNioChannelsWritableByteChannel < JavaNioChannelsChannel, NSObject, JavaObject >
- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

@end

__attribute__((always_inline)) inline void JavaNioChannelsWritableByteChannel_init() {}

#endif // _JavaNioChannelsWritableByteChannel_H_
