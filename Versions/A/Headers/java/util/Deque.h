//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Deque.java
//

#ifndef _JavaUtilDeque_H_
#define _JavaUtilDeque_H_

@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/util/Queue.h"

@protocol JavaUtilDeque < JavaUtilQueue, NSObject, JavaObject >
- (void)addFirstWithId:(id)e;

- (void)addLastWithId:(id)e;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (id)removeFirst;

- (id)removeLast;

- (id)pollFirst;

- (id)pollLast;

- (id)getFirst;

- (id)getLast;

- (id)peekFirst;

- (id)peekLast;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (jboolean)removeLastOccurrenceWithId:(id)o;

- (jboolean)addWithId:(id)e;

- (jboolean)offerWithId:(id)e;

- (id)remove;

- (id)poll;

- (id)element;

- (id)peek;

- (void)pushWithId:(id)e;

- (id)pop;

- (jboolean)removeWithId:(id)o;

- (jboolean)containsWithId:(id)o;

- (jint)size;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilIterator>)descendingIterator;


@end

__attribute__((always_inline)) inline void JavaUtilDeque_init() {}

#endif // _JavaUtilDeque_H_