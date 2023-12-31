﻿# 프로그래밍(네이밍) 표기법
- 프로그래밍 언어에서는 대소문자 구분 
- 가독성와 연관
- 변수, 함수, 클래스 등의 이름 정할 때 여러개의 영단어를 사용할 때 각각의 단어를 구분 

#### 일반적인 문장 : unreal enginen function variable ,  <표기법 4가지> 

- Snake Case : unreal_engine_function_variable
- Kebab Case : unreal-engine-function-variable
- Camel Case : unrealEngineFunctionVariable
- Pascal Case : UnrealEngineFunctionVariable

## 명령어, 예약어    ex. cout, cin, using namespace 

- C++에서 명령어로 사용되기로 정해져 있는 구문
- 변수, 함수의 이름을 명명할 때 예약어와 중복되지 않도록 이름을 명명하여야 함.

##### 주석
    - 실행되지 않는 설명 부분

##### 데이터 종류 (값의 종류)
    - 숫자
    - 정수형 타입
    - 실수형 타입
    - 문자

## bit, byte  (8 bit => 1 byte)
- bit : 컴퓨터 데이터의 최소 단위 (이거 하나갖고는 아무 의미 없음. 그래서 bit 모아서 byte 만듬)
- byte : 컴퓨터 데이터 의미의 최소 단위 (byte 정도는 되야 의미가 있다)

컴퓨터가 사용하는 숫자 진법(진수): 2진수 (0,1)
* 2진수, 16진수는 프로그래밍 언어에서 많이 씀

참고)
8진수: 사용하는 숫자가 8개 (0,1,2,3,4,5,6,7)    
10진수: 사용하는 숫자가 10개 (0,1,2,3,4,5,6,7,8,9)
16진수: 사용하는 숫자가 16개 (0,1,2,3,4,5,6,7,8,9 그리고 나머지는 알파벳에서 사용한다 --->
A,B,C,D,E,F)

1 bit => 1비트 메모리 공간에는 0, 1 저장 가능 (1비트 메모리 한 칸에 두 가지를 저장 가능)

(0과 1로 이루어져 있는 데이터를 어떤 인코딩 과정을 거쳐서 어떤것을 나타낼것인가 숫자? 색깔? 음악? 
-> 이건 소프트웨어의 몫. '인코딩' 을 해석해서)

2 bit => 2 * 2 => 4개  (첫 번째 칸도 두 개, 두 번째 칸도 두 개)
3 bit => 2 * 2 * 2 => 8개  (첫 번째 칸도 두 개, 두 번째 칸도 두 개, 세")
4 bit => 2 * 2 * 2 * 2 => 16개  (첫 번째 칸도 두 개, 두 번째 칸도 두 개, 세", 네")
...
8 bit => 2^8 => 256

1. 네트워크 ip address
   ex) 192.168.0.1 / [0~255].[0~255].[0~255].[0~255]

2. 색 표현 (RGB color - 24bit true color)  24bit = 2^24
   R - 8bit
   G - 8bit
   B - 8bit
   Red : #FF0000
          R G B

참고) 음악(아날로그) -> 디지털로 바꾸는 과정에서 bit 로 표현. 아날로그에 가깝게 잘게 쪼개면 쪼갤수록 음질이 좋아짐

3. 문자 표현 : UTF-8, EUC-KR
   - UTF-8 : 2 byte 를 사용해서 여러 문자를 표현함.  2byte = 16bit

연산자와 연산
- 값과 값 사이에 위치하는 기호 : 연산자 

대입연산 
- 대입연산자 : =
- 리터럴 상수값을 변수에 대입  (리터럴 상수: 실제 그 값(숫자, 문자) 자체)

증감연산
- 증가, 감소 연산
- 특정 정수 값의 크기만큼 증가 또는 감소

논리연산
- 참/거짓 판단하는(다루는) 연산
- AND(그리고) 연산 : &&   ampersand 라고 부름.  (AND 연산자는 이렇게 나타냄) 
- OR(또는) 연산 : ||    pipe 라고 부름.
- NOT(부정) 연산 : !

