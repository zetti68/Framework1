//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLDataException.java
//

#ifndef _JavaSqlSQLDataException_H_
#define _JavaSqlSQLDataException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLNonTransientException.h"

@class JavaLangThrowable;

@interface JavaSqlSQLDataException : JavaSqlSQLNonTransientException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLDataException)

FOUNDATION_EXPORT void JavaSqlSQLDataException_init(JavaSqlSQLDataException *self);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_(JavaSqlSQLDataException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withInt_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithJavaLangThrowable_(JavaSqlSQLDataException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLDataException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLDataException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLDataException *new_JavaSqlSQLDataException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLDataException)

#endif // _JavaSqlSQLDataException_H_
