//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerFactory.java
//

#ifndef _JavaxXmlTransformTransformerFactory_H_
#define _JavaxXmlTransformTransformerFactory_H_

#include "J2ObjC_header.h"

@class JavaLangClassLoader;
@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol JavaxXmlTransformURIResolver;

@interface JavaxXmlTransformTransformerFactory : NSObject

#pragma mark Public

- (id<JavaxXmlTransformSource>)getAssociatedStylesheetWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                                     withNSString:(NSString *)media
                                                                     withNSString:(NSString *)title
                                                                     withNSString:(NSString *)charset;

- (id)getAttributeWithNSString:(NSString *)name;

- (id<JavaxXmlTransformErrorListener>)getErrorListener;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (id<JavaxXmlTransformURIResolver>)getURIResolver;

+ (JavaxXmlTransformTransformerFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

+ (JavaxXmlTransformTransformerFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                         withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

- (id<JavaxXmlTransformTemplates>)newTemplatesWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

- (JavaxXmlTransformTransformer *)newTransformer OBJC_METHOD_FAMILY_NONE;

- (JavaxXmlTransformTransformer *)newTransformerWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerFactory)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactory_init(JavaxXmlTransformTransformerFactory *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactory *JavaxXmlTransformTransformerFactory_newInstance();

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactory *JavaxXmlTransformTransformerFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerFactory)

#endif // _JavaxXmlTransformTransformerFactory_H_
