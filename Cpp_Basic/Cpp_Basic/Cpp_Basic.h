void OvenTime(); 
void Quadrant();  // 원형 선언
void LeapYear();
void SizeComparison();
void InputOutput();  
void Variable();
void VariableTypeNumber();
void VariableTypeCharacter();
void VariableTypeBool();
void OperationArithmetic(int Arith1, int Arith2);
void OperationIncrementDecrement();
void OperationComparison();
void OperationLogical();
void OperationBit();
void OperationThree();
void StatementIf();
void StatementSwithch();
void StatementNestedIf();
void StatementFor();
void StatementWhile();

int GuGuDan(int Dan); 
void VarScope(int Number);

void MultipleCalculate();
void Receipt();
void Star1();
void Star2();

void DefineArray();
void CountNumber();
void LessNumber();
void MissingNumber();
void BubbleSort();
void String();
void Structure();
void CallByValue();
void IndexChar();
void AlphaNumber();
void Enum();
void TwoDimension();

//void MaxMini();
void PointerDefine();
void DynamicVariable();
void BallInsert();
void BallSwap();

// C++ 에 있는 클래스들 가져다 쓰기
void ArrayClass();
void StringClass();
void VectorClass();

int SumNumber(int a, int b);
float SumNumber(float a, float b);

// 템플릿은 선언부분, 구현부분 다 .h 에 하면 됨. 
template <typename T> // 여기서 T 는 templete T 임.  T는 고정된거 아님. 그냥 다른거로 바꿔도 됨. 대신 맞춰주기.
T SumType(T a, T b) // T 에 어떤 타입이 들어와도 됨. int 든 float 이든. 
{
    return (a + b);
};


