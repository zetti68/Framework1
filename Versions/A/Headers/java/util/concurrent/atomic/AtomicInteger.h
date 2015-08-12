//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicInteger.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicInteger_H_
#define _JavaUtilConcurrentAtomicAtomicInteger_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaUtilConcurrentAtomicAtomicInteger : NSNumber < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)initialValue;

- (jint)addAndGetWithInt:(jint)delta;

- (jboolean)compareAndSetWithInt:(jint)expect
                         withInt:(jint)update;

- (jint)decrementAndGet;

- (jdouble)doubleValue;

- (jfloat)floatValue;

- (jint)get;

- (jint)getAndAddWithInt:(jint)delta;

- (jint)getAndDecrement;

- (jint)getAndIncrement;

- (jint)getAndSetWithInt:(jint)newValue;

- (jint)incrementAndGet;

- (jint)intValue;

- (void)lazySetWithInt:(jint)newValue;

- (jlong)longLongValue;

- (void)setWithInt:(jint)newValue;

- (NSString *)description;

- (jboolean)weakCompareAndSetWithInt:(jint)expect
                             withInt:(jint)update;

#pragma mark Package-Private



@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicInteger)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicInteger_initWithInt_(JavaUtilConcurrentAtomicAtomicInteger *self, jint initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *new_JavaUtilConcurrentAtomicAtomicInteger_initWithInt_(jint initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicInteger_init(JavaUtilConcurrentAtomicAtomicInteger *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *new_JavaUtilConcurrentAtomicAtomicInteger_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicInteger)

#endif // _JavaUtilConcurrentAtomicAtomicInteger_H_
