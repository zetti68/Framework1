//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InvalidClassException.java
//

#ifndef _JavaIoInvalidClassException_H_
#define _JavaIoInvalidClassException_H_

#import "JreEmulation.h"
#include "java/io/ObjectStreamException.h"

#define JavaIoInvalidClassException_serialVersionUID -4333316296251054416LL

@interface JavaIoInvalidClassException : JavaIoObjectStreamException {
 @public
  NSString *classname_;
}

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)className_
                    withNSString:(NSString *)detailMessage;

- (NSString *)getMessage;

@end

__attribute__((always_inline)) inline void JavaIoInvalidClassException_init() {}

J2OBJC_FIELD_SETTER(JavaIoInvalidClassException, classname_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoInvalidClassException, serialVersionUID, jlong)

#endif // _JavaIoInvalidClassException_H_
