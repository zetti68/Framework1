//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/cache/RemovalCause.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheRemovalCause_INCLUDE_ALL")
#if ComGoogleCommonCacheRemovalCause_RESTRICT
#define ComGoogleCommonCacheRemovalCause_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheRemovalCause_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheRemovalCause_RESTRICT

#if !defined (_ComGoogleCommonCacheRemovalCauseEnum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCauseEnum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCauseEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheRemovalCause) {
  ComGoogleCommonCacheRemovalCause_EXPLICIT = 0,
  ComGoogleCommonCacheRemovalCause_REPLACED = 1,
  ComGoogleCommonCacheRemovalCause_COLLECTED = 2,
  ComGoogleCommonCacheRemovalCause_EXPIRED = 3,
  ComGoogleCommonCacheRemovalCause_SIZE = 4,
};

@interface ComGoogleCommonCacheRemovalCauseEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

- (jboolean)wasEvicted;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheRemovalCauseEnum_values();

+ (ComGoogleCommonCacheRemovalCauseEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCacheRemovalCauseEnum *ComGoogleCommonCacheRemovalCauseEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheRemovalCauseEnum)

FOUNDATION_EXPORT ComGoogleCommonCacheRemovalCauseEnum *ComGoogleCommonCacheRemovalCauseEnum_values_[];

#define ComGoogleCommonCacheRemovalCauseEnum_EXPLICIT ComGoogleCommonCacheRemovalCauseEnum_values_[ComGoogleCommonCacheRemovalCause_EXPLICIT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheRemovalCauseEnum, EXPLICIT)

#define ComGoogleCommonCacheRemovalCauseEnum_REPLACED ComGoogleCommonCacheRemovalCauseEnum_values_[ComGoogleCommonCacheRemovalCause_REPLACED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheRemovalCauseEnum, REPLACED)

#define ComGoogleCommonCacheRemovalCauseEnum_COLLECTED ComGoogleCommonCacheRemovalCauseEnum_values_[ComGoogleCommonCacheRemovalCause_COLLECTED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheRemovalCauseEnum, COLLECTED)

#define ComGoogleCommonCacheRemovalCauseEnum_EXPIRED ComGoogleCommonCacheRemovalCauseEnum_values_[ComGoogleCommonCacheRemovalCause_EXPIRED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheRemovalCauseEnum, EXPIRED)

#define ComGoogleCommonCacheRemovalCauseEnum_SIZE ComGoogleCommonCacheRemovalCauseEnum_values_[ComGoogleCommonCacheRemovalCause_SIZE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheRemovalCauseEnum, SIZE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalCauseEnum)

#endif

#if !defined (_ComGoogleCommonCacheRemovalCause_$1Enum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCause_$1Enum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCause_$1Enum_

#endif

#if !defined (_ComGoogleCommonCacheRemovalCause_$2Enum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCause_$2Enum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCause_$2Enum_

#endif

#if !defined (_ComGoogleCommonCacheRemovalCause_$3Enum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCause_$3Enum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCause_$3Enum_

#endif

#if !defined (_ComGoogleCommonCacheRemovalCause_$4Enum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCause_$4Enum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCause_$4Enum_

#endif

#if !defined (_ComGoogleCommonCacheRemovalCause_$5Enum_) && (ComGoogleCommonCacheRemovalCause_INCLUDE_ALL || ComGoogleCommonCacheRemovalCause_$5Enum_INCLUDE)
#define _ComGoogleCommonCacheRemovalCause_$5Enum_

#endif
#pragma pop_macro("ComGoogleCommonCacheRemovalCause_INCLUDE_ALL")
