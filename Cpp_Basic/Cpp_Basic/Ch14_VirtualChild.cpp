#include "Ch14_VirtualChild.h"

#include <iostream> // io.h 해도 됨 (3,4 번째 줄 대신)
using namespace std;

void VirtualChild::PrintClass()
{
	cout << "Virtual Child Class" << endl;
}

void VirtualChild2::PrintClass()
{
	cout << "Virtual Child2 Class" << endl;
}

