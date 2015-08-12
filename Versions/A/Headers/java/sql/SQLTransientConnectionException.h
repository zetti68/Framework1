//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransientConnectionException.java
//

#ifndef _JavaSqlSQLTransientConnectionException_H_
#define _JavaSqlSQLTransientConnectionException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLTransientException.h"

@class JavaLangThrowable;

@interface JavaSqlSQLTransientConnectionException : JavaSqlSQLTransientException

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

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransientConnectionException)

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_init(JavaSqlSQLTransientConnectionException *self);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_(JavaSqlSQLTransientConnectionException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithJavaLangThrowable_(JavaSqlSQLTransientConnectionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLTransientConnectionException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransientConnectionException)

#endif // _JavaSqlSQLTransientConnectionException_H_
