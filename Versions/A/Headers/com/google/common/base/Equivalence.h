//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/j2objc-0.9.7/guava/sources/com/google/common/base/Equivalence.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseEquivalence_INCLUDE_ALL")
#if ComGoogleCommonBaseEquivalence_RESTRICT
#define ComGoogleCommonBaseEquivalence_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseEquivalence_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseEquivalence_RESTRICT
#if ComGoogleCommonBaseEquivalence_Identity_INCLUDE
#define ComGoogleCommonBaseEquivalence_INCLUDE 1
#endif
#if ComGoogleCommonBaseEquivalence_Equals_INCLUDE
#define ComGoogleCommonBaseEquivalence_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonBaseEquivalence_) && (ComGoogleCommonBaseEquivalence_INCLUDE_ALL || ComGoogleCommonBaseEquivalence_INCLUDE)
#define _ComGoogleCommonBaseEquivalence_

@class ComGoogleCommonBaseEquivalence_Wrapper;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;

@interface ComGoogleCommonBaseEquivalence : NSObject

#pragma mark Public

+ (ComGoogleCommonBaseEquivalence *)equals;

- (jboolean)equivalentWithId:(id)a
                      withId:(id)b;

- (id<ComGoogleCommonBasePredicate>)equivalentToWithId:(id)target;

- (jint)hash__WithId:(id)t;

+ (ComGoogleCommonBaseEquivalence *)identity;

- (ComGoogleCommonBaseEquivalence *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonBaseEquivalence *)pairwise;

- (ComGoogleCommonBaseEquivalence_Wrapper *)wrapWithId:(id)reference;

#pragma mark Protected

- (instancetype)init;

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseEquivalence)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_init(ComGoogleCommonBaseEquivalence *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence *ComGoogleCommonBaseEquivalence_equals();

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence *ComGoogleCommonBaseEquivalence_identity();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence)

#endif

#if !defined (_ComGoogleCommonBaseEquivalence_Wrapper_) && (ComGoogleCommonBaseEquivalence_INCLUDE_ALL || ComGoogleCommonBaseEquivalence_Wrapper_INCLUDE)
#define _ComGoogleCommonBaseEquivalence_Wrapper_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonBaseEquivalence_Wrapper : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (id)get;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseEquivalence_Wrapper)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Wrapper)

#endif

#if !defined (_ComGoogleCommonBaseEquivalence_EquivalentToPredicate_) && (ComGoogleCommonBaseEquivalence_INCLUDE_ALL || ComGoogleCommonBaseEquivalence_EquivalentToPredicate_INCLUDE)
#define _ComGoogleCommonBaseEquivalence_EquivalentToPredicate_

#endif

#if !defined (_ComGoogleCommonBaseEquivalence_Equals_) && (ComGoogleCommonBaseEquivalence_INCLUDE_ALL || ComGoogleCommonBaseEquivalence_Equals_INCLUDE)
#define _ComGoogleCommonBaseEquivalence_Equals_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonBaseEquivalence_Equals : ComGoogleCommonBaseEquivalence < JavaIoSerializable >

#pragma mark Public

- (jint)doHashWithId:(id)o;

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEquivalence_Equals)

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Equals *ComGoogleCommonBaseEquivalence_Equals_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseEquivalence_Equals, INSTANCE_, ComGoogleCommonBaseEquivalence_Equals *)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_Equals_init(ComGoogleCommonBaseEquivalence_Equals *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Equals *new_ComGoogleCommonBaseEquivalence_Equals_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Equals)

#endif

#if !defined (_ComGoogleCommonBaseEquivalence_Identity_) && (ComGoogleCommonBaseEquivalence_INCLUDE_ALL || ComGoogleCommonBaseEquivalence_Identity_INCLUDE)
#define _ComGoogleCommonBaseEquivalence_Identity_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonBaseEquivalence_Identity : ComGoogleCommonBaseEquivalence < JavaIoSerializable >

#pragma mark Protected

- (jboolean)doEquivalentWithId:(id)a
                        withId:(id)b;

- (jint)doHashWithId:(id)o;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEquivalence_Identity)

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Identity *ComGoogleCommonBaseEquivalence_Identity_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseEquivalence_Identity, INSTANCE_, ComGoogleCommonBaseEquivalence_Identity *)

FOUNDATION_EXPORT void ComGoogleCommonBaseEquivalence_Identity_init(ComGoogleCommonBaseEquivalence_Identity *self);

FOUNDATION_EXPORT ComGoogleCommonBaseEquivalence_Identity *new_ComGoogleCommonBaseEquivalence_Identity_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEquivalence_Identity)

#endif
#pragma pop_macro("ComGoogleCommonBaseEquivalence_INCLUDE_ALL")
