#include "io.h"

#include <vector>

using namespace std;

void VectorClass(){    // 외부 클래스는 아님. C++ 에 있는 애들 가져와 쓴것임. 

	// vector 는 동적생성 때문에 많이 사용함.  vector는 배열과 비슷   vd: vector data 줄인말 변수로 씀
	vector<int> vd1;      // 배열 생성, 선언  (vd1 는 원수 개수, 내용 모두 지정되지 않음. 변수만 만들어 놓음(vector 에서는 가능))
	vector<int> vd2(3);   // 원소 개수  (원소 3개짜리 배열 선언)
	vector<int> vd3(3,2); // 원소 개수와 원소 내용 모두 지정됨 (원소 3개짜리 배열 선언 하고 그 내용을 다 2로 채워줌) 

	// 원소들 동적생성 한거니까 필요할때마다 넣어주는것임. 
	vd1.push_back(10); // push 넣는다 back 뒤에    
	cout << vd1.front() << endl;

	vd1.push_back(55);  
	cout << vd1.at(1) << endl;

	vd1.push_back(77);
	cout << vd1.size() << endl;

	vd1.pop_back(); // 빼라
	cout << vd1.size() << endl;  // 빠졌는지 사이즈로 확인해보면 됨.  size() 는 원소 개수 출력해줌. 
	cout << vd1.capacity() << endl;  // capacity() 는 찜해놓은 공간까지도 출력해줌. 
}