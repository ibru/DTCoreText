//
//  DTTextBlock.h
//  DTCoreText
//
//  Created by Oliver Drobnik on 04.03.12.
//  Copyright (c) 2012 Drobnik.com. All rights reserved.
//

#import "DTCompatibility.h"

/**
 Class that represents a block of text with attributes like padding or a background color.
 */
@interface DTTextBlock : NSObject

/**
 The space to be applied between the layouted text and the edges of the receiver
 */
@property (nonatomic, assign) DTEdgeInsets padding;


/**
 The background color to paint behind the text in the receiver
 */
@property (nonatomic, strong) DTColor *backgroundColor;


// missing methods and values

/* Values for NSTextBlockDimension */
enum {
    NSTextBlockWidth            = 0,
    NSTextBlockMinimumWidth     = 1,
    NSTextBlockMaximumWidth     = 2,
    NSTextBlockHeight           = 4,
    NSTextBlockMinimumHeight    = 5,
    NSTextBlockMaximumHeight    = 6
};
typedef NSUInteger NSTextBlockDimension;

/* Values for NSTextBlockValueType */
enum {
    NSTextBlockAbsoluteValueType    = 0,    // Absolute value in points
    NSTextBlockPercentageValueType  = 1     // Percentage value (out of 100)
};
typedef NSUInteger NSTextBlockValueType;

/* Values for NSTextBlockLayer */
enum {
    NSTextBlockPadding  = -1,
    NSTextBlockBorder   =  0,
    NSTextBlockMargin   =  1
};
typedef NSInteger NSTextBlockLayer;

typedef enum {
    NSMinXEdge = 0,
    NSMinYEdge = 1,
    NSMaxXEdge = 2,
    NSMaxYEdge = 3
} NSRectEdge;

- (CGFloat)valueForDimension:(NSTextBlockDimension)dimension;

- (NSTextBlockValueType)valueTypeForDimension:(NSTextBlockDimension)dimension;

- (CGFloat)widthForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge;

- (NSTextBlockValueType)widthValueTypeForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge;

- (UIColor *)borderColorForEdge:(NSRectEdge)edge;


@end
