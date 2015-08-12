//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructStatVfs.java
//

#ifndef _LibcoreIoStructStatVfs_H_
#define _LibcoreIoStructStatVfs_H_

#include "J2ObjC_header.h"

@interface LibcoreIoStructStatVfs : NSObject {
 @public
  jlong f_bsize_;
  jlong f_frsize_;
  jlong f_blocks_;
  jlong f_bfree_;
  jlong f_bavail_;
  jlong f_files_;
  jlong f_ffree_;
  jlong f_favail_;
  jlong f_fsid_;
  jlong f_flag_;
  jlong f_namemax_;
}

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)f_bsize
                    withLong:(jlong)f_frsize
                    withLong:(jlong)f_blocks
                    withLong:(jlong)f_bfree
                    withLong:(jlong)f_bavail
                    withLong:(jlong)f_files
                    withLong:(jlong)f_ffree
                    withLong:(jlong)f_favail
                    withLong:(jlong)f_fsid
                    withLong:(jlong)f_flag
                    withLong:(jlong)f_namemax;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructStatVfs)

FOUNDATION_EXPORT void LibcoreIoStructStatVfs_initWithLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(LibcoreIoStructStatVfs *self, jlong f_bsize, jlong f_frsize, jlong f_blocks, jlong f_bfree, jlong f_bavail, jlong f_files, jlong f_ffree, jlong f_favail, jlong f_fsid, jlong f_flag, jlong f_namemax);

FOUNDATION_EXPORT LibcoreIoStructStatVfs *new_LibcoreIoStructStatVfs_initWithLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(jlong f_bsize, jlong f_frsize, jlong f_blocks, jlong f_bfree, jlong f_bavail, jlong f_files, jlong f_ffree, jlong f_favail, jlong f_fsid, jlong f_flag, jlong f_namemax) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructStatVfs)

#endif // _LibcoreIoStructStatVfs_H_
