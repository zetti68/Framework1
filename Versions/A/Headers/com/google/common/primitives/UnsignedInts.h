//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/primitives/UnsignedInts.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonPrimitivesUnsignedInts_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedInts_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesUnsignedInts_) && (ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedInts_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedInts_

@class IOSIntArray;
@protocol JavaUtilComparator;

#define ComGoogleCommonPrimitivesUnsignedInts_INT_MASK 4294967295LL

@interface ComGoogleCommonPrimitivesUnsignedInts : NSObject {
}

+ (jint)flipWithInt:(jint)value;

+ (jint)compareWithInt:(jint)a
               withInt:(jint)b;

+ (jlong)toLongWithInt:(jint)value;

+ (jint)minWithIntArray:(IOSIntArray *)array;

+ (jint)maxWithIntArray:(IOSIntArray *)array;

+ (NSString *)joinWithNSString:(NSString *)separator
                  withIntArray:(IOSIntArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jint)divideWithInt:(jint)dividend
              withInt:(jint)divisor;

+ (jint)remainderWithInt:(jint)dividend
                 withInt:(jint)divisor;

+ (jint)decodeWithNSString:(NSString *)stringValue;

+ (jint)parseUnsignedIntWithNSString:(NSString *)s;

+ (jint)parseUnsignedIntWithNSString:(NSString *)string
                             withInt:(jint)radix;

+ (NSString *)toStringWithInt:(jint)x;

+ (NSString *)toStringWithInt:(jint)x
                      withInt:(jint)radix;

@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesUnsignedInts_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_flipWithInt_(jint value);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_compareWithInt_withInt_(jint a, jint b);
FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedInts_toLongWithInt_(jint value);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_minWithIntArray_(IOSIntArray *array);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_maxWithIntArray_(IOSIntArray *array);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_joinWithNSString_withIntArray_(NSString *separator, IOSIntArray *array);
FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedInts_lexicographicalComparator();
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_divideWithInt_withInt_(jint dividend, jint divisor);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_remainderWithInt_withInt_(jint dividend, jint divisor);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_decodeWithNSString_(NSString *stringValue);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_(NSString *s);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_withInt_(NSString *string, jint radix);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_(jint x);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_withInt_(jint x, jint radix);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInts, INT_MASK, jlong)
#endif

#if !defined (_ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_

@class IOSIntArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"

typedef enum {
  ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_INSTANCE = 0,
} ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator;

@interface ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSIntArray *)left
               withId:(IOSIntArray *)right;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_INSTANCE]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum, INSTANCE, ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *)
#endif
