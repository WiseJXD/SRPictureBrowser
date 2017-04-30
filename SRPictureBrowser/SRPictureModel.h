//
//  SRPictureModel.h
//  SRPhotoBrowser
//
//  Created by Willing Guo on 16/12/24.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SRPictureModel : UIView

@property (nonatomic, copy) NSString *picURLString;

@property (nonatomic, assign) CGRect           originPosition;
@property (nonatomic, assign, readonly) CGRect destinationPosition;

@property (nonatomic, assign) NSInteger index;

@property (nonatomic, assign, getter=isFirstShow) BOOL firstShow;

/**
 Creates and returns a model of picture information.

 @param picURLString        The URL string of the picture.
 @param containerView       The super view of the picture view.
 @param positionInContainer The picture view's position in its super view.
 @param index               The index of this picture in all pictures.
 @return A picture model.
 */
+ (instancetype)sr_pictureModelWithPicURLString:(NSString *)picURLString containerView:(UIView *)containerView positionInContainer:(CGRect)positionInContainer index:(NSInteger)index;

@end
