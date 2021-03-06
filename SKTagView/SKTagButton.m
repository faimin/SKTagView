//
// Created by Shaokang Zhao on 15/1/12.
// Copyright (c) 2015 Shaokang Zhao. All rights reserved.
//

#import "SKTagButton.h"
#import "SKTag.h"
#import <Masonry.h>

@interface SKTagButton ()

@property (nonatomic, strong) UIImageView *deleteImageView;

@end


@implementation SKTagButton

+ (instancetype)buttonWithTag:(SKTag *)tag
{
	SKTagButton *btn = [super buttonWithType:UIButtonTypeCustom];
	
	if (tag.attributedText)
    {
		[btn setAttributedTitle:tag.attributedText forState:UIControlStateNormal];
	}
    else
    {
		[btn setTitle:tag.text forState:UIControlStateNormal];
		[btn setTitleColor:tag.textColor forState:UIControlStateNormal];
		btn.titleLabel.font = tag.font ?: [UIFont systemFontOfSize:tag.fontSize];
	}
	
	btn.backgroundColor = tag.bgColor;
	btn.contentEdgeInsets = tag.padding;
	btn.titleLabel.lineBreakMode = NSLineBreakByTruncatingTail;
	
    if (tag.bgImg)
    {
        [btn setBackgroundImage:tag.bgImg forState:UIControlStateNormal];
    }
    
    if (tag.borderColor)
    {
        btn.layer.borderColor = tag.borderColor.CGColor;
    }
    
    if (tag.borderWidth)
    {
        btn.layer.borderWidth = tag.borderWidth;
    }
    
    btn.userInteractionEnabled = tag.enable;
    
    btn.layer.cornerRadius = tag.cornerRadius;
    btn.layer.masksToBounds = YES;
    
    ///MARK:Add by Zero.D.Saber
    btn.clipsToBounds = NO;
    if (tag.showDeleteMark)
    {
        UIImage *image = tag.markImage;
        btn.deleteImageView = [[UIImageView alloc] initWithImage:image];
        [btn addSubview:btn.deleteImageView];
        [btn.deleteImageView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.equalTo(btn.mas_right);
            make.centerY.equalTo(btn.mas_top).offset(2);
        }];
    }

    return btn;
}

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    BOOL inSide = [super pointInside:point withEvent:event];
    if (!inSide)
    {
        inSide = CGRectContainsPoint(_deleteImageView.frame, point);
    }
    
    return inSide;
}

@end
