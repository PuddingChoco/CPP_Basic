#pragma once

#include "Ch14_VirtualParent.h"  // ��ӹ����Ŵ� �̰� �ʿ�.

class VirtualChild : public VirtualParent // VirtualParent ���� ��� �ްڴ�. 
{
public: 
	void PrintClass();
};

class VirtualChild2 : public VirtualParent2 // VirtualParent2 ���� ��� �ްڴ�. 
{
public:
	virtual void PrintClass();
};