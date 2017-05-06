//
//  SRPictureCell.m
//  SRPhotoBrowser
//
//  Created by https://github.com/guowilling on 16/12/24.
//  Copyright © 2016年 SR. All rights reserved.
//

#import "SRPictureCell.h"
#import "SRPictureModel.h"
#import "SRPictureView.h"

@implementation SRPictureCell

- (id)initWithFrame:(CGRect)frame {
    
    if (self = [super initWithFrame:frame]) {
        self.backgroundColor = [UIColor clearColor];
        _pictureView = [[SRPictureView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        [self.contentView addSubview:_pictureView];
    }
    return self;
}

- (void)setPictureModel:(SRPictureModel *)pictureModel {
    
    _pictureModel = pictureModel;
    
    _pictureView.pictureModel = pictureModel;
}

@end
