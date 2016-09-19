//
//  Chicken.h
//  StructurePractice
//
//  Created by joy on 2016. 9. 19..
//  Copyright © 2016년 Joy. All rights reserved.
//

#import <Foundation/Foundation.h>


/*
 chicken 클래스에 대한 주석입니다. chicken의 특징을 프로퍼티로 표현합니다.
 */


@interface Chicken : NSObject

// 조리에 첨가할 양념 : 간장, 고추장, 소금
@property id spice;

// 가격
@property id price;

// 부위 : 가슴살, 날개, 목, 다리
@property id parts;

// 양 : 반 마리, 한 마리
@property id amount;

// 서비스 장소 : ForHere or ToGo
@property id deliveryType;

// 맛 : 순한 맛, 매운 맛
@property id flavor;


@end
