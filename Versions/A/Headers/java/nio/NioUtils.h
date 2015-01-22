//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/NioUtils.java
//

#ifndef _JavaNioNioUtils_H_
#define _JavaNioNioUtils_H_

@class IOSByteArray;
@class JavaIoFileDescriptor;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel;
@protocol JavaNetSocketOption;
@protocol JavaNioFileDescriptorChannel;
@protocol JavaUtilSet;

#import "JreEmulation.h"

@interface JavaNioNioUtils : NSObject {
}

+ (void)freeDirectBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

+ (JavaIoFileDescriptor *)getFDWithJavaNioChannelsFileChannel:(JavaNioChannelsFileChannel *)fc;

+ (JavaNioChannelsFileChannel *)newFileChannelWithId:(id)stream
                            withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                             withInt:(jint)mode OBJC_METHOD_FAMILY_NONE;

+ (IOSByteArray *)unsafeArrayWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

+ (jint)unsafeArrayOffsetWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

+ (void)setSocketOptionWithJavaNioFileDescriptorChannel:(id<JavaNioFileDescriptorChannel>)channel
                                        withJavaUtilSet:(id<JavaUtilSet>)allowedOptions
                                withJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                 withId:(id)value;

+ (id)getSocketOptionWithJavaNioFileDescriptorChannel:(id<JavaNioFileDescriptorChannel>)channel
                                      withJavaUtilSet:(id<JavaUtilSet>)allowedOptions
                              withJavaNetSocketOption:(id<JavaNetSocketOption>)option;

@end

__attribute__((always_inline)) inline void JavaNioNioUtils_init() {}
FOUNDATION_EXPORT void JavaNioNioUtils_freeDirectBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *buffer);
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaNioNioUtils_getFDWithJavaNioChannelsFileChannel_(JavaNioChannelsFileChannel *fc);
FOUNDATION_EXPORT JavaNioChannelsFileChannel *JavaNioNioUtils_newFileChannelWithId_withJavaIoFileDescriptor_withInt_(id stream, JavaIoFileDescriptor *fd, jint mode);
FOUNDATION_EXPORT IOSByteArray *JavaNioNioUtils_unsafeArrayWithJavaNioByteBuffer_(JavaNioByteBuffer *b);
FOUNDATION_EXPORT jint JavaNioNioUtils_unsafeArrayOffsetWithJavaNioByteBuffer_(JavaNioByteBuffer *b);
FOUNDATION_EXPORT void JavaNioNioUtils_setSocketOptionWithJavaNioFileDescriptorChannel_withJavaUtilSet_withJavaNetSocketOption_withId_(id<JavaNioFileDescriptorChannel> channel, id<JavaUtilSet> allowedOptions, id<JavaNetSocketOption> option, id value);
FOUNDATION_EXPORT id JavaNioNioUtils_getSocketOptionWithJavaNioFileDescriptorChannel_withJavaUtilSet_withJavaNetSocketOption_(id<JavaNioFileDescriptorChannel> channel, id<JavaUtilSet> allowedOptions, id<JavaNetSocketOption> option);

#endif // _JavaNioNioUtils_H_
