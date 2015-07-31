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
@property (nonatomic        ) CGFloat            cornerRadius;
@property (nonatomic, strong) UIColor            *borderColor;
@property (nonatomic        ) CGFloat            borderWidth;
@property (nonatomic        ) UIEdgeInsets       padding;           ///<like padding in css
@property (nonatomic, strong) UIFont             *font;
@property (nonatomic        ) CGFloat            fontSize;
@property (nonatomic        ) BOOL               enable;            ///<default:YES

@property (nonatomic        ) BOOL    showDeleteFlag;               ///<显示删除按钮
@property (nonatomic, strong) UIImage *deleteImage;                 ///<当显示删除按钮时，此属性必填

- (instancetype)initWithText:(NSString *)text;
+ (instancetype)tagWithText:(NSString *)text;

@end
