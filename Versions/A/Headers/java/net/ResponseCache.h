//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ResponseCache.java
//

#ifndef _JavaNetResponseCache_H_
#define _JavaNetResponseCache_H_

@class JavaNetCacheRequest;
@class JavaNetCacheResponse;
@class JavaNetURI;
@class JavaNetURLConnection;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@interface JavaNetResponseCache : NSObject {
}

+ (JavaNetResponseCache *)getDefault;

+ (void)setDefaultWithJavaNetResponseCache:(JavaNetResponseCache *)responseCache;

- (JavaNetCacheResponse *)getWithJavaNetURI:(JavaNetURI *)uri
                               withNSString:(NSString *)requestMethod
                            withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

- (JavaNetCacheRequest *)putWithJavaNetURI:(JavaNetURI *)uri
                  withJavaNetURLConnection:(JavaNetURLConnection *)connection;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaNetResponseCache_init() {}
FOUNDATION_EXPORT JavaNetResponseCache *JavaNetResponseCache_getDefault();
FOUNDATION_EXPORT void JavaNetResponseCache_setDefaultWithJavaNetResponseCache_(JavaNetResponseCache *responseCache);

FOUNDATION_EXPORT JavaNetResponseCache *JavaNetResponseCache_defaultResponseCache_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetResponseCache, defaultResponseCache_, JavaNetResponseCache *)
J2OBJC_STATIC_FIELD_SETTER(JavaNetResponseCache, defaultResponseCache_, JavaNetResponseCache *)

#endif // _JavaNetResponseCache_H_