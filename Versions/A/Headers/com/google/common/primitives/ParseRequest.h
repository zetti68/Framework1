//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/primitives/ParseRequest.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonPrimitivesParseRequest_RESTRICT
#define ComGoogleCommonPrimitivesParseRequest_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesParseRequest_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesParseRequest_) && (ComGoogleCommonPrimitivesParseRequest_INCLUDE_ALL || ComGoogleCommonPrimitivesParseRequest_INCLUDE)
#define _ComGoogleCommonPrimitivesParseRequest_

@interface ComGoogleCommonPrimitivesParseRequest : NSObject {
 @public
  NSString *rawValue_;
  jint radix_;
}

+ (ComGoogleCommonPrimitivesParseRequest *)fromStringWithNSString:(NSString *)stringValue;

@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesParseRequest_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonPrimitivesParseRequest, rawValue_, NSString *)
FOUNDATION_EXPORT ComGoogleCommonPrimitivesParseRequest *ComGoogleCommonPrimitivesParseRequest_fromStringWithNSString_(NSString *stringValue);
#endif
