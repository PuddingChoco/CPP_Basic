#include "io.h"

void Structure() {
  // 구조체 서술 정의 : 하나의 '데이터 타입' 생성
  struct inflatable { // 타입은 변수가 아니니 대문자로 시작하지 않는것이 일반적.  타입은 int, float 과 비슷하기때문.
    char name[20];    // 그래서 안에 있는 애들도 소문자로 써주기 (언리얼에서는 대문자로 씀)
    float volume;
    double price;
  };

  // people 이 변수이름
  inflatable people = { "Tom", 0.75, 15.235 };

  struct sesac { // sesac 은 '타입'   구조체는 변수가 아닌 타입을 선언하는것이다.
    // 멤버 변수 
    char name[20];
    char address[100];
    char phone[20];
    int age;
  };

  sesac Banjang;
  Banjang = { "Jane", "서울시", "01012345678", 25};
  // 배열은 int a[3];    a[3] = {1,2,3};   이렇게 안되고  int a[3] = {1,2,3}; 만 가능
  // 구조체는 위의 형태 다 가능.

  Banjang.age = 30;

  }

void Enum()
{
  // enum : 열거형 데이터 타입    ex. int, float 같은..타입!
  // Sun, Mon, Tue, Wed, Thu, Fri, Sat: 열거형 '상수' 라고 함.
  // 0 부터 시작하는 양수를 열거형 상수의 값으로 할당해 준다. 
  enum day {Sun, Mon, Tue, Wed=10, Thu, Fri, Sat};  
  // 그래서 0 1 2 3 4 5 6 대체해주는 용도. --> Why? 상수 만들어서 숫자 대신 사용할 수 있게 해줌. 
  // " " 따옴표로 묶지 않았는데 오류 안나고 잘됨 ---> Why? 변수가 아니라 '상수' 이기 때문.
  day DayName;
  DayName = Sat;
  cout << DayName << endl;
switch(DayName)
  {
    case Sun:
      cout << "Bicycle";
      break;
    case Mon:
      cout << "Work";
      break;
    case Tue:
      cout << "Work";
      break;
    case Wed:
      cout << "Work";
      break;
    case Thu:
      cout << "Work";
      break;
    case Fri:
      cout << "Work";
      break;
    case Sat:
      cout << "Party";
  }  
}

void ChangeValue(int a)
{
  a = 0;
}


int ChangeValue2()
{
  return 0;
}


int c = 10;

void CallByValue()
{
  //경우1: ChangeValue(c); // c 안에 들어있는 10을 parameter로 넘겨서 하려고함.  이 경우 Call By Value 값에 의한 호출 이라고 함. 여기서는 안됨 (변수 scope 고려해야함)---> 나중에 포인터 쓰면 가능.  
  c = ChangeValue2(); //경우2: 이건됨. 
}