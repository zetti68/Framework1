//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/base/Present.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBasePresent_RESTRICT
#define ComGoogleCommonBasePresent_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBasePresent_RESTRICT

#if !defined (_ComGoogleCommonBasePresent_) && (ComGoogleCommonBasePresent_INCLUDE_ALL || ComGoogleCommonBasePresent_INCLUDE)
#define _ComGoogleCommonBasePresent_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilSet;

#define ComGoogleCommonBaseOptional_RESTRICT 1
#define ComGoogleCommonBaseOptional_INCLUDE 1
#include "com/google/common/base/Optional.h"

#define ComGoogleCommonBasePresent_serialVersionUID 0LL

@interface ComGoogleCommonBasePresent : ComGoogleCommonBaseOptional {
}

- (instancetype)initWithId:(id)reference;

- (jboolean)isPresent;

- (id)get;

- (id)or__WithId:(id)defaultValue;

- (ComGoogleCommonBaseOptional *)or__WithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)secondChoice;

- (id)or__WithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

- (id)orNull;

- (id<JavaUtilSet>)asSet;

- (ComGoogleCommonBaseOptional *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBasePresent_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBasePresent, serialVersionUID, jlong)
#endif
