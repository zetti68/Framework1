//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathFunctionResolver.java
//

#ifndef _JavaxXmlXpathXPathFunctionResolver_H_
#define _JavaxXmlXpathXPathFunctionResolver_H_

#include "J2ObjC_header.h"

@class JavaxXmlNamespaceQName;
@protocol JavaxXmlXpathXPathFunction;

@protocol JavaxXmlXpathXPathFunctionResolver < NSObject, JavaObject >

- (id<JavaxXmlXpathXPathFunction>)resolveFunctionWithJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)functionName
                                                                    withInt:(jint)arity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathFunctionResolver)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFunctionResolver)

#endif // _JavaxXmlXpathXPathFunctionResolver_H_