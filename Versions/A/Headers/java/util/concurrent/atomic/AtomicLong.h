//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicLong.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicLong_H_
#define _JavaUtilConcurrentAtomicAtomicLong_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaUtilConcurrentAtomicAtomicLong : NSNumber < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)initialValue;

- (jlong)addAndGetWithLong:(jlong)delta;

- (jboolean)compareAndSetWithLong:(jlong)expect
                         withLong:(jlong)update;

- (jlong)decrementAndGet;

- (jdouble)doubleValue;

- (jfloat)floatValue;

- (jlong)get;

- (jlong)getAndAddWithLong:(jlong)delta;

- (jlong)getAndDecrement;

- (jlong)getAndIncrement;

- (jlong)getAndSetWithLong:(jlong)newValue;

- (jlong)incrementAndGet;

- (jint)intValue;

- (void)lazySetWithLong:(jlong)newValue;

- (jlong)longLongValue;

- (void)setWithLong:(jlong)newValue;

- (NSString *)description;

- (jboolean)weakCompareAndSetWithLong:(jlong)expect
                             withLong:(jlong)update;

#pragma mark Package-Private



@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicLong)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLong_initWithLong_(JavaUtilConcurrentAtomicAtomicLong *self, jlong initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *new_JavaUtilConcurrentAtomicAtomicLong_initWithLong_(jlong initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLong_init(JavaUtilConcurrentAtomicAtomicLong *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *new_JavaUtilConcurrentAtomicAtomicLong_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicLong)

#endif // _JavaUtilConcurrentAtomicAtomicLong_H_
