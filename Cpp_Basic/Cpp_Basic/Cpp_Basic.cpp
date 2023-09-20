// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Cpp_Basic.h"
#include "io.h"

#include "Ch10_Class.h"
#include "Vehicle.h"  // 이거 넣어줘야 Vehicle 이 인식이 됨.
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "AutoCar.h"
#include "Ch14_VirtualParent.h"
#include "Ch14_VirtualChild.h" // 가상함수_사실 부모꺼 말고 자식꺼만 포함하면 됨. 
#include "Ch15_PureVirtualParent.h"
#include "Ch15_PureVirtualChild.h"

//#define PLUS (2 + 3)


int main()
{
    cout << "Hello SeSac!\n";

    //BallInsert();
    //BallSwap();

    //DriveVelocity();  클래스 했으면, 이렇게 쓰면 안됨. 

    /*
    Car Sonata(80); // Sonata의 Velocity가 80으로 되기 때문에 --->

    Sonata.DriveVelocity(); //여기에 궃이 80 넣지 않아도 됨 
    Sonata.DriveTime();     //여기에 궃이 80 넣지 않아도 됨 
    */

    cout << " ------- class 정적 선언 ------- " << endl;

    // class 정적 선언 
    Vehicle Ray(2023, 12000000);  // 실체가 만들어짐. Ray는 이제 . 을 통해서 안에 있는 애들 쓸 수 있음.
                                  // Ray 라는 '인스턴스' 생성되면서 값을 초기화 해줌.
    // Ray.PrintYear();  // 함수 호출해줌.
    Ray.PrintPrice(); // 얘는 왜 가능? -> public 이기 때문에. 
    //Ray.PrintYear = 2022; // 클래스 외부(main)에서 접근 못함. Year는 private 이니까. <외부에서 수정 불가능>
    Ray.Price = 10000000; // Vehicle.h 에서 int Price를 public 영역으로 옮기니까 접근 가능. <외부에서 수정 가능>

    // 수정하고 싶을때 -> EditYear는 public 으로 되어있으니 접근해서 Year 바꿔줄 수 있음. 
    Ray.EditYear(2021);
    Ray.PrintYear();

    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;  // endl 대신 "\n" 써도 됨. 

	
    Vehicle Sonata; // 아무것도 없이 이렇게 선언도 가능함. 만약 Vehicle.h파일의 생성자가 Vehicle(int _Year, int _Price); 만 있으면 오류남.
                     // 이거 되게 하려면 Vehicle(); 이런 default 생성자도 필요함. 
                     // 암묵적으로 생성되는거랑 명시해주는거랑 다름. 
    // x Vehicle(int _Year, int _Price); // 생성자 오버로딩 


    cout << " ------- class 동적 선언 ------- " << endl;

    // class 동적 선언(생성)
    // int* a = new int;   *a = 10;  했던것처럼,
    Animal* Dog = new Animal;   // Animal 은 클래스지만, int, float 처럼 타입으로 쓸 수 있다. 
// *Dog.PrintFinger() 이렇게 안씀! 아래와 같이 쓴다.  쩜. 대신에 화살표 쓴다. 
    Dog->PrintFinger();  // Dog 안에 들어있는 PrintFinger 
    // 이런 화살표 본다면 포인터 생각하기, 앞에 있는 Dog 가 '동적 선언' 되어있구나 라고 생각하면 됨 = 클래스가 주소 담고 있구나.

    delete Dog; // 동적생성 했으면 소멸도 해주기. 안해줘도 상관 없지만, 언리얼엔진에서, 게임에서는 해주는게 좋음. 안하면 memory overflow 오류 생길 수도 있음.
    
    cout << " -------------상속-------------- " << endl;

    // 자식 클래스 생성
    Atv Moto;  // Atv 클래스 타입으로 Moto 만들어줌.

    // 상속받은 Bike의 class 멤버
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class 멤버 
    Moto.PrintPrice();

    cout << " -------------함수 오버로딩-------------- " << endl;
    /*
    // 함수 오버로딩
    Arithmatic Expression;
    Expression.Sum(10);
    Expression.SumFloat(10.123);
    */

    // 함수 오버로딩
    Arithmatic Expression;
    Expression.Sum(10);

    Expression.Sum(10.123f); // f 않넣으면 자동으로 double로 인식함. 

    Expression.Sum(60, 70);


    cout << " ------------함수 오버라이딩------------- " << endl;
    // 함수 오버라이딩
    Moto.Print();

   
    // 생성자가 명시적으로 선언
    // 자식 클래스 선언 : 명시적 선언 
    // Auto Mobile(); --> 얘는 다음에 다시 
    cout << " -----------생성자 명시적 선언------------- " << endl;
    
    Auto Mobile;    
    Auto Avante(2024, 1000000); 

    cout << " ----------Array Class 출력-------------- " << endl;
    ArrayClass();

    cout << " ----------String Class 출력-------------- " << endl;
    StringClass();


    cout << " ----------Vector Class 출력-------------- " << endl;
    VectorClass();

    cout << " ----------가상함수 출력-------------- " << endl;

    //VirtualParent Parent;
    //VirtualChild Child;

    //Parent.PrintClass();

    //Child.PrintClass(); // Overriding 작동 
    // 정적 함수는 이미 메모리에 올라가 있어서, 부모것도 그대로 나옴.
    
    
    
    VirtualParent* Parent = new VirtualParent;
    VirtualChild* Child = new VirtualChild;

    Parent->PrintClass();
    Child->PrintClass(); // Overriding 작동 

    Parent = Child;  // 대입했지만, 정적으로 선언했기때문에 (?)

    Parent->PrintClass();



    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass(); // 부모 클래스를 따로 쓸 수도 있다. 
    Child2->PrintClass(); // Overriding 작동 

    Parent2 = Child2;  

    Parent2->PrintClass();
    // 동적 함수는 실행될떄 작동함. 

    cout << " -----------순수함수 출력-------------- " << endl;
    // PureVirtualParent PureParent; => 추상클래스는 단독으로 객체 생성할 수 없음. 

    // 추상 클래스를 상속받는 자식 클래스는 순수 가상함수를 재정의 해야함 ---> 안해서 오류난거.
    PureVirtualChild PureChild; 

    PureChild.Print();
    PureChild.PrintClass();

    cout << " ------------함수 오버로딩-------------- " << endl;
    cout << SumNumber(3, 2) << endl;
    cout << SumNumber(3.23f, 5.645f) << endl;

    cout << " ---------------템플릿----------------- " << endl;
    cout << SumType(10, 20) << endl;
    cout << SumType(10.567, 20.321) << endl;
}                    




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
