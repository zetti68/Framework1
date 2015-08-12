//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Handler.java
//

#ifndef _JavaUtilLoggingHandler_H_
#define _JavaUtilLoggingHandler_H_

#include "J2ObjC_header.h"

@class JavaLangException;
@class JavaUtilLoggingErrorManager;
@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogRecord;
@protocol JavaUtilLoggingFilter;

@interface JavaUtilLoggingHandler : NSObject

#pragma mark Public

- (void)close;

- (void)flush;

- (NSString *)getEncoding;

- (JavaUtilLoggingErrorManager *)getErrorManager;

- (id<JavaUtilLoggingFilter>)getFilter;

- (JavaUtilLoggingFormatter *)getFormatter;

- (JavaUtilLoggingLevel *)getLevel;

- (jboolean)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)setEncodingWithNSString:(NSString *)charsetName;

- (void)setErrorManagerWithJavaUtilLoggingErrorManager:(JavaUtilLoggingErrorManager *)newErrorManager;

- (void)setFilterWithJavaUtilLoggingFilter:(id<JavaUtilLoggingFilter>)newFilter;

- (void)setFormatterWithJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)newFormatter;

- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

#pragma mark Protected

- (instancetype)init;

- (void)reportErrorWithNSString:(NSString *)msg
          withJavaLangException:(JavaLangException *)ex
                        withInt:(jint)code;

#pragma mark Package-Private

- (void)initPropertiesWithNSString:(NSString *)defaultLevel
                      withNSString:(NSString *)defaultFilter
                      withNSString:(NSString *)defaultFormatter
                      withNSString:(NSString *)defaultEncoding OBJC_METHOD_FAMILY_NONE;

- (void)internalSetEncodingWithNSString:(NSString *)newEncoding;

- (void)internalSetFormatterWithJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)newFormatter;

- (void)printInvalidPropMessageWithNSString:(NSString *)key
                               withNSString:(NSString *)value
                      withJavaLangException:(JavaLangException *)e;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingHandler)

FOUNDATION_EXPORT void JavaUtilLoggingHandler_init(JavaUtilLoggingHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingHandler)

#endif // _JavaUtilLoggingHandler_H_
