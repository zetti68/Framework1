//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/AsynchronousCloseMonitor.java
//

#ifndef _LibcoreIoAsynchronousCloseMonitor_H_
#define _LibcoreIoAsynchronousCloseMonitor_H_

@class JavaIoFileDescriptor;

#import "JreEmulation.h"

@interface LibcoreIoAsynchronousCloseMonitor : NSObject {
}

+ (void)signalBlockedThreadsWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (id)newAsynchronousSocketCloseMonitorWithInt:(jint)fd OBJC_METHOD_FAMILY_NONE;

@end

__attribute__((always_inline)) inline void LibcoreIoAsynchronousCloseMonitor_init() {}
FOUNDATION_EXPORT void LibcoreIoAsynchronousCloseMonitor_signalBlockedThreadsWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);
FOUNDATION_EXPORT id LibcoreIoAsynchronousCloseMonitor_newAsynchronousSocketCloseMonitorWithInt_(jint fd);

#endif // _LibcoreIoAsynchronousCloseMonitor_H_