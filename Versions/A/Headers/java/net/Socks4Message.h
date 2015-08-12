//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Socks4Message.java
//

#ifndef _JavaNetSocks4Message_H_
#define _JavaNetSocks4Message_H_

#include "J2ObjC_header.h"

@class IOSByteArray;

#define JavaNetSocks4Message_COMMAND_CONNECT 1
#define JavaNetSocks4Message_COMMAND_BIND 2
#define JavaNetSocks4Message_RETURN_SUCCESS 90
#define JavaNetSocks4Message_RETURN_FAILURE 91
#define JavaNetSocks4Message_RETURN_CANNOT_CONNECT_TO_IDENTD 92
#define JavaNetSocks4Message_RETURN_DIFFERENT_USER_IDS 93
#define JavaNetSocks4Message_REPLY_LENGTH 8
#define JavaNetSocks4Message_INDEX_VERSION 0

@interface JavaNetSocks4Message : NSObject {
 @public
  IOSByteArray *buffer_;
}

#pragma mark Public

- (instancetype)init;

- (IOSByteArray *)getBytes;

- (jint)getCommandOrResult;

- (NSString *)getErrorStringWithInt:(jint)error;

- (jint)getIP;

- (jint)getLength;

- (jint)getPort;

- (NSString *)getUserId;

- (void)setCommandOrResultWithInt:(jint)command;

- (void)setIPWithByteArray:(IOSByteArray *)ip;

- (void)setPortWithInt:(jint)port;

- (void)setUserIdWithNSString:(NSString *)id_;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocks4Message)

J2OBJC_FIELD_SETTER(JavaNetSocks4Message, buffer_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, COMMAND_CONNECT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, COMMAND_BIND, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_SUCCESS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_FAILURE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_CANNOT_CONNECT_TO_IDENTD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_DIFFERENT_USER_IDS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, REPLY_LENGTH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_VERSION, jint)

FOUNDATION_EXPORT void JavaNetSocks4Message_init(JavaNetSocks4Message *self);

FOUNDATION_EXPORT JavaNetSocks4Message *new_JavaNetSocks4Message_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocks4Message)

#endif // _JavaNetSocks4Message_H_
