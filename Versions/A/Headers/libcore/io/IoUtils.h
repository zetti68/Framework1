//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/IoUtils.java
//

#ifndef _LibcoreIoIoUtils_H_
#define _LibcoreIoIoUtils_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNetSocket;
@protocol JavaLangAutoCloseable;

@interface LibcoreIoIoUtils : NSObject

#pragma mark Public

+ (jboolean)canOpenReadOnlyWithNSString:(NSString *)path;

+ (void)closeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (void)closeQuietlyWithJavaLangAutoCloseable:(id<JavaLangAutoCloseable>)closeable;

+ (void)closeQuietlyWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (void)closeQuietlyWithJavaNetSocket:(JavaNetSocket *)socket;

+ (void)deleteContentsWithJavaIoFile:(JavaIoFile *)dir;

+ (IOSByteArray *)readFileAsByteArrayWithNSString:(NSString *)path;

+ (NSString *)readFileAsStringWithNSString:(NSString *)path;

+ (void)setBlockingWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                withBoolean:(jboolean)blocking;

+ (void)throwInterruptedIoException;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoIoUtils)

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaLangAutoCloseable_(id<JavaLangAutoCloseable> closeable);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaNetSocket_(JavaNetSocket *socket);

FOUNDATION_EXPORT void LibcoreIoIoUtils_setBlockingWithJavaIoFileDescriptor_withBoolean_(JavaIoFileDescriptor *fd, jboolean blocking);

FOUNDATION_EXPORT IOSByteArray *LibcoreIoIoUtils_readFileAsByteArrayWithNSString_(NSString *path);

FOUNDATION_EXPORT NSString *LibcoreIoIoUtils_readFileAsStringWithNSString_(NSString *path);

FOUNDATION_EXPORT void LibcoreIoIoUtils_deleteContentsWithJavaIoFile_(JavaIoFile *dir);

FOUNDATION_EXPORT jboolean LibcoreIoIoUtils_canOpenReadOnlyWithNSString_(NSString *path);

FOUNDATION_EXPORT void LibcoreIoIoUtils_throwInterruptedIoException();

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoIoUtils)

#endif // _LibcoreIoIoUtils_H_
