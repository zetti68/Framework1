//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamField.java
//

#ifndef _JavaIoObjectStreamField_H_
#define _JavaIoObjectStreamField_H_

@class IOSClass;
@class JavaIoDataOutputStream;
@class JavaLangClassLoader;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"

@interface JavaIoObjectStreamField : NSObject < JavaLangComparable > {
 @public
  jint offset_;
}

- (instancetype)initWithNSString:(NSString *)name
                    withIOSClass:(IOSClass *)cl;

- (instancetype)initWithNSString:(NSString *)name
                    withIOSClass:(IOSClass *)cl
                     withBoolean:(jboolean)unshared;

- (instancetype)initWithNSString:(NSString *)signature
                    withNSString:(NSString *)name;

- (jint)compareToWithId:(id)o;

- (NSString *)getName;

- (jint)getOffset;

- (IOSClass *)getTypeInternal;

- (IOSClass *)getType;

- (jchar)getTypeCode;

- (NSString *)getTypeString;

- (jboolean)isPrimitive;

- (jboolean)writeFieldWithJavaIoDataOutputStream:(JavaIoDataOutputStream *)outArg;

- (void)setOffsetWithInt:(jint)newValue;

- (NSString *)description;

- (void)resolveWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (jboolean)isUnshared;

- (void)setUnsharedWithBoolean:(jboolean)unshared;

@end

__attribute__((always_inline)) inline void JavaIoObjectStreamField_init() {}

#endif // _JavaIoObjectStreamField_H_