비트 연산
- 10진수 숫자 값, 문자 값을 그대로 데이터로 다루는 것이 아니라 2진수 데이터로 변경한 후 2진수 데이터를 연산
- 비트 연산은 각 자리수 2진수 끼리 연산
- 비트 이동 연산 : 각 비트의 자리를 이동하는 연산  (방향은 오른쪽이 될 수도 왼쪽이 될 수 도 있다)

삼항 연산
- 조건식(비교식) 결과값이 true / false  (bool 타입) 일때,
- true 이면 콜론(:) 기준 앞의 값이 선택됨
- false 이면 콜론(:) 기준 뒤의 값이 선택됨

if / else if / else
- 표현식의 결과값이 true/false 인지 판단해서 각 해당 분기의 명령 실행

if (표현식1)
{                                       중괄호 이렇게 { } 해주는것을 '코드 블럭' 이라고 한다.
  표현식1이 참일 때 실행 
}
else if (표현식2)
{
  표현식2가 참일 때 실행
}
else
{
  앞선 표현식이 모두 거짓일 떄 실행 
}

- if 구문의 실행 분기 선택 여부는 if가 다루는 bool type 값(true/false)에 따라서 결정
- if 옆의 값이 사용되는 괄호 부분에 bool type 값이 사용되면 분기 선택이 가능 (즉, bool type 이라면 어떤거라도 (다양햔 표현식) 사용 가능, 숫자로도 bool type 으로도 인식 가능)   ex. if(10){  }
- true/false => 1/0 으로 표현 가능, 0제외한 정수는 모두 true로 쓸 수 있다.

if(true)
{
  실행 구문
}

if(false)
{
  실행 구문
}

if(1+1)         이거도 가능 ---> 숫자 2는 bool type에서 true 로 인식한다. 
{

}

* 왜 '표현식' 이라고 할까? ---> 비교연산은 true false같이 bool 타입의 결과값이 나오게 된다. 그러므로
  if( ) 의 bool 타입의 결과값에 따라서 실행이 '분기'된다 라고 생각하자.


// switch 
// 수식(연산식)의 숫자/문자 결과에 따라 실행 분기를 선택(결정)

switch()
{
  case:
    실행구문1
  case:
    실행구문2

  ...
  case:
    실행구문...
}

for(구문1; 구문2; 구문3)
{
  코드블럭 
}

- 구문1 : for 처음 실행될 때 한 번만 실행
- 구문2 : for 반복문(loop)이 반복 실행될 때 코드블럭이 실행되기 전 실행되는 구문  (조건을 비교하는 비교 구문)
- 구문3 : for loop가 반복 실행될 때 코드블럭을 실행한 이후에 실행되는 구문
- 구문 2 : 조건식, 구문 3 : 증감식

// (변수선언 초기화구문; 조건비교; 증감식)        int i=0 가 하나의 구문이다. 
for(int i=0; i<10; i++)                      증감식 어떻게 넣는냐에 따라 반복횟수가 달라짐 
{
  실행 구문 
}


- while
- 조건식이 참인 동안   (while 은 보통 어떤 조건이 되면 참이 되게끔해서 코드가 반복되게 할때 쓴다)
- 코드 블럭을 실행하기 전 조건식 비교 실행
while(조건식)
{
  코드블럭
}


- do ~ while : 코드 블럭을 실행한 이후에 조건 비교    (do ~ while 은 한번 무엇인가를 먼저 실행해야할때 쓴다, do ~ while 은 do 쓰고 바로 코드블럭이 나옴)

do
{
  코드블럭
}
while(조건식 )

parameter(형식 매개변수) 와 arguemnt(실제 매개변수)

< 함수 선언(정의) >        형식 매개변수 
void Function(para)  ==> parameter (함수정의할때 쓰임)
{

}

< 함수 호출 >      실제 매개변수 
Function(10); ==> argument (실제 넣어주는 값, 함수호출할때 쓰임)


# 클래스 

