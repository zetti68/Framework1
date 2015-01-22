//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/TimeUnit.java
//

#ifndef _JavaUtilConcurrentTimeUnit_H_
#define _JavaUtilConcurrentTimeUnit_H_

@class JavaLangThread;

#import "JreEmulation.h"
#include "java/lang/Enum.h"

#define JavaUtilConcurrentTimeUnitEnum_C0 1LL
#define JavaUtilConcurrentTimeUnitEnum_C1 1000LL
#define JavaUtilConcurrentTimeUnitEnum_C2 1000000LL
#define JavaUtilConcurrentTimeUnitEnum_C3 1000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C4 60000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C5 3600000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C6 86400000000000LL
#define JavaUtilConcurrentTimeUnitEnum_MAX 9223372036854775807LL

typedef enum {
  JavaUtilConcurrentTimeUnit_NANOSECONDS = 0,
  JavaUtilConcurrentTimeUnit_MICROSECONDS = 1,
  JavaUtilConcurrentTimeUnit_MILLISECONDS = 2,
  JavaUtilConcurrentTimeUnit_SECONDS = 3,
  JavaUtilConcurrentTimeUnit_MINUTES = 4,
  JavaUtilConcurrentTimeUnit_HOURS = 5,
  JavaUtilConcurrentTimeUnit_DAYS = 6,
} JavaUtilConcurrentTimeUnit;

@interface JavaUtilConcurrentTimeUnitEnum : JavaLangEnum < NSCopying > {
}

+ (jlong)xWithLong:(jlong)d
          withLong:(jlong)m
          withLong:(jlong)over;

- (jlong)convertWithLong:(jlong)sourceDuration
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)sourceUnit;

- (jlong)toNanosWithLong:(jlong)duration;

- (jlong)toMicrosWithLong:(jlong)duration;

- (jlong)toMillisWithLong:(jlong)duration;

- (jlong)toSecondsWithLong:(jlong)duration;

- (jlong)toMinutesWithLong:(jlong)duration;

- (jlong)toHoursWithLong:(jlong)duration;

- (jlong)toDaysWithLong:(jlong)duration;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (void)timedWaitWithId:(id)obj
               withLong:(jlong)timeout;

- (void)timedJoinWithJavaLangThread:(JavaLangThread *)thread
                           withLong:(jlong)timeout;

- (void)sleepWithLong:(jlong)timeout;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaUtilConcurrentTimeUnitEnum_values();

+ (JavaUtilConcurrentTimeUnitEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentTimeUnitEnum_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentTimeUnitEnum)
FOUNDATION_EXPORT jlong JavaUtilConcurrentTimeUnitEnum_xWithLong_withLong_withLong_(jlong d, jlong m, jlong over);

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_values_[];

#define JavaUtilConcurrentTimeUnitEnum_NANOSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_NANOSECONDS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, NANOSECONDS, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_MICROSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MICROSECONDS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MICROSECONDS, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_MILLISECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MILLISECONDS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MILLISECONDS, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_SECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_SECONDS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, SECONDS, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_MINUTES JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MINUTES]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MINUTES, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_HOURS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_HOURS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, HOURS, JavaUtilConcurrentTimeUnitEnum *)

#define JavaUtilConcurrentTimeUnitEnum_DAYS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_DAYS]
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, DAYS, JavaUtilConcurrentTimeUnitEnum *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C0, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C1, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C2, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C3, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C4, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C5, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C6, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MAX, jlong)

@interface JavaUtilConcurrentTimeUnitEnum_$1 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$1_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$2 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$2_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$3 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$3_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$4 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$4_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$5 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$5_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$6 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$6_init() {}

@interface JavaUtilConcurrentTimeUnitEnum_$7 : JavaUtilConcurrentTimeUnitEnum {
}

- (jlong)toNanosWithLong:(jlong)d;

- (jlong)toMicrosWithLong:(jlong)d;

- (jlong)toMillisWithLong:(jlong)d;

- (jlong)toSecondsWithLong:(jlong)d;

- (jlong)toMinutesWithLong:(jlong)d;

- (jlong)toHoursWithLong:(jlong)d;

- (jlong)toDaysWithLong:(jlong)d;

- (jlong)convertWithLong:(jlong)d
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)u;

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTimeUnitEnum_$7_init() {}

#endif // _JavaUtilConcurrentTimeUnit_H_
