### Learning Objective

> Xcode 구조 및 사용법 익히기

> macOS – command line tamplate 으로 새 프로젝트 만들기

> class code 작성

> property와 method에의 이해 및 적용



### Theory

#### 프로젝트 및 파일 명명법
- 프로젝트 이름은 꼭 영어로.
- 시스템 예약어를 사용할 수 없다.
- 시작 글자에 숫자를 사용할 수 없다.
- 공백을 포함할 수 없다.
- 프로젝트&클래스 명은 "PascalCase"로 작성.
- 프로퍼티&메소드 명은 "camelCase"로 작성.


#### 프로퍼티와 메서드
*프로퍼티 Property*
- 객체가 가질 수 있는 특징, 상태 등의 값
- 정의 : @property <data type> <property name>;

*메서드 Method*
- 객체가 수행할 수 있는 동작 또는 기능
- 정의 : - (<반환타입>) <method name>;

```example
#import <Foundation/Foundation.h>

@interface Chicken : NSObject

//header 파일의 이 위치에 프로퍼티 및 메서드를 정의한다.

@property id propertyName;

@- (id) methodName;

@end
```


#### 객체지향 프로그래밍
*객체지향 프로그래밍의 특징*
- 추상화 : 세상 객체의 공통적인 특징과 행위를 뽑아내서 클래스로 표현하는 작업
- 은닉화
- 캡슐화
- 상속
- 다형성


#### 주석 Comment
- 컴파일시에는 무시되지만 해설 및 이해에는 유용한 문장.
- 향후 참조를 위해 일반적으로 코드에 설명을 덧붙여 사용.
- 컴파일러가 빈 공백으로 취급하며, 특정 코드 줄을 비활성화 할 수 있음.
- 한 줄 주석처리 : // 다음에 오는 내용 주석처리
- 사이의 모든 내용 주석처리 : /* 내용 */

 
	