- 객체 지향 프로그래밍의 대표적인 기법
- 구조체로부터 업그레이드 된 기법
  - 구조체 : 변수로만으로 구성된 집합체 
  - 클래스 : 변수와 함수로 구성된 집합체

- 객체지향 프로그래밍의 특징
  - 추상화 : 설계도 만들어서 공장에서 물건 찍어내듯이 만들어 내는것)
  - 캡슐화 : 하나로 묶어주는것   참고)함수에서도 묶어주는게 있었는데 그건 캡슐화 보다는 '패키징' 이라고 많이 부름.
  - 정보 은닉 : 정보를 잘 드러내지 않고 잘 감출 수 있다 -> 보안에 좋다, 요즘 많이 쓰임 파이썬에도
  - 상속성 : 클래스가 많들어져있고, 그 클래스의 특징이나 원소를 '물려받는다' 
  - 다형성 : 

- 클래스의 구성   참고)[변수]들은 물리적으로 어떤 데이터가 담기는지를 따짐 VS [구조체]는 데이터 항목이 '의미'를 가지고 있었음. 구조체같이 데이터를 의미로 접근 + 그 데이터를 기능까지도 한 군데 다 들어가있다. 
  - 변수 : 멤버면수 / 프로퍼티
  - 함수 : 멤버함수 / 메소드
  
- 클래스의 의미
  - 클래스 : 설계도 (실체가 없다. 그냥 설계도임  ex. 롤스로이스 설계도 )
  - 객체 / 인스턴스 : 클래스를 통해서 생성된 실체 (얘가 실체!  ex. 실제 롤스로이스 )

### 선언

#### 구조체 선언

```
struct Car    // Car 라는 타입을 만들은것임. 변수 X    ------ 여기서부터 
{
  char Name[30];
  char Mode[30];
  int Year;
  int TireSize;
  char Color[30];
}                                           ------ 여기까지는 구조체라고 볼 수도 있음.

void Drive(char Name[30]){}   // 얘네들은 구조체 중괄호 { } 에 안들어가있고 따로 떨어져 있다. 즉, BMW 전용이 아니고 Jeep것도 아니고 '범용'이다. 
void Break(char Name[30]){}   // 누구를 브레이크 할건지 받은거라서 char name[30] 이라고 써준것. 
void Parking(char Name[30]){}
void Rear(char Name[30]){}     

Car BMW = { "X7", "xDrive40i", 2023, 23, "Black" }  

Car Jeep = { "Rubicon", "Mountain", 2021, 26, "Blue" }

cout << BMW.Year << endl;   // BMW.year 는 BMW 거 맞음(구조체에 있으니). 근데 함수는 얘네들꺼 아님. 

cout << Jeep.Year << endl; 

Drive("X7")   // 함수 쓰고싶다면, 그냥 호출하면 됨. 그냥 범용 버스같은, 그냥 갖다 쓰면 됨. 
Drive("Rubicon") 
// 위 두 Drive() 는 같은거다. 그냥 시내버스에 X7 태우고 Rubicon 태운것

```

#### 클래스 선언
```
class Car
{
  char Name[30];
  char Mode[30];
  int Year;
  int TireSize;
  char Color[30];

void Drive(){}   // 이 함수들은 객체인스턴스의 전용이다. 
void Break(){}
void Parking(){}
void Rear(){}   
}

Car Sonata;

cout << Sonata.Year << endl;   // Sonata.year 는 Sonata꺼. 
Sonata.Drive()   // Sonata.Drive() 도 Sonata 꺼.  여기서의 Drive는 소나타 사람꺼. Ray 꺼랑 다름.

Car Ray;
cout << Ray.Year << endl;
Ray.Drive()   // 여기서의 Drive는 레이 사람꺼다. 레이 전용임. 
}


정리) 구조체는 자기 함수가 없으니 시내버스로 다니는것
     클래스는 자기 함수가 있어서 자기차로 다니는것
```


## 생성자(Constructor) 와 소멸자(Destructor)

