//
//  GBComment.m
//  appledoc
//
//  Created by Tomaz Kragelj on 27.8.10.
//  Copyright (C) 2010, Gentle Bytes. All rights reserved.
//

#import "GBComment.h"

@implementation GBComment

#pragma mark Initialization & disposal

+ (id)commentWithStringValue:(NSString *)value {
	return [self commentWithStringValue:value sourceInfo:nil];
}

+ (id)commentWithStringValue:(NSString *)value sourceInfo:(GBSourceInfo *)info {
	GBComment *result = [[[self alloc] init] autorelease];
	result.stringValue = value;
	result.sourceInfo = info;
	return result;
}

#pragma mark Overriden methods

- (NSString *)description {
	return [NSString stringWithFormat:@"Comment '%@'", [self.stringValue normalizedDescription]];
}

- (NSString *)debugDescription {
	return [self description];
}

#pragma mark Properties

@synthesize sourceInfo;
@synthesize isCopied;
@synthesize stringValue;

@end
