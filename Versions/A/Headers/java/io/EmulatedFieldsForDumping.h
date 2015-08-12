//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EmulatedFieldsForDumping.java
//

#ifndef _JavaIoEmulatedFieldsForDumping_H_
#define _JavaIoEmulatedFieldsForDumping_H_

#include "J2ObjC_header.h"
#include "java/io/ObjectOutputStream.h"

@class JavaIoEmulatedFields;
@class JavaIoObjectStreamClass;
@protocol JavaIoObjectOutput;

@interface JavaIoEmulatedFieldsForDumping : JavaIoObjectOutputStream_PutField

#pragma mark Public

- (void)putWithNSString:(NSString *)name
            withBoolean:(jboolean)value;

- (void)putWithNSString:(NSString *)name
               withByte:(jbyte)value;

- (void)putWithNSString:(NSString *)name
               withChar:(jchar)value;

- (void)putWithNSString:(NSString *)name
             withDouble:(jdouble)value;

- (void)putWithNSString:(NSString *)name
              withFloat:(jfloat)value;

- (void)putWithNSString:(NSString *)name
                withInt:(jint)value;

- (void)putWithNSString:(NSString *)name
               withLong:(jlong)value;

- (void)putWithNSString:(NSString *)name
                 withId:(id)value;

- (void)putWithNSString:(NSString *)name
              withShort:(jshort)value;

- (void)writeWithJavaIoObjectOutput:(id<JavaIoObjectOutput>)output;

#pragma mark Package-Private

- (instancetype)initWithJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)oos
                     withJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)streamClass;

- (JavaIoEmulatedFields *)emulatedFields;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFieldsForDumping)

FOUNDATION_EXPORT void JavaIoEmulatedFieldsForDumping_initWithJavaIoObjectOutputStream_withJavaIoObjectStreamClass_(JavaIoEmulatedFieldsForDumping *self, JavaIoObjectOutputStream *oos, JavaIoObjectStreamClass *streamClass);

FOUNDATION_EXPORT JavaIoEmulatedFieldsForDumping *new_JavaIoEmulatedFieldsForDumping_initWithJavaIoObjectOutputStream_withJavaIoObjectStreamClass_(JavaIoObjectOutputStream *oos, JavaIoObjectStreamClass *streamClass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFieldsForDumping)

#endif // _JavaIoEmulatedFieldsForDumping_H_
