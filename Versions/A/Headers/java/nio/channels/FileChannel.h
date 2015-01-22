//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/FileChannel.java
//

#ifndef _JavaNioChannelsFileChannel_H_
#define _JavaNioChannelsFileChannel_H_

@class IOSObjectArray;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel_MapMode;
@class JavaNioChannelsFileLock;
@class JavaNioMappedByteBuffer;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaNioChannelsWritableByteChannel;

#import "JreEmulation.h"
#include "java/nio/channels/ByteChannel.h"
#include "java/nio/channels/GatheringByteChannel.h"
#include "java/nio/channels/ScatteringByteChannel.h"
#include "java/nio/channels/SeekableByteChannel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

@interface JavaNioChannelsFileChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsGatheringByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsByteChannel, JavaNioChannelsSeekableByteChannel > {
}

- (instancetype)init;

- (void)forceWithBoolean:(jboolean)metadata;

- (JavaNioChannelsFileLock *)lock;

- (JavaNioChannelsFileLock *)lockWithLong:(jlong)position
                                 withLong:(jlong)size
                              withBoolean:(jboolean)shared;

- (JavaNioMappedByteBuffer *)mapWithJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mode
                                                              withLong:(jlong)position
                                                              withLong:(jlong)size;

- (jlong)position;

- (JavaNioChannelsFileChannel *)positionWithLong:(jlong)newPosition;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                         withLong:(jlong)position;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)buffers;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                withInt:(jint)start
                                withInt:(jint)number;

- (jlong)size;

- (jlong)transferFromWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src
                                                   withLong:(jlong)position
                                                   withLong:(jlong)count;

- (jlong)transferToWithLong:(jlong)position
                   withLong:(jlong)count
withJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)target;

- (JavaNioChannelsFileChannel *)truncateWithLong:(jlong)size;

- (JavaNioChannelsFileLock *)tryLock;

- (JavaNioChannelsFileLock *)tryLockWithLong:(jlong)position
                                    withLong:(jlong)size
                                 withBoolean:(jboolean)shared;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                          withLong:(jlong)position;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                 withInt:(jint)offset
                                 withInt:(jint)length;

@end

__attribute__((always_inline)) inline void JavaNioChannelsFileChannel_init() {}

@interface JavaNioChannelsFileChannel_MapMode : NSObject {
}

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaNioChannelsFileChannel_MapMode_initialized;
J2OBJC_STATIC_INIT(JavaNioChannelsFileChannel_MapMode)

FOUNDATION_EXPORT JavaNioChannelsFileChannel_MapMode *JavaNioChannelsFileChannel_MapMode_PRIVATE_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioChannelsFileChannel_MapMode, PRIVATE_, JavaNioChannelsFileChannel_MapMode *)

FOUNDATION_EXPORT JavaNioChannelsFileChannel_MapMode *JavaNioChannelsFileChannel_MapMode_READ_ONLY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioChannelsFileChannel_MapMode, READ_ONLY_, JavaNioChannelsFileChannel_MapMode *)

FOUNDATION_EXPORT JavaNioChannelsFileChannel_MapMode *JavaNioChannelsFileChannel_MapMode_READ_WRITE_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioChannelsFileChannel_MapMode, READ_WRITE_, JavaNioChannelsFileChannel_MapMode *)

#endif // _JavaNioChannelsFileChannel_H_
