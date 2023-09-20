#pragma once

class PureVirtualParent // 아무것도 없는 선언부만 있는 함수
{
public:
	// 아예 구현되는거 찾을 생각도 안함. 초록색 줄도 안쳐짐->기능구현 필요없다는 뜻.
	virtual void PrintClass() = 0; // 0 대입해라 X, 아무것도 없는 순수 가상 함수라는 뜻. 
};

