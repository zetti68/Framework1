//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/IOSCharset.java
//

#ifndef _JavaNioCharsetIOSCharset_H_
#define _JavaNioCharsetIOSCharset_H_

@class IOSObjectArray;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/nio/charset/Charset.h"

@interface JavaNioCharsetIOSCharset : JavaNioCharsetCharset {
}

- (jlong)nsEncoding;

- (jboolean)containsWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (JavaNioCharsetCharsetEncoder *)newEncoder OBJC_METHOD_FAMILY_NONE;

- (JavaNioCharsetCharsetDecoder *)newDecoder OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSet>)getAvailableCharsetNames;

+ (JavaNioCharsetCharset *)charsetForNameWithNSString:(NSString *)charsetName;


+ (jlong)encodingForNameWithNSString:(NSString *)name;

@end

FOUNDATION_EXPORT BOOL JavaNioCharsetIOSCharset_initialized;
J2OBJC_STATIC_INIT(JavaNioCharsetIOSCharset)
FOUNDATION_EXPORT id<JavaUtilSet> JavaNioCharsetIOSCharset_getAvailableCharsetNames();
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetIOSCharset_charsetForNameWithNSString_(NSString *charsetName);
FOUNDATION_EXPORT jlong JavaNioCharsetIOSCharset_encodingForNameWithNSString_(NSString *name);

FOUNDATION_EXPORT id<JavaUtilMap> JavaNioCharsetIOSCharset_encodings_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetIOSCharset, encodings_, id<JavaUtilMap>)
J2OBJC_STATIC_FIELD_SETTER(JavaNioCharsetIOSCharset, encodings_, id<JavaUtilMap>)

FOUNDATION_EXPORT JavaNioCharsetIOSCharset *JavaNioCharsetIOSCharset_DEFAULT_CHARSET_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetIOSCharset, DEFAULT_CHARSET_, JavaNioCharsetIOSCharset *)

#endif // _JavaNioCharsetIOSCharset_H_
