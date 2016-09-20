### Learning Objective
> 클래스를 객체로 실체화 한다.

> 클래스의 실제 기능을 구현한다.

> 퀵 헬프를 위한 주석을 남긴다.



### Theory

#### 객체 생성

- 클래스가 실질적인 형태로 주기억장치에 생성된 것
- main.m 파일로 이동 후 생성한 클래스의 헤더 파일을 import
  예) #import "Person.h"

*객체 생성*
```
['class name' alloc];
```

*객체 초기화*
```
['object' init];
```

*객체 생성&초기화*
```
[['class name' alloc] init];
또는
['class name' new];
```
```example
[[Person alloc] init];

객체를 생성하고 초기화 한 후 객체가 메모리의 어떤 위치에 있는지 주소값을 알려준다.
```



#### 변수 생성

- 변수란 생성된 객체를 지속적으로 사용하기 위해 담아두는 곳

*변수 생성*
```
'데이터 타입' *'변수 이름' = '객체의 주소'
```
```example
Person *me = [[Person alloc] init];
``` 



#### 프로퍼티 접근

- 클래스 코드에 객체가 각자 가질 수 있는 상태값을 프로퍼티로 정의한 후 객체가 되었을 때 가지는 상태값을 set하고 get
- set : 객체를 생성하고 프로퍼티에 값을 설정
- get : 프로퍼티의 값을 가져옴




#### 메서드 구현

- 클래스의 interface에 객체가 무슨 행위를 할 수 있는지 정의한 메서드가 처리해야 할 일(코드)을 구현파일(.m)의 @implementation에 구현

*클래스 구현부*
```
@implementation Person

// @implementation과 @end 사이에 메서드를 구현한다.

@end
```
```example
@implementation Person

- (id)speak{
    NSLog(@"말을 한다");
    return nil;
}

@end
```

*메서드 호출*
```example
Person *me = [[Person alloc] init];
[me talk];
```



#### 매개변수를 가지는 메서드

- 객체가 특정 행위를 수행할 때 필요로 하는 부가적인 데이터(정보)를 매개변수로 전달

*메서드 정의*
```
- ('반환타입')'메서드 이름':('타입')'내부 이름' '외부 이름':('타입')'내부이름'...;
```
```example
- (id)runTo:(id)location bySpeed:(id)speed;
```

*메서드 구현*
```example
- (id)runTo:(id)location bySpeed:(id)speed {
    NSLog(@"%@로 달린다. 속도는 %@의 속도로 %@이다.", location, speed);
    return nil;
}
```

*메서드 호출*
```example
Person *me = [[Person alloc] init];
[me runTo:@"부산" bySpeed:@100];
```



#### Quick Help
- Xcode의 퀵헬프 보기 : option + click (또는 Quick Help Inspector)
- 정의부로 점프 : command + click
- 클래스, 프로퍼티, 메서드마다 퀵헬프를 볼 수 있고 작성도 가능




