#pragma once

#include "Ch14_VirtualParent.h"  // 상속받을거니 이거 필요.

class VirtualChild : public VirtualParent // VirtualParent 에서 상속 받겠다. 
{
public: 
	void PrintClass();
};

class VirtualChild2 : public VirtualParent2 // VirtualParent2 에서 상속 받겠다. 
{
public:
	virtual void PrintClass();
};