//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/collect/Hashing.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectHashing_RESTRICT
#define ComGoogleCommonCollectHashing_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashing_RESTRICT

#if !defined (_ComGoogleCommonCollectHashing_) && (ComGoogleCommonCollectHashing_INCLUDE_ALL || ComGoogleCommonCollectHashing_INCLUDE)
#define _ComGoogleCommonCollectHashing_

#define ComGoogleCommonCollectHashing_C1 -862048943
#define ComGoogleCommonCollectHashing_C2 461845907

@interface ComGoogleCommonCollectHashing : NSObject {
}

+ (jint)smearWithInt:(jint)hashCode;

+ (jint)closedTableSizeWithInt:(jint)expectedEntries
                    withDouble:(jdouble)loadFactor;

+ (jboolean)needsResizingWithInt:(jint)size
                         withInt:(jint)tableSize
                      withDouble:(jdouble)loadFactor;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashing_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_smearWithInt_(jint hashCode);
FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_closedTableSizeWithInt_withDouble_(jint expectedEntries, jdouble loadFactor);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectHashing_needsResizingWithInt_withInt_withDouble_(jint size, jint tableSize, jdouble loadFactor);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashing, C1, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashing, C2, jint)

FOUNDATION_EXPORT jint ComGoogleCommonCollectHashing_MAX_TABLE_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashing, MAX_TABLE_SIZE_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(ComGoogleCommonCollectHashing, MAX_TABLE_SIZE_, jint)
#endif
