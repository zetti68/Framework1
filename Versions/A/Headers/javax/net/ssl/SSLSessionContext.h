//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionContext.java
//

#ifndef _JavaxNetSslSSLSessionContext_H_
#define _JavaxNetSslSSLSessionContext_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@protocol JavaUtilEnumeration;
@protocol JavaxNetSslSSLSession;

@protocol JavaxNetSslSSLSessionContext < NSObject, JavaObject >

- (id<JavaUtilEnumeration>)getIds;

- (id<JavaxNetSslSSLSession>)getSessionWithByteArray:(IOSByteArray *)sessionId;

- (jint)getSessionCacheSize;

- (jint)getSessionTimeout;

- (void)setSessionCacheSizeWithInt:(jint)size;

- (void)setSessionTimeoutWithInt:(jint)seconds;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionContext)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionContext)

#endif // _JavaxNetSslSSLSessionContext_H_
