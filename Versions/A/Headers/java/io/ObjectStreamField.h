//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamField.java
//

#ifndef _JavaIoObjectStreamField_H_
#define _JavaIoObjectStreamField_H_

#include "J2ObjC_header.h"
#include "java/lang/Comparable.h"

@class IOSClass;
@class JavaIoDataOutputStream;
@class JavaLangClassLoader;

@interface JavaIoObjectStreamField : NSObject < JavaLangComparable > {
 @public
  jint offset_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withIOSClass:(IOSClass *)cl;

- (instancetype)initWithNSString:(NSString *)name
                    withIOSClass:(IOSClass *)cl
                     withBoolean:(jboolean)unshared;

- (jint)compareToWithId:(id)o;

- (NSString *)getName;

- (jint)getOffset;

- (IOSClass *)getType;

- (jchar)getTypeCode;

- (NSString *)getTypeString;

- (jboolean)isPrimitive;

- (jboolean)isUnshared;

- (NSString *)description;

#pragma mark Protected

- (void)setOffsetWithInt:(jint)newValue;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)signature
                    withNSString:(NSString *)name;

- (IOSClass *)getTypeInternal;

- (void)resolveWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (void)setUnsharedWithBoolean:(jboolean)unshared;

- (jboolean)writeFieldWithJavaIoDataOutputStream:(JavaIoDataOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectStreamField)

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withIOSClass_(JavaIoObjectStreamField *self, NSString *name, IOSClass *cl);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withIOSClass_(NSString *name, IOSClass *cl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withIOSClass_withBoolean_(JavaIoObjectStreamField *self, NSString *name, IOSClass *cl, jboolean unshared);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withIOSClass_withBoolean_(NSString *name, IOSClass *cl, jboolean unshared) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withNSString_(JavaIoObjectStreamField *self, NSString *signature, NSString *name);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withNSString_(NSString *signature, NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamField)

#endif // _JavaIoObjectStreamField_H_
