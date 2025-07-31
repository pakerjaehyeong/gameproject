// Class9th(Array).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다

	// int list[5] = {10,20,30,40,50};

	// 배열에 첫번쩨 원소는 0번쨰 부터 시작합니다

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("list[%d] = %d\n",i, list[i]);
	// }

	// 배열의 메모리 공간은 프로그램이 실행되는 동안
	// 변경할 수 없습니다


	// int array[] = { 10,20,30,40,50 };
	// 
	// int size = sizeof(array) / sizeof(array[0]);
	// 
	// printf("%d", size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("array[%d]의 값 : %d\n", i, array[i]);
	// 
	// }
	// 
	// // 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// // 설정한 요소에 따라 배열의 크기가 결정 됩니다
	// 
	// printf("배열의 시작 주소는 : %p\n", array);
	// 
	// int* pointer = &array[0];
	// 
	// pointer = pointer + 1;
	// 
	//  *pointer = 23;
	// 
	// printf("pointer가 가르키는 값: %d\n", *pointer);


	// 배열은 연속적인 메모리 공간을 가지고 있으며, 배열의 이름은
	// 배열의 시작 주소를 가리킵니다





#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자변수의 
	// 집합입니다

	// const char* message = "packet";
	// char title[] = { "league of legend" };
	// 
	// *message = 'e';

	//  printf("messager[3]의 값 : %c\n", message[3]);
	//  printf("messager의 값 : %s\n\n", message);
	//  
	// message = "bit";
	// 
	// // 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// // 할 수 있으며 문자열 상수는 데이터 영역의 읽기 전용 공간에
	// // 자징되기 때문에 문자열릐 값을 변경할 수 없습니다 
	// 
	// 
	// printf("message의 값 : %p\n", message);
	// printf("message : %s\n", message);
	// 
	// // 문자열은 공백도 함꼐 메모리 공간에 포함되며 마지막 메모리
	// // 공간의 요소에 문자열의 끝을 알려주는 제어 문자가 추가됩니다
	// 
	// printf("title의 값 : %s\n", title);
	// 
	// title[6] = '\0';
	// 
	// printf("%s\n", title);
	// 
	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력됩니다
#pragma endregion

#pragma region 2차원 배열
	// 베열의 요소로 또 다른 배열을 가지는 배열 입니디

	// int array2D[3][3] =
	// {
	// 	{ 1,2,3 },
	// 	{ 4,5,6 },
	// 	{ 7,8,9 },
	// 
	// };
	// for (int i = 0; i < 9; i++)
	// {
	// 
	// 
	// 
	// }


	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// 행을 의미하고 뒤에 있는 배열은 열을 의미 합니다

#pragma endregion

#pragma region 아스키 코드
// 미국 국립 표준 협회에서 표준화한 정보 교환용
// 7 bit 부호 체계입니다

	char alphabet = 'A'






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
