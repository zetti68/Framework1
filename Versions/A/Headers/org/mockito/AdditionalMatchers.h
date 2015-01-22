//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/testing/mockito/build_result/java/org/mockito/AdditionalMatchers.java
//

#ifndef _OrgMockitoAdditionalMatchers_H_
#define _OrgMockitoAdditionalMatchers_H_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@class OrgMockitoArgumentMatcher;
@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaLangComparable;
@protocol OrgMockitoInternalProgressMockingProgress;

#import "JreEmulation.h"

@interface OrgMockitoAdditionalMatchers : NSObject {
}

+ (id)geqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jbyte)geqWithByte:(jbyte)value;

+ (jdouble)geqWithDouble:(jdouble)value;

+ (jfloat)geqWithFloat:(jfloat)value;

+ (jint)geqWithInt:(jint)value;

+ (jlong)geqWithLong:(jlong)value;

+ (jshort)geqWithShort:(jshort)value;

+ (id)leqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jbyte)leqWithByte:(jbyte)value;

+ (jdouble)leqWithDouble:(jdouble)value;

+ (jfloat)leqWithFloat:(jfloat)value;

+ (jint)leqWithInt:(jint)value;

+ (jlong)leqWithLong:(jlong)value;

+ (jshort)leqWithShort:(jshort)value;

+ (id)gtWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jbyte)gtWithByte:(jbyte)value;

+ (jdouble)gtWithDouble:(jdouble)value;

+ (jfloat)gtWithFloat:(jfloat)value;

+ (jint)gtWithInt:(jint)value;

+ (jlong)gtWithLong:(jlong)value;

+ (jshort)gtWithShort:(jshort)value;

+ (id)ltWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jbyte)ltWithByte:(jbyte)value;

+ (jdouble)ltWithDouble:(jdouble)value;

+ (jfloat)ltWithFloat:(jfloat)value;

+ (jint)ltWithInt:(jint)value;

+ (jlong)ltWithLong:(jlong)value;

+ (jshort)ltWithShort:(jshort)value;

+ (id)cmpEqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (NSString *)findWithNSString:(NSString *)regex;

+ (IOSObjectArray *)aryEqWithNSObjectArray:(IOSObjectArray *)value;

+ (IOSShortArray *)aryEqWithShortArray:(IOSShortArray *)value;

+ (IOSLongArray *)aryEqWithLongArray:(IOSLongArray *)value;

+ (IOSIntArray *)aryEqWithIntArray:(IOSIntArray *)value;

+ (IOSFloatArray *)aryEqWithFloatArray:(IOSFloatArray *)value;

+ (IOSDoubleArray *)aryEqWithDoubleArray:(IOSDoubleArray *)value;

+ (IOSCharArray *)aryEqWithCharArray:(IOSCharArray *)value;

+ (IOSByteArray *)aryEqWithByteArray:(IOSByteArray *)value;

+ (IOSBooleanArray *)aryEqWithBooleanArray:(IOSBooleanArray *)value;

+ (jboolean)and__WithBoolean:(jboolean)first
                 withBoolean:(jboolean)second;

+ (jbyte)and__WithByte:(jbyte)first
              withByte:(jbyte)second;

+ (jchar)and__WithChar:(jchar)first
              withChar:(jchar)second;

+ (jdouble)and__WithDouble:(jdouble)first
                withDouble:(jdouble)second;

+ (jfloat)and__WithFloat:(jfloat)first
               withFloat:(jfloat)second;

+ (jint)and__WithInt:(jint)first
             withInt:(jint)second;

+ (jlong)and__WithLong:(jlong)first
              withLong:(jlong)second;

+ (jshort)and__WithShort:(jshort)first
               withShort:(jshort)second;

+ (id)and__WithId:(id)first
           withId:(id)second;

+ (jboolean)or__WithBoolean:(jboolean)first
                withBoolean:(jboolean)second;

+ (id)or__WithId:(id)first
          withId:(id)second;

+ (jshort)or__WithShort:(jshort)first
              withShort:(jshort)second;

+ (jlong)or__WithLong:(jlong)first
             withLong:(jlong)second;

+ (jint)or__WithInt:(jint)first
            withInt:(jint)second;

+ (jfloat)or__WithFloat:(jfloat)first
              withFloat:(jfloat)second;

+ (jdouble)or__WithDouble:(jdouble)first
               withDouble:(jdouble)second;

+ (jchar)or__WithChar:(jchar)first
             withChar:(jchar)second;

+ (jbyte)or__WithByte:(jbyte)first
             withByte:(jbyte)second;

+ (id)not__WithId:(id)first;

+ (jshort)not__WithShort:(jshort)first;

+ (jint)not__WithInt:(jint)first;

+ (jlong)not__WithLong:(jlong)first;

+ (jfloat)not__WithFloat:(jfloat)first;

+ (jdouble)not__WithDouble:(jdouble)first;

+ (jchar)not__WithChar:(jchar)first;

+ (jboolean)not__WithBoolean:(jboolean)first;

+ (jbyte)not__WithByte:(jbyte)first;

+ (jdouble)eqWithDouble:(jdouble)value
             withDouble:(jdouble)delta;

+ (jfloat)eqWithFloat:(jfloat)value
            withFloat:(jfloat)delta;

+ (OrgMockitoInternalProgressHandyReturnValues *)reportMatcherWithOrgMockitoArgumentMatcher:(OrgMockitoArgumentMatcher *)matcher;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoAdditionalMatchers_initialized;
J2OBJC_STATIC_INIT(OrgMockitoAdditionalMatchers)

FOUNDATION_EXPORT id<OrgMockitoInternalProgressMockingProgress> OrgMockitoAdditionalMatchers_mockingProgress_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoAdditionalMatchers, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)
J2OBJC_STATIC_FIELD_SETTER(OrgMockitoAdditionalMatchers, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)

#endif // _OrgMockitoAdditionalMatchers_H_