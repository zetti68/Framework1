//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Pair.java
//

#ifndef _AndroidUtilPair_H_
#define _AndroidUtilPair_H_

#import "JreEmulation.h"

@interface AndroidUtilPair : NSObject {
 @public
  id first_;
  id second_;
}

- (instancetype)initWithId:(id)first
                    withId:(id)second;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

+ (AndroidUtilPair *)createWithId:(id)a
                           withId:(id)b;

@end

__attribute__((always_inline)) inline void AndroidUtilPair_init() {}

J2OBJC_FIELD_SETTER(AndroidUtilPair, first_, id)
J2OBJC_FIELD_SETTER(AndroidUtilPair, second_, id)
FOUNDATION_EXPORT AndroidUtilPair *AndroidUtilPair_createWithId_withId_(id a, id b);

#endif // _AndroidUtilPair_H_