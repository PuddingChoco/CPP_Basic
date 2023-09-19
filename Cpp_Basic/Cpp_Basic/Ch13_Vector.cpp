#include "io.h"

#include <vector>

using namespace std;

void VectorClass(){    // �ܺ� Ŭ������ �ƴ�. C++ �� �ִ� �ֵ� ������ ������. 

	// vector �� �������� ������ ���� �����.  vector�� �迭�� ���   vd: vector data ���θ� ������ ��
	vector<int> vd1;      // �迭 ����, ����  (vd1 �� ���� ����, ���� ��� �������� ����. ������ ����� ����(vector ������ ����))
	vector<int> vd2(3);   // ���� ����  (���� 3��¥�� �迭 ����)
	vector<int> vd3(3,2); // ���� ������ ���� ���� ��� ������ (���� 3��¥�� �迭 ���� �ϰ� �� ������ �� 2�� ä����) 

	// ���ҵ� �������� �ѰŴϱ� �ʿ��Ҷ����� �־��ִ°���. 
	vd1.push_back(10); // push �ִ´� back �ڿ�    
	cout << vd1.front() << endl;

	vd1.push_back(55);  
	cout << vd1.at(1) << endl;

	vd1.push_back(77);
	cout << vd1.size() << endl;

	vd1.pop_back(); // ����
	cout << vd1.size() << endl;  // �������� ������� Ȯ���غ��� ��.  size() �� ���� ���� �������. 
	cout << vd1.capacity() << endl;  // capacity() �� ���س��� ���������� �������. 
}