//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.4/guava/sources/com/google/common/io/BaseEncoding.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoBaseEncoding_RESTRICT
#define ComGoogleCommonIoBaseEncoding_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoBaseEncoding_RESTRICT
#if ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_INCLUDE
#define ComGoogleCommonIoBaseEncoding_INCLUDE 1
#endif
#if ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_INCLUDE
#define ComGoogleCommonIoBaseEncoding_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_Alphabet_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_Alphabet_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_Alphabet_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;

#define ComGoogleCommonBaseCharMatcher_RESTRICT 1
#define ComGoogleCommonBaseCharMatcher_INCLUDE 1
#include "com/google/common/base/CharMatcher.h"

@interface ComGoogleCommonIoBaseEncoding_Alphabet : ComGoogleCommonBaseCharMatcher {
 @public
  jint mask_;
  jint bitsPerChar_;
  jint charsPerChunk_;
  jint bytesPerChunk_;
}

- (instancetype)initWithNSString:(NSString *)name
                   withCharArray:(IOSCharArray *)chars;

- (jchar)encodeWithInt:(jint)bits;

- (jboolean)isValidPaddingStartPositionWithInt:(jint)index;

- (jint)decodeWithChar:(jchar)ch;

- (ComGoogleCommonIoBaseEncoding_Alphabet *)upperCase;

- (ComGoogleCommonIoBaseEncoding_Alphabet *)lowerCase;

- (jboolean)matchesWithChar:(jchar)c;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_Alphabet_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoByteSource;
@class ComGoogleCommonIoCharSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteInput;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteOutput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharInput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput;
@protocol ComGoogleCommonIoInputSupplier;
@protocol ComGoogleCommonIoOutputSupplier;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoBaseEncoding : NSObject {
}

- (instancetype)init;

- (NSString *)encodeWithByteArray:(IOSByteArray *)bytes;

- (NSString *)encodeWithByteArray:(IOSByteArray *)bytes
                          withInt:(jint)off
                          withInt:(jint)len;

- (JavaIoOutputStream *)encodingStreamWithJavaIoWriter:(JavaIoWriter *)writer;

- (id<ComGoogleCommonIoOutputSupplier>)encodingStreamWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)writerSupplier;

- (ComGoogleCommonIoByteSink *)encodingSinkWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)encodedSink;

- (IOSByteArray *)decodeWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

- (JavaIoInputStream *)decodingStreamWithJavaIoReader:(JavaIoReader *)reader;

- (id<ComGoogleCommonIoInputSupplier>)decodingStreamWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)readerSupplier;

- (ComGoogleCommonIoByteSource *)decodingSourceWithComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)encodedSource;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteOutput>)encodingStreamWithComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)charOutput;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteInput>)decodingStreamWithComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)charInput;

- (ComGoogleCommonBaseCharMatcher *)padding;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)n;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

+ (ComGoogleCommonIoBaseEncoding *)base64;

+ (ComGoogleCommonIoBaseEncoding *)base64Url;

+ (ComGoogleCommonIoBaseEncoding *)base32;

+ (ComGoogleCommonIoBaseEncoding *)base32Hex;

+ (ComGoogleCommonIoBaseEncoding *)base16;

+ (id<ComGoogleCommonIoGwtWorkarounds_CharInput>)ignoringInputWithComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)delegate
                                                                         withComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)toIgnore;

+ (id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)separatingOutputWithComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)delegate
                                                                                                    withNSString:(NSString *)separator
                                                                                                         withInt:(jint)afterEveryChars;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonIoBaseEncoding_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonIoBaseEncoding)
FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base64();
FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base64Url();
FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base32();
FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base32Hex();
FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_base16();
FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharInput> ComGoogleCommonIoBaseEncoding_ignoringInputWithComGoogleCommonIoGwtWorkarounds_CharInput_withComGoogleCommonBaseCharMatcher_(id<ComGoogleCommonIoGwtWorkarounds_CharInput> delegate, ComGoogleCommonBaseCharMatcher *toIgnore);
FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharOutput> ComGoogleCommonIoBaseEncoding_separatingOutputWithComGoogleCommonIoGwtWorkarounds_CharOutput_withNSString_withInt_(id<ComGoogleCommonIoGwtWorkarounds_CharOutput> delegate, NSString *separator, jint afterEveryChars);

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_BASE64_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoBaseEncoding, BASE64_, ComGoogleCommonIoBaseEncoding *)

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_BASE64_URL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoBaseEncoding, BASE64_URL_, ComGoogleCommonIoBaseEncoding *)

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_BASE32_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoBaseEncoding, BASE32_, ComGoogleCommonIoBaseEncoding *)

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_BASE32_HEX_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoBaseEncoding, BASE32_HEX_, ComGoogleCommonIoBaseEncoding *)

