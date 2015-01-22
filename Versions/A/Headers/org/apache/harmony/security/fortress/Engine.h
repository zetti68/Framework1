//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/fortress/Engine.java
//

#ifndef _OrgApacheHarmonySecurityFortressEngine_H_
#define _OrgApacheHarmonySecurityFortressEngine_H_

@class JavaSecurityNoSuchAlgorithmException;
@class JavaSecurityProvider;
@class JavaSecurityProvider_Service;
@class OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry;
@class OrgApacheHarmonySecurityFortressEngine_SpiAndProvider;
@protocol OrgApacheHarmonySecurityFortressSecurityAccess;

#import "JreEmulation.h"

@interface OrgApacheHarmonySecurityFortressEngine : NSObject {
}

- (instancetype)initWithNSString:(NSString *)service;

- (OrgApacheHarmonySecurityFortressEngine_SpiAndProvider *)getInstanceWithNSString:(NSString *)algorithm
                                                                            withId:(id)param;

- (id)getInstanceWithNSString:(NSString *)algorithm
     withJavaSecurityProvider:(JavaSecurityProvider *)provider
                       withId:(id)param;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityFortressEngine_init() {}

FOUNDATION_EXPORT id<OrgApacheHarmonySecurityFortressSecurityAccess> OrgApacheHarmonySecurityFortressEngine_door_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)
J2OBJC_STATIC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)

@interface OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry : NSObject {
}

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry_init() {}

@interface OrgApacheHarmonySecurityFortressEngine_SpiAndProvider : NSObject {
 @public
  id spi_;
  JavaSecurityProvider *provider_;
}

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityFortressEngine_SpiAndProvider_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, spi_, id)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, provider_, JavaSecurityProvider *)

#endif // _OrgApacheHarmonySecurityFortressEngine_H_