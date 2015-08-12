//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/ArgumentCaptor.java
//

#ifndef _OrgMockitoArgumentCaptor_H_
#define _OrgMockitoArgumentCaptor_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaUtilList;

@interface OrgMockitoArgumentCaptor : NSObject {
 @public
  OrgMockitoInternalProgressHandyReturnValues *handyReturnValues_;
}

#pragma mark Public

- (instancetype)init;

- (id)capture;

+ (OrgMockitoArgumentCaptor *)forClassWithIOSClass:(IOSClass *)clazz;

- (id<JavaUtilList>)getAllValues;

- (id)getValue;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentCaptor)

J2OBJC_FIELD_SETTER(OrgMockitoArgumentCaptor, handyReturnValues_, OrgMockitoInternalProgressHandyReturnValues *)

FOUNDATION_EXPORT void OrgMockitoArgumentCaptor_init(OrgMockitoArgumentCaptor *self);

FOUNDATION_EXPORT OrgMockitoArgumentCaptor *new_OrgMockitoArgumentCaptor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoArgumentCaptor_initWithIOSClass_(OrgMockitoArgumentCaptor *self, IOSClass *clazz);

FOUNDATION_EXPORT OrgMockitoArgumentCaptor *new_OrgMockitoArgumentCaptor_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoArgumentCaptor *OrgMockitoArgumentCaptor_forClassWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentCaptor)

#endif // _OrgMockitoArgumentCaptor_H_
