//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLData.java
//

#ifndef _JavaSqlSQLData_H_
#define _JavaSqlSQLData_H_

#include "J2ObjC_header.h"

@protocol JavaSqlSQLInput;
@protocol JavaSqlSQLOutput;

@protocol JavaSqlSQLData < NSObject, JavaObject >

- (NSString *)getSQLTypeName;

- (void)readSQLWithJavaSqlSQLInput:(id<JavaSqlSQLInput>)stream
                      withNSString:(NSString *)typeName;

- (void)writeSQLWithJavaSqlSQLOutput:(id<JavaSqlSQLOutput>)stream;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLData)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLData)

#endif // _JavaSqlSQLData_H_
