#pragma once
// 선언은 헤더파일에 함. 

class Car
{
	char Name[30];  // 일단 정적선언으로 해줌. 동적선언으로 하면 복잡해짐. 
	int Year;
	int Velocity;

public:
	// 생성자 함수는 클래스 이름과 똑같은 이름으로 만들어진다. ex 클래스이름(){}
	Car(int V) // parameter
	{   
		Velocity = V; // 값을 받아서 여기에 넣어라 (=)
	}
	// 함수 원형 선언
	void DriveVelocity();  // Velocity 로 뭔가 해보려고.
	void DriveTime(); // 호출이 아닌 선언이라서 int 가 들어감.
};