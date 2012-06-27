//
//  DTTextBlock.m
//  DTCoreText
//
//  Created by Oliver Drobnik on 04.03.12.
//  Copyright (c) 2012 Drobnik.com. All rights reserved.
//

#import "DTTextBlock.h"
#import "DTCoreText.h"

@implementation DTTextBlock
{
	DTEdgeInsets _padding;
	DTColor *_backgroundColor;
}

#pragma mark Properties

@synthesize padding = _padding;
@synthesize backgroundColor = _backgroundColor;

- (CGFloat)valueForDimension:(NSTextBlockDimension)dimension
{
	return -1;
}

- (NSTextBlockValueType)valueTypeForDimension:(NSTextBlockDimension)dimension
{
	return NSTextBlockAbsoluteValueType;
}

- (CGFloat)widthForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge
{
	return -1;
}

- (NSTextBlockValueType)widthValueTypeForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge
{
	return NSTextBlockAbsoluteValueType;
}

- (UIColor *)borderColorForEdge:(NSRectEdge)edge
{
	return [UIColor clearColor];
}
	

@end
