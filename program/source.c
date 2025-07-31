#include<stdio.h>

void initialize() // 함수 reg에 있는 함수
{
	
	printf("initialize");

}



float get_temperature()
{
	return 36.5f;
}


void updata_position(int x,int y)
{

	printf("x = %d, y = %d\n",x,y);

	
}

void pirnt_status(char grade, int height, float temperature)
{
	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("등급 : %f\n", temperature);



}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다

	// initialize();














#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다





	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다
	// printf("온도: %f\n", get_temperature());




#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다

	updata_position(36,-9);

	// 메개 변수는 함수 내부에서만 연산이 이루어지며
	// 함수가 



#pragma endregion




















}