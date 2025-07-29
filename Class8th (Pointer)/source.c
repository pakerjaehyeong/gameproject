// Class8th (Pointer).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include<stdio.h>
void main()
{
#pragma region 주소 연산자
	// 변수에 주소 값을 반환하는 연산자입니다


	// int data = 10;
	// 
	// printf("data의 저장 주소 : %p", &data);	

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1byte의 크기로 나누어 표현합니다

#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에
	// 맞추어 입력해주는 함수입니다

	//	int x;
	//
	//	printf("변수 x에 넣을 값을 입력해주세요 :");
	//
	// 표준 입력 함수는 입력을 수행할 떄까지 다음 작업으로
	// 넘어갈 수 없습니다
	//
	//
	//	scanf_s("%d", &x);
	//
	// 버퍼는 데이터가 이동항 떄 임시로 저장되는 공간이며
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다
	//
	//	printf("변수 x에 지정된 값은 %d 입니다", x);
	//
	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다

#pragma region 단점

	// 블로킹 scanf_s를 사용하는 순간 main의 작업들이 멈추게 되며
	// scanf_s에 코드 진행 제어권이 일시적으로 넘어 간다

	// 또한 scanf_s에 작업이 완료가 되기 전까지 
	// main소스의 작업들은 완전히 멈춘다

	// 이로 인해 게임의 이동키 코딩에는 scanf_s만 사용하기엔 무리가 있다
#pragma endregion


#pragma endregion

#pragma region 포인터
	// 메모리의 주고 값을 저장할 수 있는 변수입니다

	// int storage = 10;
	// int variable = 20;
	// 
	// int * pointer = &storage;

	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다

	// printf("storage 변수의 주소 : %p\n", &storage);
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("pointer 변수의 주소 : %p\n\n", &pointer);
	// 
	// *pointer = 99;

	// printf("storage 변수의 값 : %d\n", storage);
	// printf("pointer 변수가 가르키는 값 : %d\n", *pointer);
	// 
	// pointer = &variable;
	// 
	// *pointer = 100;

	// printf("variable 변수의 값 : %d\n", variable);
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("pointer 변수가 가리키는 값 : %d \n\n", *pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	// 시작 주소를 가리키게 됩니다

	// printf("int 크기 : %u\n", sizeof(int));
	// 
	// printf("pointer 변수의 크기 : %u", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장칙가 한 번에 처리할 수
	// 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는 
	// 운영체제에 따라 크기가 결정 됩니다




#pragma endregion

#pragma region 볌용 포인터 
	// 자료형이 정해지지 않은 상태로 모든 자료형을 
	// 저장할 수 있는 포인터입니다

	// char a = 'A';
	// int b = 10;
	// float c = 3.14f;
	// void* reference = NULL;
	// 
	// reference = &a;
	// 
	// // 범용 포인터는 메모리 주소에 접든해서 값을 
	// // 변경할 수 없습니다
	// *(char *)reference = 'B';
	// 
	// printf("a의 주소값 : %c\n", a);
	// printf("reference변수값 : %p\n\n", reference);
	// 
	// reference = &b;
	// 
	// *(int*)reference = 50;
	// 
	// printf("b의 주소값 : %d\n", b);
	// printf("reference변수값 : %p\n\n", reference);
	// 
	// reference = &c;
	// 
	// *(float*)reference = 45.5f;
	// 
	// printf("c의 주소값 : %.2f\n", c);
	// printf("reference변수값 : %p\n\n", reference);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 
	// 가리키는 변수의 자료형으로 형 변환해주어야 합니다 

#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
	// 지정되어 있는 포인터입니다

	// int room1 = 10;
	// int room2 = 20;
	// 
	// const int*const_pointer= &room1;
	// 
	// // *const_pointer  = 99;
	// 
	// printf("room1의 주소 값 : %p\n", &room1);
	// printf("const_pointer의 값 : %p\n", const_pointer);
	// 
	// const_pointer = &room2;
	// 
	// printf("room2의 주소 값 : %p\n", &room2);
	// printf("const_pointer의 값 : %p\n", const_pointer);

#pragma endregion

#pragma region 포인터 상수
 // 포인터 변수가 가리키고 있는 주소 값을
 //  변경할 수 없는 포인터 입니다

// int room1 = 10;
// int room2 = 20;
// 
// int* fixed_pointer = &room1;
// *fixed_pointer = 50;
// 
// printf("fixed_pointer 변수가 가리키는 값 : %d\n", *fixed_pointer);
// printf("room1 변수의 값 : %d\n", room1);

// fixed_pointer = &room2;

// 상수로 선언한 포인터는 해당 변수의 값울 변경할 수 있지만, 다른 변수의
// 주소를 새로 저장할 수 없습니다
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
