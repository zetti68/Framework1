//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/io/LineBuffer.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoLineBuffer_RESTRICT
#define ComGoogleCommonIoLineBuffer_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLineBuffer_RESTRICT

#if !defined (_ComGoogleCommonIoLineBuffer_) && (ComGoogleCommonIoLineBuffer_INCLUDE_ALL || ComGoogleCommonIoLineBuffer_INCLUDE)
#define _ComGoogleCommonIoLineBuffer_

@class IOSCharArray;
@class JavaLangStringBuilder;

@interface ComGoogleCommonIoLineBuffer : NSObject {
}

- (void)addWithCharArray:(IOSCharArray *)cbuf
                 withInt:(jint)off
                 withInt:(jint)len;

- (void)finish;

- (void)handleLineWithNSString:(NSString *)line
                  withNSString:(NSString *)end;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoLineBuffer_init() {}
#endif
