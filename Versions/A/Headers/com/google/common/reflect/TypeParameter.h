//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/reflect/TypeParameter.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonReflectTypeParameter_RESTRICT
#define ComGoogleCommonReflectTypeParameter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectTypeParameter_RESTRICT

#if !defined (_ComGoogleCommonReflectTypeParameter_) && (ComGoogleCommonReflectTypeParameter_INCLUDE_ALL || ComGoogleCommonReflectTypeParameter_INCLUDE)
#define _ComGoogleCommonReflectTypeParameter_

@protocol JavaLangReflectTypeVariable;

#define ComGoogleCommonReflectTypeCapture_RESTRICT 1
#define ComGoogleCommonReflectTypeCapture_INCLUDE 1
#include "com/google/common/reflect/TypeCapture.h"

@interface ComGoogleCommonReflectTypeParameter : ComGoogleCommonReflectTypeCapture {
 @public
  id<JavaLangReflectTypeVariable> typeVariable_;
}

- (instancetype)init;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)o;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonReflectTypeParameter_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonReflectTypeParameter, typeVariable_, id<JavaLangReflectTypeVariable>)
#endif
