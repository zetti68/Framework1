//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannableString.java
//

#ifndef _AndroidTextSpannableString_H_
#define _AndroidTextSpannableString_H_

#import "JreEmulation.h"
#include "android/text/GetChars.h"
#include "android/text/Spannable.h"
#include "android/text/SpannableStringInternal.h"
#include "java/lang/CharSequence.h"

@interface AndroidTextSpannableString : AndroidTextSpannableStringInternal < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable > {
}

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

+ (AndroidTextSpannableString *)valueOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

- (void)removeSpanWithId:(id)what;

- (id<JavaLangCharSequence>)subSequenceFrom:(int)start to:(int)end;

@end

__attribute__((always_inline)) inline void AndroidTextSpannableString_init() {}
FOUNDATION_EXPORT AndroidTextSpannableString *AndroidTextSpannableString_valueOfWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

#endif // _AndroidTextSpannableString_H_
