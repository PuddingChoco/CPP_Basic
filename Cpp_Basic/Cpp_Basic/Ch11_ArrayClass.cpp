#include "io.h"
#include <array> // Array ��� �������

using namespace std; // ArrayClass()�� std namespace ����ؾ��ϹǷ� �̰� ����. �̰� ������ std::array �̷��� �����(9��° ��)

// Ŭ���� Ÿ������ ��ü�� �����ϰڴ�. �� �ȿ� ����ִ� �������� ��ɵ� ���� ����ϰڴ�. 
void ArrayClass() // Ŭ�������� ������Ƽ�� �޼ҵ尡 �ִ�. 
{   // array Ŭ���� Ÿ������ �������� Number �迭 
	array < int, 3 > Number = { 10,20,30 }; // �ν��Ͻ� ����  arrayŬ����Ÿ��<������ �� Ÿ��   Array�����̸�(�������� �ȿ� �� �ֵ� int Ÿ���̴�)
	                                        // �� �ٲ� ���� Number = { 1,2,3 }; 
	cout << Number.size() << endl;  // size()�� �迭 ũ��  �̰� Number ��� �迭�� ���� �Լ���.    ps.������ ������ sizeof() ����. 
	cout << Number.front() << endl; // ù ��° ���� ���
	cout << Number.back() << endl; // ������ ���� ���
	cout << Number.empty() << endl; // ����ִ��� üũ�ϴ°�. ��������� true �� 1,  �Ⱥ�������� false ��, 0 
	cout << Number.at(2) << endl;  // at: ~��   ( ) �ȿ� �ִ� �ε��� ��ȣ��°�� ���� ����ش޶�. 
}