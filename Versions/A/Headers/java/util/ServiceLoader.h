//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ServiceLoader.java
//

#ifndef _JavaUtilServiceLoader_H_
#define _JavaUtilServiceLoader_H_

#include "J2ObjC_header.h"
#include "java/lang/Iterable.h"

@class IOSClass;
@class JavaLangClassLoader;
@protocol JavaUtilIterator;

@interface JavaUtilServiceLoader : NSObject < JavaLangIterable >

#pragma mark Public

- (id<JavaUtilIterator>)iterator;

+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service;

+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service
                      withJavaLangClassLoader:(JavaLangClassLoader *)classLoader;

+ (id)loadFromSystemPropertyWithIOSClass:(IOSClass *)service;

+ (JavaUtilServiceLoader *)loadInstalledWithIOSClass:(IOSClass *)service;

- (void)reload;

- (NSString *)description;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilServiceLoader)

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_withJavaLangClassLoader_(IOSClass *service, JavaLangClassLoader *classLoader);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_loadInstalledWithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT id JavaUtilServiceLoader_loadFromSystemPropertyWithIOSClass_(IOSClass *service);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilServiceLoader)

#endif // _JavaUtilServiceLoader_H_
