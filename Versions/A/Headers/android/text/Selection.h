//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Selection.java
//

#ifndef _AndroidTextSelection_H_
#define _AndroidTextSelection_H_

@protocol AndroidTextSpannable;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "android/text/NoCopySpan.h"

@interface AndroidTextSelection : NSObject {
}

+ (jint)getSelectionStartWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

+ (jint)getSelectionEndWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)start
                                     withInt:(jint)stop;

+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)index;

+ (void)selectAllWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

+ (void)extendSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                        withInt:(jint)index;

+ (void)removeSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

@end

FOUNDATION_EXPORT BOOL AndroidTextSelection_initialized;
J2OBJC_STATIC_INIT(AndroidTextSelection)
FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionStartWithJavaLangCharSequence_(id<JavaLangCharSequence> text);
FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionEndWithJavaLangCharSequence_(id<JavaLangCharSequence> text);
FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_withInt_(id<AndroidTextSpannable> text, jint start, jint stop);
FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);
FOUNDATION_EXPORT void AndroidTextSelection_selectAllWithAndroidTextSpannable_(id<AndroidTextSpannable> text);
FOUNDATION_EXPORT void AndroidTextSelection_extendSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);
FOUNDATION_EXPORT void AndroidTextSelection_removeSelectionWithAndroidTextSpannable_(id<AndroidTextSpannable> text);

FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_START_;
J2OBJC_STATIC_FIELD_GETTER(AndroidTextSelection, SELECTION_START_, id)

FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_END_;
J2OBJC_STATIC_FIELD_GETTER(AndroidTextSelection, SELECTION_END_, id)

@interface AndroidTextSelection_START : NSObject < AndroidTextNoCopySpan > {
}

@end

__attribute__((always_inline)) inline void AndroidTextSelection_START_init() {}

@interface AndroidTextSelection_END : NSObject < AndroidTextNoCopySpan > {
}

@end

__attribute__((always_inline)) inline void AndroidTextSelection_END_init() {}

#endif // _AndroidTextSelection_H_