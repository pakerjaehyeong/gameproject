#include<stdio.h>
void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최대값의 범위를
	// 넘어서 연산을 수행하는 과정입니다

	//char storage = 127 + 1;
	//printf("변수 storage의 값:%d", storage);

	//char의 표기 가능한 최대 값은 -128~127 
	//127의 2진수 (0111 1111) 127 + 1 의 2진수(0111 1111 + 0001)= (1000 0000)= -128
	//오버플로우된 값 -128

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	//실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력됩니다
#pragma endregion

#pragma region 언더플로우
	//특정한 자료형이 표현할수 있는 최솟값의 범위를
	//넘어서 연산을 수행하는 과정입니다

	//char data = -128 - 1;

	//printf("변수 data의 값:%d\n", data);

	//출력결과 127 이유는 오버플로우와 같다 
	//언더플로우는 부호 없는 자료형에서도 똑같이 발생하며
	// 실수일 때 언플로우가 발생하면 0이라는 값으로 출력됩니다
#pragma endregion

#pragma region 부호없는 자료형 (unsgined) 

	//unsigned int count = 4294967295;
	//
	//// [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	//printf("sigend count 변수의 값 : %d\n", count);
	//
	//// [1111 1111] [1111 1111] [1111 1111] [1111 1111]
	//printf("unsigned cout 변수의 값: %u\n", count);


#pragma endregion

}