//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AllPermissionCollection.java
//

#ifndef _JavaSecurityAllPermissionCollection_H_
#define _JavaSecurityAllPermissionCollection_H_

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

#import "JreEmulation.h"
#include "java/security/PermissionCollection.h"

@interface JavaSecurityAllPermissionCollection : JavaSecurityPermissionCollection {
}

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecurityAllPermissionCollection_init() {}

#endif // _JavaSecurityAllPermissionCollection_H_