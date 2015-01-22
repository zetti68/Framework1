//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ProxySelectorImpl.java
//

#ifndef _JavaNetProxySelectorImpl_H_
#define _JavaNetProxySelectorImpl_H_

@class JavaIoIOException;
@class JavaNetProxy;
@class JavaNetProxy_TypeEnum;
@class JavaNetSocketAddress;
@class JavaNetURI;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/net/ProxySelector.h"

@interface JavaNetProxySelectorImpl : JavaNetProxySelector {
}

- (void)connectFailedWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetSocketAddress:(JavaNetSocketAddress *)sa
              withJavaIoIOException:(JavaIoIOException *)ioe;

- (id<JavaUtilList>)selectWithJavaNetURI:(JavaNetURI *)uri;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaNetProxySelectorImpl_init() {}

#endif // _JavaNetProxySelectorImpl_H_
