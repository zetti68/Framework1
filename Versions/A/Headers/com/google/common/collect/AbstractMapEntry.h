//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AbstractMapEntry.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractMapEntry_RESTRICT
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMapEntry_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractMapEntry_) && (ComGoogleCommonCollectAbstractMapEntry_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapEntry_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapEntry_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_Entry_INCLUDE 1
#include "java/util/Map.h"

@interface ComGoogleCommonCollectAbstractMapEntry : NSObject < JavaUtilMap_Entry > {
}

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractMapEntry_init() {}
#endif
