//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/base/Objects.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseObjects_INCLUDE_ALL")
#if ComGoogleCommonBaseObjects_RESTRICT
#define ComGoogleCommonBaseObjects_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseObjects_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseObjects_RESTRICT

#if !defined (_ComGoogleCommonBaseObjects_) && (ComGoogleCommonBaseObjects_INCLUDE_ALL || ComGoogleCommonBaseObjects_INCLUDE)
#define _ComGoogleCommonBaseObjects_

@class ComGoogleCommonBaseObjects_ToStringHelper;
@class IOSClass;
@class IOSObjectArray;

@interface ComGoogleCommonBaseObjects : NSObject

#pragma mark Public

+ (jboolean)equalWithId:(id)a
                 withId:(id)b;

+ (id)firstNonNullWithId:(id)first
                  withId:(id)second;

+ (jint)hashCodeWithNSObjectArray:(IOSObjectArray *)objects;

+ (ComGoogleCommonBaseObjects_ToStringHelper *)toStringHelperWithIOSClass:(IOSClass *)clazz;

+ (ComGoogleCommonBaseObjects_ToStringHelper *)toStringHelperWithId:(id)self_;

+ (ComGoogleCommonBaseObjects_ToStringHelper *)toStringHelperWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseObjects)

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseObjects_equalWithId_withId_(id a, id b);

FOUNDATION_EXPORT jint ComGoogleCommonBaseObjects_hashCodeWithNSObjectArray_(IOSObjectArray *objects);

FOUNDATION_EXPORT ComGoogleCommonBaseObjects_ToStringHelper *ComGoogleCommonBaseObjects_toStringHelperWithId_(id self_);

FOUNDATION_EXPORT ComGoogleCommonBaseObjects_ToStringHelper *ComGoogleCommonBaseObjects_toStringHelperWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT ComGoogleCommonBaseObjects_ToStringHelper *ComGoogleCommonBaseObjects_toStringHelperWithNSString_(NSString *className_);

FOUNDATION_EXPORT id ComGoogleCommonBaseObjects_firstNonNullWithId_withId_(id first, id second);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseObjects)

#endif

#if !defined (_ComGoogleCommonBaseObjects_ToStringHelper_) && (ComGoogleCommonBaseObjects_INCLUDE_ALL || ComGoogleCommonBaseObjects_ToStringHelper_INCLUDE)
#define _ComGoogleCommonBaseObjects_ToStringHelper_

@interface ComGoogleCommonBaseObjects_ToStringHelper : NSObject

#pragma mark Public

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                   withBoolean:(jboolean)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                      withChar:(jchar)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                    withDouble:(jdouble)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                     withFloat:(jfloat)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                       withInt:(jint)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                      withLong:(jlong)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addWithNSString:(NSString *)name
                                                        withId:(id)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithBoolean:(jboolean)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithChar:(jchar)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithDouble:(jdouble)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithFloat:(jfloat)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithInt:(jint)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithLong:(jlong)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)addValueWithId:(id)value;

- (ComGoogleCommonBaseObjects_ToStringHelper *)omitNullValues;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseObjects_ToStringHelper)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseObjects_ToStringHelper)

#endif

#if !defined (_ComGoogleCommonBaseObjects_ToStringHelper_ValueHolder_) && (ComGoogleCommonBaseObjects_INCLUDE_ALL || ComGoogleCommonBaseObjects_ToStringHelper_ValueHolder_INCLUDE)
#define _ComGoogleCommonBaseObjects_ToStringHelper_ValueHolder_

#endif
#pragma pop_macro("ComGoogleCommonBaseObjects_INCLUDE_ALL")
