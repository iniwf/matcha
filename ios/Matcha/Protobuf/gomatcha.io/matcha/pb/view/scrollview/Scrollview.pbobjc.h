// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gomatcha.io/matcha/pb/view/scrollview/scrollview.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class MatchaLayoutPBPoint;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MatchaScrollViewPBScrollviewRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MatchaScrollViewPBScrollviewRoot : GPBRootObject
@end

#pragma mark - MatchaScrollViewPBView

typedef GPB_ENUM(MatchaScrollViewPBView_FieldNumber) {
  MatchaScrollViewPBView_FieldNumber_ScrollEnabled = 1,
  MatchaScrollViewPBView_FieldNumber_ShowsHorizontalScrollIndicator = 2,
  MatchaScrollViewPBView_FieldNumber_ShowsVerticalScrollIndicator = 3,
  MatchaScrollViewPBView_FieldNumber_Horizontal = 4,
  MatchaScrollViewPBView_FieldNumber_Vertical = 5,
};

@interface MatchaScrollViewPBView : GPBMessage

@property(nonatomic, readwrite) BOOL scrollEnabled;

@property(nonatomic, readwrite) BOOL horizontal;

@property(nonatomic, readwrite) BOOL vertical;

@property(nonatomic, readwrite) BOOL showsHorizontalScrollIndicator;

@property(nonatomic, readwrite) BOOL showsVerticalScrollIndicator;

@end

#pragma mark - MatchaScrollViewPBScrollEvent

typedef GPB_ENUM(MatchaScrollViewPBScrollEvent_FieldNumber) {
  MatchaScrollViewPBScrollEvent_FieldNumber_ContentOffset = 1,
};

@interface MatchaScrollViewPBScrollEvent : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) MatchaLayoutPBPoint *contentOffset;
/** Test to see if @c contentOffset has been set. */
@property(nonatomic, readwrite) BOOL hasContentOffset;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
