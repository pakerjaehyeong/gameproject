// Class7fth(Type Conversion).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include<stdio.h>
#include"../program/utility.h"

#define SIZE 5


void main()
{

#pragma region 자료형 변화
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 지정했던 자료형을 다른 자료형
	// 으로 변환하는 과정 입니다


#pragma region 암묵적 형변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 더 큰 자료형으로 변환되는 과정입니다

	//	int integer = 10;
	//	float decimal = 5.5f;
	//	
	//	float storage = integer + decimal;
	//	
	//	printf("storage 변수의 값 : %f\n", storage);

	// 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를 
	// 저장하게 되면 암묵적으로 데이터 손실이 발생합니다
#pragma endregion

#pragma region 명시적 형변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을 
	// 변환하는 과정입니다

	// int critical = 10;
	// int penetration = 3;
	// 
	// float result = critical / (float)penetration;
	// 
	// printf("%f\n", result);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과
	// 값만 가질 수 있습니다






#pragma endregion




#pragma endregion

#pragma region 단축 평가 계산 
	// 계산을 진행하는 도중에 결과를 이미 확정된 경우
	// 나머지 계산은 생략하는 과정입니다

	// int x = 0;
	// int y = 0;
	// if (x != 0 &&  y++)
	// {
	// 	printf("Sohrt circuit\n");
	// 
	// }
	// 
	// if (x == 0 || y++)
	// {
	// 	printf("frist or operator\n");
	// 
	// }
	// 
	// if (x != 0 || y++)
	// {
	// 	printf("second or operator \n");
	// }
	// 
	// printf("y의 값은 : %d", y);


#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고
	// 처리되는 과정입니다

	// printf("매크로 SIZE의 값 : %d \n", SIZE); 

	// 매크로의 경우 자료형이 존재하지 않으므로 메모리 공간을 
	// 가지고 있지 않습니다

	// ex) SIZE = 100;

	// 매크로의 과정은 컴파일 이전에 실행되며
	// 매크로 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됩니다




#pragma endregion

#pragma region 전처리기
	// 프로그램이 컴파일되기 이전에 프로그램에 대한
	// 시전 처리를 하는 과정

	// printf("code 변수의 값 : %d\n",code);

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해서
	// 처리되는 문자이기 떄문에 명령문 끝에 ";"을 사용
	// 하지 않습니다
#pragma endregion


}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
