//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/internal/util/DefaultMockingDetails.java
//

#ifndef _OrgMockitoInternalUtilDefaultMockingDetails_H_
#define _OrgMockitoInternalUtilDefaultMockingDetails_H_

@class OrgMockitoInternalUtilMockUtil;

#import "JreEmulation.h"
#include "org/mockito/MockingDetails.h"

@interface OrgMockitoInternalUtilDefaultMockingDetails : NSObject < OrgMockitoMockingDetails > {
 @public
  id toInspect_;
  OrgMockitoInternalUtilMockUtil *delegate_;
}

- (instancetype)initWithId:(id)toInspect
withOrgMockitoInternalUtilMockUtil:(OrgMockitoInternalUtilMockUtil *)delegate;

- (jboolean)isMock;

- (jboolean)isSpy;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilDefaultMockingDetails *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilDefaultMockingDetails_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilDefaultMockingDetails, toInspect_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilDefaultMockingDetails, delegate_, OrgMockitoInternalUtilMockUtil *)

#endif // _OrgMockitoInternalUtilDefaultMockingDetails_H_
