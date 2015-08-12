//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/dalvik/src/main/java/dalvik/system/BlockGuard.java
//

#ifndef _DalvikSystemBlockGuard_H_
#define _DalvikSystemBlockGuard_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@protocol DalvikSystemBlockGuard_Policy;

#define DalvikSystemBlockGuard_DISALLOW_DISK_WRITE 1
#define DalvikSystemBlockGuard_DISALLOW_DISK_READ 2
#define DalvikSystemBlockGuard_DISALLOW_NETWORK 4
#define DalvikSystemBlockGuard_PASS_RESTRICTIONS_VIA_RPC 8
#define DalvikSystemBlockGuard_PENALTY_LOG 16
#define DalvikSystemBlockGuard_PENALTY_DIALOG 32
#define DalvikSystemBlockGuard_PENALTY_DEATH 64

@interface DalvikSystemBlockGuard : NSObject

#pragma mark Public

+ (id<DalvikSystemBlockGuard_Policy>)getThreadPolicy;

+ (void)setThreadPolicyWithDalvikSystemBlockGuard_Policy:(id<DalvikSystemBlockGuard_Policy>)policy;

@end

J2OBJC_STATIC_INIT(DalvikSystemBlockGuard)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, DISALLOW_DISK_WRITE, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, DISALLOW_DISK_READ, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, DISALLOW_NETWORK, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, PASS_RESTRICTIONS_VIA_RPC, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, PENALTY_LOG, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, PENALTY_DIALOG, jint)

J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, PENALTY_DEATH, jint)

FOUNDATION_EXPORT id<DalvikSystemBlockGuard_Policy> DalvikSystemBlockGuard_LAX_POLICY_;
J2OBJC_STATIC_FIELD_GETTER(DalvikSystemBlockGuard, LAX_POLICY_, id<DalvikSystemBlockGuard_Policy>)

FOUNDATION_EXPORT id<DalvikSystemBlockGuard_Policy> DalvikSystemBlockGuard_getThreadPolicy();

FOUNDATION_EXPORT void DalvikSystemBlockGuard_setThreadPolicyWithDalvikSystemBlockGuard_Policy_(id<DalvikSystemBlockGuard_Policy> policy);

J2OBJC_TYPE_LITERAL_HEADER(DalvikSystemBlockGuard)

@protocol DalvikSystemBlockGuard_Policy < NSObject, JavaObject >

- (void)onWriteToDisk;

- (void)onReadFromDisk;

- (void)onNetwork;

- (jint)getPolicyMask;

@end

J2OBJC_EMPTY_STATIC_INIT(DalvikSystemBlockGuard_Policy)

J2OBJC_TYPE_LITERAL_HEADER(DalvikSystemBlockGuard_Policy)

@interface DalvikSystemBlockGuard_BlockGuardPolicyException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithInt:(jint)policyState
                    withInt:(jint)policyViolated;

- (instancetype)initWithInt:(jint)policyState
                    withInt:(jint)policyViolated
               withNSString:(NSString *)message;

- (NSString *)getMessage;

- (jint)getPolicy;

- (jint)getPolicyViolation;

@end

J2OBJC_EMPTY_STATIC_INIT(DalvikSystemBlockGuard_BlockGuardPolicyException)

FOUNDATION_EXPORT void DalvikSystemBlockGuard_BlockGuardPolicyException_initWithInt_withInt_(DalvikSystemBlockGuard_BlockGuardPolicyException *self, jint policyState, jint policyViolated);

FOUNDATION_EXPORT DalvikSystemBlockGuard_BlockGuardPolicyException *new_DalvikSystemBlockGuard_BlockGuardPolicyException_initWithInt_withInt_(jint policyState, jint policyViolated) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void DalvikSystemBlockGuard_BlockGuardPolicyException_initWithInt_withInt_withNSString_(DalvikSystemBlockGuard_BlockGuardPolicyException *self, jint policyState, jint policyViolated, NSString *message);

FOUNDATION_EXPORT DalvikSystemBlockGuard_BlockGuardPolicyException *new_DalvikSystemBlockGuard_BlockGuardPolicyException_initWithInt_withInt_withNSString_(jint policyState, jint policyViolated, NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(DalvikSystemBlockGuard_BlockGuardPolicyException)

#endif // _DalvikSystemBlockGuard_H_
