//
//  ViewController.h
//  计时器
//
//  Created by 张立远 on 2020/7/13.
//  Copyright © 2020 张立远. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    //定义一个定时器对象
    //可以在每隔固定的时间发送一个消息
    //通过此消息来调用相应的时间函数
    //通过此函数可以在固定时间段完成一个根据时间间隔的任务
    NSTimer* _timerView;
}

//定时器的属性对象
@property(retain, nonatomic) NSTimer* timerView;

@end

