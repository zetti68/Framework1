//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/util/MockNameImpl.java
//

#ifndef _OrgMockitoInternalUtilMockNameImpl_H_
#define _OrgMockitoInternalUtilMockNameImpl_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/mock/MockName.h"

@class IOSClass;

@interface OrgMockitoInternalUtilMockNameImpl : NSObject < OrgMockitoMockMockName, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)mockName;

- (instancetype)initWithNSString:(NSString *)mockName
                    withIOSClass:(IOSClass *)classToMock;

- (jboolean)isDefault;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilMockNameImpl)

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockNameImpl_initWithNSString_withIOSClass_(OrgMockitoInternalUtilMockNameImpl *self, NSString *mockName, IOSClass *classToMock);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *new_OrgMockitoInternalUtilMockNameImpl_initWithNSString_withIOSClass_(NSString *mockName, IOSClass *classToMock) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockNameImpl_initWithNSString_(OrgMockitoInternalUtilMockNameImpl *self, NSString *mockName);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockNameImpl *new_OrgMockitoInternalUtilMockNameImpl_initWithNSString_(NSString *mockName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockNameImpl)

#endif // _OrgMockitoInternalUtilMockNameImpl_H_
