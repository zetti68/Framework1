//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/traversal/NodeIterator.java
//

#ifndef _OrgW3cDomTraversalNodeIterator_H_
#define _OrgW3cDomTraversalNodeIterator_H_

#include "J2ObjC_header.h"

@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeFilter;

@protocol OrgW3cDomTraversalNodeIterator < NSObject, JavaObject >

- (id<OrgW3cDomNode>)getRoot;

- (jint)getWhatToShow;

- (id<OrgW3cDomTraversalNodeFilter>)getFilter;

- (jboolean)getExpandEntityReferences;

- (id<OrgW3cDomNode>)nextNode;

- (id<OrgW3cDomNode>)previousNode;

- (void)detach;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomTraversalNodeIterator)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomTraversalNodeIterator)

#endif // _OrgW3cDomTraversalNodeIterator_H_
