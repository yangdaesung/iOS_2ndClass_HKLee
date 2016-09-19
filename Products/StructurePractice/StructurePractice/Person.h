//
//  Person.h
//  StructurePractice
//
//  Created by joy on 2016. 9. 19..
//  Copyright © 2016년 Joy. All rights reserved.
//

#import <Foundation/Foundation.h>


/*
 사람을 클래스로, 사람의 특징을 프로퍼티로, 사람이 할 수 있는 행위 또는 기능을 메서드로 표현합니다.
 */


@interface Person : NSObject

// 이름
@property id name;

// 키
@property id height;

// 몸무게
@property id weight;

// 혈액형
@property id bloodtype;


// 생각하다
- (id)think;

// 쓰다
- (id)write;

// 읽다
- (id)read;

// 말하다
- (id)speak;

// 노래하다
- (id)sing;


@end
