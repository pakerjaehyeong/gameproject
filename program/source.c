#include<stdio.h>
void main()
{ 
#pragma region 산술 연산자

	// 1. 변수 = 변수 + 변수
	// 2. 변수 = 변수 - 리터널 상수
	// 3. 변수 = 변수 * 심볼릭 상수
	// 4. 변수 = 리터널 상수 / 리터널 상수
	// 5. 변수 = 심볼릭 상수 % 리터널 상수



#pragma endregion

#pragma region 비트
	//데이터를 나타내는 최소 단위이며, 0 또는 1의 조합으로
	//논리 계산을 수행하는 단위입니다


#pragma region (10)진수를 (2)진수로 변환하는 과정

	// 10진수를 1이 될떄 까지 계속 2로 나누어 준 다음
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다

	//ex) 23 = 10111

#pragma region (2)진수를 (10)진수로 변환하는 과정
	//1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다
	
	//각각의 비트에 1이 있다면 1과 2제곱의 위치를 계산한
	//다음 각각의 비트를 모두 더라여 10진수로 나타냅니다






#pragma endregion

#pragma endregion

#pragma endregion

#pragma region 비트 연산자(논리 연산자)
	//비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다

	//AND -&
	//OR  -|
	//XOR -^
	//NOT -~

#pragma region AND 연산자 (&)
	//두 개의 피연산자가 모두 1이면 1을 반환하는 연산자 입니다

	//int a = 10;
	//int b = 6;
	//printf("a의 값:%d\n", a);
	//printf("b의 값:%d\n", b);
	//printf("a와 b의 AND연산의 값: %d ", a & b);

#pragma endregion

#pragma region OR 연산자(|)
	//두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연사자입니다
	
	//int a2 = 8;
	//int b2 = 12;
	//printf("a2의 값:%d\n", a2);
	//printf("b2의 값:%d\n", b2);
	//printf("a와 b의 OR연산의 값:%d", a2 | b2);

#pragma endregion

#pragma region XOR 연산자(^)
	//두 개의 피연산자가 서로 같으면 0을 반환하고
	// 서로 다르면 1을 반환하는 연산자


	//int a3 = 6;
	//int b3 = 15;
	//printf("a3의 값:%d\n", a3);
	//printf("b3의 값:%d\n", b3);
	//printf("a3와 b3의 XOR연산의 값:%d", a3 ^ b3);

#pragma endregion

#pragma region NOT 연산자(~)
	//하나의 비트를 반전시키는 연산자 입니다

	//int a4 = 13;
	//printf("a4의 NOT연산의 값은:%d",  ~ a4 );
	//위 코드의 값 -14

	//첫 번째 비트는 부호를 나타내며,
	//첫 번째 비트에 1이 있다면 값은 음수입니다 (부호 비트 라고 칭함)

#pragma endregion



#pragma endregion





#pragma endregion







}


