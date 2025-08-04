// Class10th(Function).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdarg.h>


void initialize() // 함수 reg에 있는 함수
{

	printf("initialize");

}


float get_temperature()
{
	return 36.5f;
}


void updata_position(int x, int y)
{

	printf("x = %d, y = %d\n", x, y);


}


void prirnt_status(char grade, int height, float temperature)
{
	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("등급 : %f\n", temperature);



}


void swap(int* a, int* b)
{
	int c = *a;


	*a = *b;
	*b = c;


}


void find(int count)
{


	if (count <= 0)
	{
		return;
	}
	printf("%d\n", count);


	find(count - 1);
}


inline square(int x)
{
	return  x * x;

}


double average(int count, ...)
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다
	va_list pointer;
	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수 입니다
	va_start(pointer, count);
	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수 입니다

	double sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}
	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화 하는 함수입니다
	va_end(pointer);

	return sum / count;

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


#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사해서 전달하는 방식의 함수입니다
	// printf("%d\n", square(9));



	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가
	// 빠르지만, 인라인 함수를 많이 사용하게 되면 함수의 코드가 
	// 복사되기 때문에 실제 파일의 크기가 커지게 됩니다



#pragma endregion


#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다


	// printf("%lf\n", average(4, 80, 90, 75, 60));

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