### 생성자 
  - 클래스 타입의 변수가 생성될 때 초기화하는 함수 (클래스 객체가 처음 생성될떄, 클래스 안에 있는 프로퍼티와 메소드를 초기화 해준다. 생성자는 함수의 형태를 가지고 있다) 
  - 초기화 기능 / 초기화가 진행된 후, 그것과 연계해서 다른 기능을 동작하게 할 수 있다. 

### 소멸자
  - 클래스 쓰임새가 다했거나 프로그램 종료시 생성되었던 클래스를 해제하는 함수. 
  - 소멸 기능 / 클래스 소멸이 진행된 후, 그것과 연계해서 다른 기능을 동작하게 할 수 있다.
  

# 함수 오버 로딩

  - 같은 클래스에서 같은 이름의 함수에 매개변수를 다르게 사용함으로써 같은 함수에 여러가지 매개변수를 사용할 수 있는 것처럼 구현.


# 연산자 오버 라이딩

  - 부모 클래스에 함수와 자식 클래스의 함수 이름이 동일하게 사용됨으로써 부모클래스의 함수가 숨겨지는 기능.
  

# 라이브러리, 프레임워크 사용
## 특정기능 활용

## API(Application Programming Interface)
  - 컴퓨터나 컴퓨터 프로그램 사이의 연결이다.
  - 일종의 소프트웨어 인터페이스이며 다른 종류의 소프트웨서 서비스를 제공한다. 

### 라이브러리 클래스

  - array 클래스
    - 정적 생성
  - vector 클래스 
    - 동적 생성 

  - string 클래스 (문자열에 특화됨)
    - 정적 생성

# 다형성
  - 동일한 이름의 클래스 메소드가 다양한 형태로 사용되는 것
  - 오버로딩(Overloading), 오버라이딩(Overriding)
    - 오버로딩: 과적한다, 쌓는다 (동일한 함수를 쌓아놓는것 -> 함수 이름은 동일하지만 매개변수 다른애들 쌓아놓고 적절한 애들 골라서 씀)
    - 오버라이딩: 무시한다 (자식클래스가 부모클래스를 상속받는데, 동일한 이름의 함수가 있을경우 부모꺼 무시, 자기꺼 씀)


# 프로그래밍 / 코딩
  - 내용적인 부분 (흐름)
  - 형식적인 부분 (ex. 클래스로 구현할지 함수로 구현할지 생각하는것)

# 가상함수
  - 부모 클래스와 자식 클래스의 상속 관계에서 필요한 개념/기법
    - 오버라이딩: 동일한 이름의 함수 중 부모클래스에 있는 함수가 무시됨
  - 부모 클래스에 있는 함수를 자식 클래스에서 오버라이딩 될 것을 예측해서 정의한 함수
    (부모클래스에 있는것은 무시될것이라는것 이미 알고있음 -> 생성할 필요 없겠구나 라고 알고 있음)
  - 부모 클래스에 있는 함수를 동적 생성하도록 가상 함수로 구현 (부모꺼 어차피 무시될거니까 쓸데없이 생성X, 동적생성때 자식꺼만 생성하는것)

# 순수 가상함수 
  - 함수의 선언만 있는 것(기능 구현이 안되어 있는 것, 선언부는 있는데 그것을 구현한 body는 없는것, 즉, 껍데기만 있음)
  - 부모 클래스를 단독으로 사용하지 않는 것을 의미 (부모 클래스에 기능이 없으니)
  - 순수 가상함수가 있는 부모클래스를 상속받은 자식 클래스는 반드시 순수 가상함수를 오버라이딩하여 사용해야한다 (오버라이딩 안하면 오류발생)
  - 순수 가상함수를 포함하는 클래스를 '추상클래스' 라 부름. 
  - 추상클래스는 단독으로 객체를 생성할 수 없고, 상속 관게에서만 사용 가능.

# this
  - this가 포함된 클래스 객체를 가리킴 
  - this 포인터는 -> 를 사용해서 멤버 변수를 표시한다. 

# Template/템플릿
  - 일반화, 공통화 프로그래밍 방식으로 구현할 때 사용하는 문법
  




























  