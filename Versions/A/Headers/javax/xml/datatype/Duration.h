//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/datatype/Duration.java
//

#ifndef _JavaxXmlDatatypeDuration_H_
#define _JavaxXmlDatatypeDuration_H_

#include "J2ObjC_header.h"

@class JavaMathBigDecimal;
@class JavaUtilCalendar;
@class JavaUtilDate;
@class JavaxXmlDatatypeDatatypeConstants_Field;
@class JavaxXmlNamespaceQName;

@interface JavaxXmlDatatypeDuration : NSObject

#pragma mark Public

- (instancetype)init;

- (JavaxXmlDatatypeDuration *)addWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)rhs;

- (void)addToWithJavaUtilCalendar:(JavaUtilCalendar *)calendar;

- (void)addToWithJavaUtilDate:(JavaUtilDate *)date;

- (jint)compareWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

- (jboolean)isEqual:(id)duration;

- (jint)getDays;

- (NSNumber *)getFieldWithJavaxXmlDatatypeDatatypeConstants_Field:(JavaxXmlDatatypeDatatypeConstants_Field *)field;

- (jint)getHours;

- (jint)getMinutes;

- (jint)getMonths;

- (jint)getSeconds;

- (jint)getSign;

- (jlong)getTimeInMillisWithJavaUtilCalendar:(JavaUtilCalendar *)startInstant;

- (jlong)getTimeInMillisWithJavaUtilDate:(JavaUtilDate *)startInstant;

- (JavaxXmlNamespaceQName *)getXMLSchemaType;

- (jint)getYears;

- (NSUInteger)hash;

- (jboolean)isLongerThanWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

- (jboolean)isSetWithJavaxXmlDatatypeDatatypeConstants_Field:(JavaxXmlDatatypeDatatypeConstants_Field *)field;

- (jboolean)isShorterThanWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

- (JavaxXmlDatatypeDuration *)multiplyWithJavaMathBigDecimal:(JavaMathBigDecimal *)factor;

- (JavaxXmlDatatypeDuration *)multiplyWithInt:(jint)factor;

- (JavaxXmlDatatypeDuration *)negate;

- (JavaxXmlDatatypeDuration *)normalizeWithWithJavaUtilCalendar:(JavaUtilCalendar *)startTimeInstant;

- (JavaxXmlDatatypeDuration *)subtractWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)rhs;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlDatatypeDuration)

FOUNDATION_EXPORT void JavaxXmlDatatypeDuration_init(JavaxXmlDatatypeDuration *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlDatatypeDuration)

#endif // _JavaxXmlDatatypeDuration_H_