//
// Created by Shaokang Zhao on 15/1/12.
// Copyright (c) 2015 Shaokang Zhao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SKTag : NSObject

@property (nonatomic, copy  ) NSString           *text;
@property (nonatomic, copy  ) NSAttributedString *attributedText;
@property (nonatomic, strong) UIColor            *textColor;        ///<backgound color
@property (nonatomic, strong) UIColor            *bgColor;
@property (nonatomic, strong) UIImage            *bgImg;            ///<background image
@property (nonatomic, assign) CGFloat            cornerRadius;
@property (nonatomic, strong) UIColor            *borderColor;
@property (nonatomic, assign) CGFloat            borderWidth;
@property (nonatomic, assign) UIEdgeInsets       padding;           ///<like padding in css
@property (nonatomic, strong) UIFont             *font;
@property (nonatomic, assign) CGFloat            fontSize;
@property (nonatomic, assign) BOOL               enable;            ///<default:YES

@property (nonatomic, assign) BOOL    showDeleteMark;               ///<显示删除按钮
@property (nonatomic, strong) UIImage *markImage;                 ///<当显示删除按钮时，此属性必填

- (instancetype)initWithText:(NSString *)text;
+ (instancetype)tagWithText:(NSString *)text;

@end
