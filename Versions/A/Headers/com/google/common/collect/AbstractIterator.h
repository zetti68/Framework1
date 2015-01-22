//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/AbstractIterator.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractIterator_RESTRICT
#define ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractIterator_) && (ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractIterator_INCLUDE)
#define _ComGoogleCommonCollectAbstractIterator_

@class ComGoogleCommonCollectAbstractIterator_StateEnum;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"

@interface ComGoogleCommonCollectAbstractIterator : ComGoogleCommonCollectUnmodifiableIterator {
}

- (instancetype)init;

- (id)computeNext;

- (id)endOfData;

- (jboolean)hasNext;

- (id)next;

- (id)peek;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractIterator_init() {}
#endif

#if !defined (_ComGoogleCommonCollectAbstractIterator_StateEnum_) && (ComGoogleCommonCollectAbstractIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractIterator_StateEnum_INCLUDE)
#define _ComGoogleCommonCollectAbstractIterator_StateEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef enum {
  ComGoogleCommonCollectAbstractIterator_State_READY = 0,
  ComGoogleCommonCollectAbstractIterator_State_NOT_READY = 1,
  ComGoogleCommonCollectAbstractIterator_State_DONE = 2,
  ComGoogleCommonCollectAbstractIterator_State_FAILED = 3,
} ComGoogleCommonCollectAbstractIterator_State;

@interface ComGoogleCommonCollectAbstractIterator_StateEnum : JavaLangEnum < NSCopying > {
}

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectAbstractIterator_StateEnum_values();

+ (ComGoogleCommonCollectAbstractIterator_StateEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractIterator_StateEnum *ComGoogleCommonCollectAbstractIterator_StateEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectAbstractIterator_StateEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectAbstractIterator_StateEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractIterator_StateEnum *ComGoogleCommonCollectAbstractIterator_StateEnum_values_[];

#define ComGoogleCommonCollectAbstractIterator_StateEnum_READY ComGoogleCommonCollectAbstractIterator_StateEnum_values_[ComGoogleCommonCollectAbstractIterator_State_READY]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractIterator_StateEnum, READY, ComGoogleCommonCollectAbstractIterator_StateEnum *)

#define ComGoogleCommonCollectAbstractIterator_StateEnum_NOT_READY ComGoogleCommonCollectAbstractIterator_StateEnum_values_[ComGoogleCommonCollectAbstractIterator_State_NOT_READY]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractIterator_StateEnum, NOT_READY, ComGoogleCommonCollectAbstractIterator_StateEnum *)

#define ComGoogleCommonCollectAbstractIterator_StateEnum_DONE ComGoogleCommonCollectAbstractIterator_StateEnum_values_[ComGoogleCommonCollectAbstractIterator_State_DONE]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractIterator_StateEnum, DONE, ComGoogleCommonCollectAbstractIterator_StateEnum *)

#define ComGoogleCommonCollectAbstractIterator_StateEnum_FAILED ComGoogleCommonCollectAbstractIterator_StateEnum_values_[ComGoogleCommonCollectAbstractIterator_State_FAILED]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractIterator_StateEnum, FAILED, ComGoogleCommonCollectAbstractIterator_StateEnum *)
#endif
