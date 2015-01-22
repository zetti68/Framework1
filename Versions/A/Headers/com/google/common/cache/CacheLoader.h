//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/cache/CacheLoader.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCacheCacheLoader_RESTRICT
#define ComGoogleCommonCacheCacheLoader_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheLoader_RESTRICT
#if ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_INCLUDE
#define ComGoogleCommonCacheCacheLoader_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_INCLUDE
#define ComGoogleCommonCacheCacheLoader_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangIterable;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheCacheLoader : NSObject {
}

- (instancetype)init;

- (id)load__WithId:(id)key;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)reloadWithId:(id)key
                                                           withId:(id)oldValue;

- (id<JavaUtilMap>)loadAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (ComGoogleCommonCacheCacheLoader *)fromWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheCacheLoader_init() {}
FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> function);
FOUNDATION_EXPORT ComGoogleCommonCacheCacheLoader *ComGoogleCommonCacheCacheLoader_fromWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> supplier);
#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_

@protocol ComGoogleCommonBaseFunction;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_serialVersionUID 0LL

@interface ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader : ComGoogleCommonCacheCacheLoader < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (id)load__WithId:(id)key;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheLoader_FunctionToCacheLoader, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_

@protocol ComGoogleCommonBaseSupplier;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_serialVersionUID 0LL

@interface ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader : ComGoogleCommonCacheCacheLoader < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)computingSupplier;

- (id)load__WithId:(id)key;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheLoader_SupplierToCacheLoader, serialVersionUID, jlong)
#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_

#define JavaLangUnsupportedOperationException_RESTRICT 1
#define JavaLangUnsupportedOperationException_INCLUDE 1
#include "java/lang/UnsupportedOperationException.h"

@interface ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException : JavaLangUnsupportedOperationException {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheCacheLoader_UnsupportedLoadingOperationException_init() {}
#endif

#if !defined (_ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_) && (ComGoogleCommonCacheCacheLoader_INCLUDE_ALL || ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_INCLUDE)
#define _ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"

@interface ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException : JavaLangRuntimeException {
}

- (instancetype)initWithNSString:(NSString *)message;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheCacheLoader_InvalidCacheLoadException_init() {}
#endif