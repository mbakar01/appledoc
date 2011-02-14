//
//  GBObjectsAssertor.h
//  appledoc
//
//  Created by Tomaz Kragelj on 27.7.10.
//  Copyright (C) 2010, Gentle Bytes. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GBIvarData;
@class GBMethodData;
@class GBCommentParagraph;

#define GBDecorationTypeNone	9999
#define GBNULL [NSNull null]

// Need to derive from GHTestCase otherwise GH macros used wouldn't work...
@interface GBObjectsAssertor : GHTestCase

- (void)assertIvar:(GBIvarData *)ivar matches:(NSString *)firstType,... NS_REQUIRES_NIL_TERMINATION;
- (void)assertMethod:(GBMethodData *)method matchesInstanceComponents:(NSString *)firstItem,... NS_REQUIRES_NIL_TERMINATION;
- (void)assertMethod:(GBMethodData *)method matchesClassComponents:(NSString *)firstItem,... NS_REQUIRES_NIL_TERMINATION;
- (void)assertMethod:(GBMethodData *)method matchesPropertyComponents:(NSString *)firstItem,... NS_REQUIRES_NIL_TERMINATION;
- (void)assertMethod:(GBMethodData *)method matchesType:(GBMethodType)type start:(NSString *)first components:(va_list)args;
- (void)assertFormattedComponents:(NSArray *)components match:(NSString *)first,... NS_REQUIRES_NIL_TERMINATION;

@end
