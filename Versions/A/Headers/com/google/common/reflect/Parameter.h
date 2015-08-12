//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/reflect/Parameter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonReflectParameter_INCLUDE_ALL")
#if ComGoogleCommonReflectParameter_RESTRICT
#define ComGoogleCommonReflectParameter_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectParameter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectParameter_RESTRICT

#if !defined (_ComGoogleCommonReflectParameter_) && (ComGoogleCommonReflectParameter_INCLUDE_ALL || ComGoogleCommonReflectParameter_INCLUDE)
#define _ComGoogleCommonReflectParameter_

#define JavaLangReflectAnnotatedElement_RESTRICT 1
#define JavaLangReflectAnnotatedElement_INCLUDE 1
#include "java/lang/reflect/AnnotatedElement.h"

@class ComGoogleCommonReflectInvokable;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

@interface ComGoogleCommonReflectParameter : NSObject < JavaLangReflectAnnotatedElement >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (IOSObjectArray *)getAnnotations;

- (IOSObjectArray *)getDeclaredAnnotations;

- (ComGoogleCommonReflectInvokable *)getDeclaringInvokable;

- (ComGoogleCommonReflectTypeToken *)getType;

- (NSUInteger)hash;

- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonReflectInvokable:(ComGoogleCommonReflectInvokable *)declaration
                                                withInt:(jint)position
                    withComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                  withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectParameter)

FOUNDATION_EXPORT void ComGoogleCommonReflectParameter_initWithComGoogleCommonReflectInvokable_withInt_withComGoogleCommonReflectTypeToken_withJavaLangAnnotationAnnotationArray_(ComGoogleCommonReflectParameter *self, ComGoogleCommonReflectInvokable *declaration, jint position, ComGoogleCommonReflectTypeToken *type, IOSObjectArray *annotations);

FOUNDATION_EXPORT ComGoogleCommonReflectParameter *new_ComGoogleCommonReflectParameter_initWithComGoogleCommonReflectInvokable_withInt_withComGoogleCommonReflectTypeToken_withJavaLangAnnotationAnnotationArray_(ComGoogleCommonReflectInvokable *declaration, jint position, ComGoogleCommonReflectTypeToken *type, IOSObjectArray *annotations) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectParameter)

#endif
#pragma pop_macro("ComGoogleCommonReflectParameter_INCLUDE_ALL")
