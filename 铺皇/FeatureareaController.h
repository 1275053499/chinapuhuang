//
//  FeatureareaController.h
//  铺皇
//
//  Created by selice on 2017/9/21.
//  Copyright © 2017年 中国铺皇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FeatureareaController : UIViewController
{
    NSMutableArray * PHArr;     //存储数据
    
    NSString       *valuearea1;     //当前点击的位置1 面积
    NSString       *valuetype2;     //当前点击的位置2 类型
    NSString       *valuebrose3;    //当前点击的位置3 浏览
    NSString       *valuetime4;     //当前点击的位置4 时间
    
    NSString       *valuearea1id;   //当前点击的位置1 面积id
    NSString       *valuetype2id;   //当前点击的位置2 类型id
    NSString       *valuebrose3id;  //当前点击的位置3 浏览id
    NSString       *valuetime4id;   //当前点击的位置4 时间id
}

@property   (nonatomic,strong)NSString      * hostcityid;


@end
