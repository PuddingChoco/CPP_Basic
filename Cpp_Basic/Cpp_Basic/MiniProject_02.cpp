#include "io.h"

void BallInsert()
{	
	int BasketCount;
	cout << "�ٱ����� ������ �Է����ּ��� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �ִ� Ƚ���� �Է����ּ��� : ";
	cin >> InsertCount;   // ����Ŭ Ƚ�� (��� ���ų�)

	int* pBasket = new int[BasketCount];
	// ó�� �ٱ��ϴ� ���� �������.
	for (int i = 0; i < BasketCount; i++)
	{
		pBasket[i] = 0;  
	}

	// 3���� �� �ޱ� 
	int StartBasketNumber, EndBasketNumber, BallNumber;
	for (int i = 0; i < InsertCount; i++)
	{
		cout << "���� �ٱ��� ��ȣ : "; 
		cin >> StartBasketNumber;  // �갡 �ε����ϱ� �ϳ� ������
		cout << "���� �ٱ��� ��ȣ : ";
		cin >> EndBasketNumber;  // �갡 �ε����ϱ� �ϳ� ������
		cout << "�־��� �� ��ȣ : ";
		cin >> BallNumber;

		// ���۹ٱ��� �� �ٱ��� ��� �ε����ϱ� -1 ���ֱ�. 
		for (int j = StartBasketNumber-1; j <= EndBasketNumber-1; j++) //EndBasketNumber ���ԵǾ����.
		{
			pBasket[j] = BallNumber;
		}
	}

	for (int i = 0; i < BasketCount; i++) // �迭������ �Ǿ����. 
	{
		cout << pBasket[i] << " : ";

	}

	cout << endl; 
}



void BallSwap()
{
	int BasketCount;
	cout << "�ٱ����� ������ �Է����ּ��� : ";
	cin >> BasketCount;

	int InsertCount;
	cout << "�� �¹ٲٴ� Ƚ���� �Է����ּ��� : ";
	cin >> InsertCount;   

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) // �� ��ȣ���� �Ȱ��� ���� ���ϱ� (?)
	{
		pBasket[i] = i+1;  // 0, 1,2,3,4, �� �Ǵ� + 1 ���ֱ� 
	}

	// �¹ٲٱ�
	int LeftBasketNumber, RightBasketNumber, temp; //�¹ٲܶ� ��� ������ temp �ʿ��� 

	for (int i = 0; i < InsertCount; i++)
	{
		cout << "���� �ٱ��� ��ȣ : ";
		cin >> LeftBasketNumber;  
		cout << "������ �ٱ��� ��ȣ : ";
		cin >> RightBasketNumber;  
		
		// swap
		temp = pBasket[LeftBasketNumber - 1]; // ������ȣ�� 0������ ������ ������ -1 ���ֱ� 
		pBasket[LeftBasketNumber - 1] = pBasket[RightBasketNumber - 1];
		pBasket[RightBasketNumber - 1] = temp; 
	}

	for (int i = 0; i < BasketCount; i++) // �迭������ �Ǿ����. 
	{
		cout << pBasket << " : ";

	}

	cout << endl;
}