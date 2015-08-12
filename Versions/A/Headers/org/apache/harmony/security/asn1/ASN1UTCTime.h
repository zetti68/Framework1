//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1UTCTime.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_
#define _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Time.h"

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_HM 11
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_HMS 13
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_LOCAL_HM 15
#define OrgApacheHarmonySecurityAsn1ASN1UTCTime_UTC_LOCAL_HMS 17

@interface OrgApacheHarmonySecurityAsn1ASN1UTCTime : OrgApacheHarmonySecurityAsn1ASN1Time

#pragma mark Public

- (instancetype)init;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

+ (OrgApacheHarmonySecurityAsn1ASN1UTCTime *)getInstance;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1UTCTime)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_HM, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_HMS, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_LOCAL_HM, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1ASN1UTCTime, UTC_LOCAL_HMS, jint)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1UTCTime_init(OrgApacheHarmonySecurityAsn1ASN1UTCTime *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1UTCTime *new_OrgApacheHarmonySecurityAsn1ASN1UTCTime_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1UTCTime *OrgApacheHarmonySecurityAsn1ASN1UTCTime_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1UTCTime)

#endif // _OrgApacheHarmonySecurityAsn1ASN1UTCTime_H_
