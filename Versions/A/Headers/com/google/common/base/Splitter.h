//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/base/Splitter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseSplitter_INCLUDE_ALL")
#if ComGoogleCommonBaseSplitter_RESTRICT
#define ComGoogleCommonBaseSplitter_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseSplitter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseSplitter_RESTRICT

#if !defined (_ComGoogleCommonBaseSplitter_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_INCLUDE)
#define _ComGoogleCommonBaseSplitter_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonBaseSplitter_MapSplitter;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;

@interface ComGoogleCommonBaseSplitter : NSObject

#pragma mark Public

+ (ComGoogleCommonBaseSplitter *)fixedLengthWithInt:(jint)length;

- (ComGoogleCommonBaseSplitter *)limitWithInt:(jint)limit;

- (ComGoogleCommonBaseSplitter *)omitEmptyStrings;

+ (ComGoogleCommonBaseSplitter *)onWithChar:(jchar)separator;

+ (ComGoogleCommonBaseSplitter *)onWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)separatorMatcher;

+ (ComGoogleCommonBaseSplitter *)onWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)separatorPattern;

+ (ComGoogleCommonBaseSplitter *)onWithNSString:(NSString *)separator;

+ (ComGoogleCommonBaseSplitter *)onPatternWithNSString:(NSString *)separatorPattern;

- (id<JavaLangIterable>)splitWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (ComGoogleCommonBaseSplitter *)trimResults;

- (ComGoogleCommonBaseSplitter *)trimResultsWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)trimmer;

- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithChar:(jchar)separator;

- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithComGoogleCommonBaseSplitter:(ComGoogleCommonBaseSplitter *)keyValueSplitter;

- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithNSString:(NSString *)separator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSplitter)

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithChar_(jchar separator);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher *separatorMatcher);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithNSString_(NSString *separator);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithJavaUtilRegexPattern_(JavaUtilRegexPattern *separatorPattern);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onPatternWithNSString_(NSString *separatorPattern);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_fixedLengthWithInt_(jint length);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSplitter)

#endif

#if !defined (_ComGoogleCommonBaseSplitter_MapSplitter_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_MapSplitter_INCLUDE)
#define _ComGoogleCommonBaseSplitter_MapSplitter_

@protocol JavaLangCharSequence;
@protocol JavaUtilMap;

@interface ComGoogleCommonBaseSplitter_MapSplitter : NSObject

#pragma mark Public

- (id<JavaUtilMap>)splitWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSplitter_MapSplitter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSplitter_MapSplitter)

#endif

#if !defined (_ComGoogleCommonBaseSplitter_Strategy_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_Strategy_INCLUDE)
#define _ComGoogleCommonBaseSplitter_Strategy_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_SplittingIterator_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_SplittingIterator_INCLUDE)
#define _ComGoogleCommonBaseSplitter_SplittingIterator_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$1_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$1_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$1_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$1_$1_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$1_$1_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$1_$1_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$2_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$2_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$2_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$2_$1_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$2_$1_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$2_$1_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$3_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$3_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$3_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$3_$1_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$3_$1_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$3_$1_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$4_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$4_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$4_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$4_$1_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$4_$1_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$4_$1_

#endif

#if !defined (_ComGoogleCommonBaseSplitter_$5_) && (ComGoogleCommonBaseSplitter_INCLUDE_ALL || ComGoogleCommonBaseSplitter_$5_INCLUDE)
#define _ComGoogleCommonBaseSplitter_$5_

#endif
#pragma pop_macro("ComGoogleCommonBaseSplitter_INCLUDE_ALL")
