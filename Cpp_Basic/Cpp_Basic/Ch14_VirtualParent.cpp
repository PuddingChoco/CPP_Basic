#include "Ch14_VirtualParent.h"

#include <iostream> // io.h 해도 됨 (3,4 번째 줄 대신)
using namespace std;

void VirtualParent::PrintClass()
{
	cout << "Virtual Parent Class" << endl;
}

void VirtualParent2::PrintClass()
{
	cout << "Virtual Parent2 Class" << endl;
}


