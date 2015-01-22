//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/Pattern.java
//

#ifndef _JavaUtilRegexPattern_H_
#define _JavaUtilRegexPattern_H_

@class IOSObjectArray;
@class JavaUtilRegexMatcher;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilRegexPattern_ALL_FLAGS 255
#define JavaUtilRegexPattern_CANON_EQ 128
#define JavaUtilRegexPattern_CASE_INSENSITIVE 2
#define JavaUtilRegexPattern_COMMENTS 4
#define JavaUtilRegexPattern_DOTALL 32
#define JavaUtilRegexPattern_LITERAL 16
#define JavaUtilRegexPattern_MULTILINE 8
#define JavaUtilRegexPattern_UNICODE_CASE 64
#define JavaUtilRegexPattern_UNIX_LINES 1
#define JavaUtilRegexPattern_serialVersionUID 5073258162644648461LL

@interface JavaUtilRegexPattern : NSObject < JavaIoSerializable > {
 @public
  id nativePattern_;
}

- (JavaUtilRegexMatcher *)matcherWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (IOSObjectArray *)splitWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withInt:(jint)limit;

- (IOSObjectArray *)splitWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (NSString *)pattern;

- (NSString *)description;

- (jint)flags;

+ (JavaUtilRegexPattern *)compileWithNSString:(NSString *)regularExpression
                                      withInt:(jint)flags;

+ (JavaUtilRegexPattern *)compileWithNSString:(NSString *)pattern;

+ (jboolean)matchesWithNSString:(NSString *)regularExpression
       withJavaLangCharSequence:(id<JavaLangCharSequence>)input;

+ (NSString *)quoteWithNSString:(NSString *)string;

- (void)dealloc;

- (void)releaseNativePattern;

@end

__attribute__((always_inline)) inline void JavaUtilRegexPattern_init() {}

J2OBJC_FIELD_SETTER(JavaUtilRegexPattern, nativePattern_, id)
FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilRegexPattern_compileWithNSString_withInt_(NSString *regularExpression, jint flags);
FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilRegexPattern_compileWithNSString_(NSString *pattern);
FOUNDATION_EXPORT jboolean JavaUtilRegexPattern_matchesWithNSString_withJavaLangCharSequence_(NSString *regularExpression, id<JavaLangCharSequence> input);
FOUNDATION_EXPORT NSString *JavaUtilRegexPattern_quoteWithNSString_(NSString *string);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, UNIX_LINES, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, CASE_INSENSITIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, COMMENTS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, MULTILINE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, LITERAL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, DOTALL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, UNICODE_CASE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, CANON_EQ, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRegexPattern, ALL_FLAGS, jint)

#endif // _JavaUtilRegexPattern_H_