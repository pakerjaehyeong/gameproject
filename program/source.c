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


void prirnt_status(char grade, int height, float temperature)
{
	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("등급 : %f\n", temperature);



}


void swap(int * a, int * b)
{
	int c = *a;

	
	*a = *b;
	*b = c;

	
}


void find(int count)
{
	
	
	if(count <= 0)
	{
		return;
	}
	printf("%d\n", count);


	find(count - 1);
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

	// updata_position(36,-9);

	// 메개 변수는 함수 내부에서만 연산이 이루어지며
	// 함수가 종료되면 메모리에서 해제됩니다

	// prirnt_status('s', 175, 37.21f);

	// 하나의 함수에 서로 다른 자료ㅗ


#pragma endregion

#pragma region 인수
	// 힘수가 호출될 때 매개 변수에 실제로 전달되는 값입니다

	

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수
	// 있는 인수의 수가 결정되며, 값을 전달하는 인수와 값을
	// 전달 받는 매개 변수의 자료형이 서로 일치해야 합니다

	// int x1 = 10;
	// int y1 = 20;
	// 
	// printf("바뀌기 전 변수 x1의 값: %d%\n", x1);
	// printf("바뀌기 전 변수 y1의 값: %d%\n", y1);
	// 
	// swap(&x1, &y1);
	// 
	// printf("변수 x1의 값: %d%\n", x1);
	// printf("변수 y1의 값: %d%\n", y1);

	
#pragma endregion
	
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여
	// 작업을 수행하는 함수입니다

	
	// find(3);


	// 재귀 함수는 함수를 계속 사용하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다
#pragma endregion






















}