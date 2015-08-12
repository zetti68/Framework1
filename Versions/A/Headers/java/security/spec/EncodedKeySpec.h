//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/EncodedKeySpec.java
//

#ifndef _JavaSecuritySpecEncodedKeySpec_H_
#define _JavaSecuritySpecEncodedKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@class IOSByteArray;

@interface JavaSecuritySpecEncodedKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecEncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecEncodedKeySpec_initWithByteArray_(JavaSecuritySpecEncodedKeySpec *self, IOSByteArray *encodedKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecEncodedKeySpec)

#endif // _JavaSecuritySpecEncodedKeySpec_H_