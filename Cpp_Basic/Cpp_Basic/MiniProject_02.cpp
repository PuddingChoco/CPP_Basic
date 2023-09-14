#include "io.h"

void BallInsert()
{	
	int BasketCount;
	cout << "바구니의 개수를 입력해주세요 : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "공 넣는 횟수를 입력해주세요 : ";
	cin >> InsertCount;   // 싸이클 횟수 (몇번 돌거냐)

	int* pBasket = new int[BasketCount];
	// 처음 바구니는 공이 없어야함.
	for (int i = 0; i < BasketCount; i++)
	{
		pBasket[i] = 0;  
	}

	// 3개의 값 받기 
	int StartBasketNumber, EndBasketNumber, BallNumber;
	for (int i = 0; i < InsertCount; i++)
	{
		cout << "시작 바구니 번호 : "; 
		cin >> StartBasketNumber;  // 얘가 인덱스니까 하나 빼야함
		cout << "종료 바구니 번호 : ";
		cin >> EndBasketNumber;  // 얘가 인덱스니까 하나 빼야함
		cout << "넣어줄 공 번호 : ";
		cin >> BallNumber;

		// 시작바구니 끝 바구니 모두 인덱스니까 -1 해주기. 
		for (int j = StartBasketNumber-1; j <= EndBasketNumber-1; j++) //EndBasketNumber 포함되어야함.
		{
			pBasket[j] = BallNumber;
		}
	}

	for (int i = 0; i < BasketCount; i++) // 배열개수가 되어야함. 
	{
		cout << pBasket[i] << " : ";

	}

	cout << endl; 
}



void BallSwap()
{
	int BasketCount;
	cout << "바구니의 개수를 입력해주세요 : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "공 맞바꾸는 횟수를 입력해주세요 : ";
	cin >> InsertCount;   

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) // 각 번호별로 똑같은 숫자 들어가니까 (?)
	{
		pBasket[i] = i+1;  // 0, 1,2,3,4, 가 되니 + 1 해주기 
	}

	// 맞바꾸기
	int LeftBasketNumber, RightBasketNumber, temp; //맞바꿀때 잠시 저장할 temp 필요함 

	for (int i = 0; i < InsertCount; i++)
	{
		cout << "왼쪽 바구니 번호 : ";
		cin >> LeftBasketNumber;  
		cout << "오른쪽 바구니 번호 : ";
		cin >> RightBasketNumber;  
		
		// swap
		temp = pBasket[LeftBasketNumber - 1]; // 실제번호는 0번부터 따지지 않으니 -1 해주기 
		pBasket[LeftBasketNumber - 1] = pBasket[RightBasketNumber - 1];
		pBasket[RightBasketNumber - 1] = temp; 
	}

	for (int i = 0; i < BasketCount; i++) // 배열개수가 되어야함. 
	{
		cout << pBasket << " : ";

	}

	cout << endl;
}