//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/plugins/MockMaker.java
//

#ifndef _OrgMockitoPluginsMockMaker_H_
#define _OrgMockitoPluginsMockMaker_H_

@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;

#import "JreEmulation.h"

@protocol OrgMockitoPluginsMockMaker < NSObject, JavaObject >

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings
                   withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id<OrgMockitoInvocationMockHandler>)getHandlerWithId:(id)mock;

- (void)resetMockWithId:(id)mock
withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)newHandler
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

@end

__attribute__((always_inline)) inline void OrgMockitoPluginsMockMaker_init() {}

#endif // _OrgMockitoPluginsMockMaker_H_