FOUNDATION_EXPORT ComGoogleCommonIoBaseEncoding *ComGoogleCommonIoBaseEncoding_BASE16_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoBaseEncoding, BASE16_, ComGoogleCommonIoBaseEncoding *)
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonIoBaseEncoding_Alphabet;
@class JavaLangCharacter;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteInput;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteOutput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharInput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput;

@interface ComGoogleCommonIoBaseEncoding_StandardBaseEncoding : ComGoogleCommonIoBaseEncoding {
}

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)alphabetChars
           withJavaLangCharacter:(JavaLangCharacter *)paddingChar;

- (instancetype)initWithComGoogleCommonIoBaseEncoding_Alphabet:(ComGoogleCommonIoBaseEncoding_Alphabet *)alphabet
                                         withJavaLangCharacter:(JavaLangCharacter *)paddingChar;

- (ComGoogleCommonBaseCharMatcher *)padding;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteOutput>)encodingStreamWithComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)outArg;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteInput>)decodingStreamWithComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)reader;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)afterEveryChars;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$1_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$1_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$1_

@class ComGoogleCommonIoBaseEncoding_StandardBaseEncoding;
@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput;

#define ComGoogleCommonIoGwtWorkarounds_RESTRICT 1
#define ComGoogleCommonIoGwtWorkarounds_ByteOutput_INCLUDE 1
#include "com/google/common/io/GwtWorkarounds.h"

@interface ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$1 : NSObject < ComGoogleCommonIoGwtWorkarounds_ByteOutput > {
 @public
  jint bitBuffer_;
  jint bitBufferLength_;
  jint writtenChars_;
}

- (void)writeWithByte:(jbyte)b;

- (void)flush;

- (void)close;

- (instancetype)initWithComGoogleCommonIoBaseEncoding_StandardBaseEncoding:(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *)outer$
                            withComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$1_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonIoBaseEncoding_StandardBaseEncoding;
@protocol ComGoogleCommonIoGwtWorkarounds_CharInput;

#define ComGoogleCommonIoGwtWorkarounds_RESTRICT 1
#define ComGoogleCommonIoGwtWorkarounds_ByteInput_INCLUDE 1
#include "com/google/common/io/GwtWorkarounds.h"

@interface ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2 : NSObject < ComGoogleCommonIoGwtWorkarounds_ByteInput > {
 @public
  jint bitBuffer_;
  jint bitBufferLength_;
  jint readChars_;
  jboolean hitPadding_;
  ComGoogleCommonBaseCharMatcher *paddingMatcher_;
}

- (jint)read;

- (void)close;

- (instancetype)initWithComGoogleCommonIoBaseEncoding_StandardBaseEncoding:(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding *)outer$
                             withComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonIoBaseEncoding_StandardBaseEncoding_$2, paddingMatcher_, ComGoogleCommonBaseCharMatcher *)
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_

@class ComGoogleCommonBaseCharMatcher;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteInput;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteOutput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharInput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput;

@interface ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding : ComGoogleCommonIoBaseEncoding {
}

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)delegate
                                         withNSString:(NSString *)separator
                                              withInt:(jint)afterEveryChars;

- (ComGoogleCommonBaseCharMatcher *)padding;

- (jint)maxEncodedSizeWithInt:(jint)bytes;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteOutput>)encodingStreamWithComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)output;

- (jint)maxDecodedSizeWithInt:(jint)chars;

- (id<ComGoogleCommonIoGwtWorkarounds_ByteInput>)decodingStreamWithComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)input;

- (ComGoogleCommonIoBaseEncoding *)omitPadding;

- (ComGoogleCommonIoBaseEncoding *)withPadCharWithChar:(jchar)padChar;

