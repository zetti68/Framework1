//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLStreamHandler.java
//

#ifndef _JavaNetURLStreamHandler_H_
#define _JavaNetURLStreamHandler_H_

#include "J2ObjC_header.h"

@class JavaNetInetAddress;
@class JavaNetProxy;
@class JavaNetURL;
@class JavaNetURLConnection;

@interface JavaNetURLStreamHandler : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (jboolean)equalsWithJavaNetURL:(JavaNetURL *)a
                  withJavaNetURL:(JavaNetURL *)b;

- (jint)getDefaultPort;

- (JavaNetInetAddress *)getHostAddressWithJavaNetURL:(JavaNetURL *)url;

- (jint)hashCodeWithJavaNetURL:(JavaNetURL *)url;

- (jboolean)hostsEqualWithJavaNetURL:(JavaNetURL *)a
                      withJavaNetURL:(JavaNetURL *)b;

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)u;

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)u
                                      withJavaNetProxy:(JavaNetProxy *)proxy;

- (void)parseURLWithJavaNetURL:(JavaNetURL *)url
                  withNSString:(NSString *)spec
                       withInt:(jint)start
                       withInt:(jint)end;

- (jboolean)sameFileWithJavaNetURL:(JavaNetURL *)a
                    withJavaNetURL:(JavaNetURL *)b;

- (void)setURLWithJavaNetURL:(JavaNetURL *)u
                withNSString:(NSString *)protocol
                withNSString:(NSString *)host
                     withInt:(jint)port
                withNSString:(NSString *)file
                withNSString:(NSString *)ref;

- (void)setURLWithJavaNetURL:(JavaNetURL *)u
                withNSString:(NSString *)protocol
                withNSString:(NSString *)host
                     withInt:(jint)port
                withNSString:(NSString *)authority
                withNSString:(NSString *)userInfo
                withNSString:(NSString *)path
                withNSString:(NSString *)query
                withNSString:(NSString *)ref;

- (NSString *)toExternalFormWithJavaNetURL:(JavaNetURL *)url;

#pragma mark Package-Private

- (NSString *)toExternalFormWithJavaNetURL:(JavaNetURL *)url
                               withBoolean:(jboolean)escapeIllegalCharacters;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLStreamHandler)

FOUNDATION_EXPORT void JavaNetURLStreamHandler_init(JavaNetURLStreamHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLStreamHandler)

#endif // _JavaNetURLStreamHandler_H_
