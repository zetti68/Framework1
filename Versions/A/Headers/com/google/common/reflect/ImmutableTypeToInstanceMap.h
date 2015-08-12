//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/reflect/ImmutableTypeToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL")
#if ComGoogleCommonReflectImmutableTypeToInstanceMap_RESTRICT
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectImmutableTypeToInstanceMap_RESTRICT

#if !defined (_ComGoogleCommonReflectImmutableTypeToInstanceMap_) && (ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL || ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE)
#define _ComGoogleCommonReflectImmutableTypeToInstanceMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define ComGoogleCommonReflectTypeToInstanceMap_RESTRICT 1
#define ComGoogleCommonReflectTypeToInstanceMap_INCLUDE 1
#include "com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonReflectImmutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

+ (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)builder;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

+ (ComGoogleCommonReflectImmutableTypeToInstanceMap *)of;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap *ComGoogleCommonReflectImmutableTypeToInstanceMap_of();

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *ComGoogleCommonReflectImmutableTypeToInstanceMap_builder();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap)

#endif

#if !defined (_ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_) && (ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL || ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_INCLUDE)
#define _ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_

@class ComGoogleCommonReflectImmutableTypeToInstanceMap;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

@interface ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonReflectImmutableTypeToInstanceMap *)build;

- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithIOSClass:(IOSClass *)key
                                                                       withId:(id)value;

- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)key
                                                                                              withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

#endif
#pragma pop_macro("ComGoogleCommonReflectImmutableTypeToInstanceMap_INCLUDE_ALL")