- (ComGoogleCommonIoBaseEncoding *)withSeparatorWithNSString:(NSString *)separator
                                                     withInt:(jint)afterEveryChars;

- (ComGoogleCommonIoBaseEncoding *)upperCase;

- (ComGoogleCommonIoBaseEncoding *)lowerCase;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_SeparatedBaseEncoding_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$1_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$1_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$1_

@class ComGoogleCommonIoBaseEncoding;
@class JavaIoOutputStream;

#define ComGoogleCommonIoOutputSupplier_RESTRICT 1
#define ComGoogleCommonIoOutputSupplier_INCLUDE 1
#include "com/google/common/io/OutputSupplier.h"

@interface ComGoogleCommonIoBaseEncoding_$1 : NSObject < ComGoogleCommonIoOutputSupplier > {
}

- (JavaIoOutputStream *)getOutput;

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)outer$
                  withComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$1_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$2_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$2_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$2_

@class ComGoogleCommonIoBaseEncoding;
@class ComGoogleCommonIoCharSink;
@class JavaIoOutputStream;

#define ComGoogleCommonIoByteSink_RESTRICT 1
#define ComGoogleCommonIoByteSink_INCLUDE 1
#include "com/google/common/io/ByteSink.h"

@interface ComGoogleCommonIoBaseEncoding_$2 : ComGoogleCommonIoByteSink {
}

- (JavaIoOutputStream *)openStream;

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)outer$
                        withComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$2_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$3_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$3_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$3_

@class ComGoogleCommonIoBaseEncoding;
@class JavaIoInputStream;

#define ComGoogleCommonIoInputSupplier_RESTRICT 1
#define ComGoogleCommonIoInputSupplier_INCLUDE 1
#include "com/google/common/io/InputSupplier.h"

@interface ComGoogleCommonIoBaseEncoding_$3 : NSObject < ComGoogleCommonIoInputSupplier > {
}

- (JavaIoInputStream *)getInput;

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)outer$
                   withComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$3_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$4_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$4_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$4_

@class ComGoogleCommonIoBaseEncoding;
@class ComGoogleCommonIoCharSource;
@class JavaIoInputStream;

#define ComGoogleCommonIoByteSource_RESTRICT 1
#define ComGoogleCommonIoByteSource_INCLUDE 1
#include "com/google/common/io/ByteSource.h"

@interface ComGoogleCommonIoBaseEncoding_$4 : ComGoogleCommonIoByteSource {
}

- (JavaIoInputStream *)openStream;

- (instancetype)initWithComGoogleCommonIoBaseEncoding:(ComGoogleCommonIoBaseEncoding *)outer$
                      withComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$4_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$5_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$5_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$5_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonIoGwtWorkarounds_RESTRICT 1
#define ComGoogleCommonIoGwtWorkarounds_CharInput_INCLUDE 1
#include "com/google/common/io/GwtWorkarounds.h"

@interface ComGoogleCommonIoBaseEncoding_$5 : NSObject < ComGoogleCommonIoGwtWorkarounds_CharInput > {
}

- (jint)read;

- (void)close;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)capture$0
         withComGoogleCommonIoGwtWorkarounds_CharInput:(id<ComGoogleCommonIoGwtWorkarounds_CharInput>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$5_init() {}
#endif

#if !defined (_ComGoogleCommonIoBaseEncoding_$6_) && (ComGoogleCommonIoBaseEncoding_INCLUDE_ALL || ComGoogleCommonIoBaseEncoding_$6_INCLUDE)
#define _ComGoogleCommonIoBaseEncoding_$6_

#define ComGoogleCommonIoGwtWorkarounds_RESTRICT 1
#define ComGoogleCommonIoGwtWorkarounds_CharOutput_INCLUDE 1
#include "com/google/common/io/GwtWorkarounds.h"

@interface ComGoogleCommonIoBaseEncoding_$6 : NSObject < ComGoogleCommonIoGwtWorkarounds_CharOutput > {
 @public
  jint charsUntilSeparator_;
}

- (void)writeWithChar:(jchar)c;

- (void)flush;

- (void)close;

- (instancetype)initWithInt:(jint)capture$0
               withNSString:(NSString *)capture$1
withComGoogleCommonIoGwtWorkarounds_CharOutput:(id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)capture$2;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoBaseEncoding_$6_init() {}
#endif
