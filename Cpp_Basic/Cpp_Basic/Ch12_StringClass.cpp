#include "io.h"

#include <string>  // string �̶�� �������

using namespace std;

void StringClass()  // ���ڴ� char Ÿ�� �����ؼ� �ϳ� ������ ������, ���ڿ��� ���� ������ �������� �迭�� ���������.
{
	string Text1 = "Hello Sesac"; // String Ÿ���� Ŭ����, Text�� ����.  �迭�Ƚᵵ �Ǵ� ������. 
	string Text2 = "Hello World";
	
	cout << (Text1 < Text2) << endl; // ũ���: ���ĺ� ������ ���ϴ°��̴�. �ڿ� ���� ���� ū��. 
	cout << (Text1 > Text2) << endl;
	cout << (Text1 == Text2) << endl;

	cout << (Text1 + Text2) << endl;  // ���� ����     ������� �� + �� �����ϰ� ������. 
	// cout << (Text1 - Text2) << endl; // �̰� ������ �ȵ�.

	cout << Text1.front() << endl; // ù ��° ���� ���
	cout << Text1.back() << endl;  // ������ ���� ���
	cout << Text1.size() << endl;  // size()�� �迭 ũ��
	cout << Text1.at(3) << endl;   // at: ~��   ( ) �ȿ� �ִ� �ε��� ��ȣ��°�� ���� ����ش޶�. 

	cout << Text1.append(Text2) << endl;  // Text1 �� Text2 �� �ٿ��ְڴ�.   + ���� �ѰͰ� ����.

	cout << Text2.substr(5) << endl; // ���ϴ� ��ŭ�� ȭ�鿡 �����ְڴ�.  (5) �ϸ�, 5��°���� ������ �����ְڴٴ� ��. 
	cout << Text2.find("Hello") << endl; // Text2 ã�Ƽ� �ֳ�, ������ ã�ƴ޶�. ��� ������� �ִ���. �׷��� 0 ����. 

}