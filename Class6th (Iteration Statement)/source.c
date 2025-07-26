// Class6th (Iteration Statement).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include<stdio.h>
void main()
{
#pragma region 반복문

	// 프로그램 내에서 특정한 작업을 반복적으로 
	// 수행하는 명령문


#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 떄
	// 사용하는 연산자 입니다

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에
	// 연산을 수행합니다 (++,--)


	//  int previouseX = 0;
	//  int x = 0;
	//  
	//  x = ++previouseX;
	//  
	//  printf("previousX 변수를 전위 증가한 값 :%d\n", previouseX);
	//  printf("x 변수를 전위 증가한 값 : %d\n", x);
	//  
	//  x = --previouseX;
	//  
	//  printf("previousX 변수를 전위 감소한 값 : %d\n", previouseX);
	//  printf("x 변수를 전위 감소한 값 : %d\n", x);



	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킵니다

	// int y = 0;

	// int previousY = 0;

	// y = previousY++;


	// printf("previousY 변수를 후위 증가한 값 : %d\n", previousY);
	// printf("y 의 변수의 값:%d\n", y);


	// y = previousY--;

	// printf("previousY 변수를 후위 감소한 값 : %d\n", previousY);
	// printf("y 의 변수의 값:%d\n", y);

#pragma endregion


#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다

	// for (int i = 0; i<5;i++ )
	// {
	// 	printf("update \n");
	// 
	// }
#pragma endregion


#pragma region while 문
	// 특정 조건을 만족할 떄까지 계속해서 주어진 명령문을 
	// 실행라는 반복문 입니다

	// while문의 경우 위레서 아래로 실행되면 아래에 있는
	// 명령문의 실행이 다 끝나면 다시 위에 있는 명령문으로
	// 돌아가서 반복하는 구조입니다

	// int count = 5;
	// while (count > 0)
	// {
	// 	printf("%d\n", count--);
	// 
	// 
	// }


#pragma endregion


#pragma region do-while문

	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에
	// 따라 명령문을 실행하는 반복문입니다

	// int life = 0;
	// 
	// do
	// {
	// 
	// 	printf("생존");
	// 
	// 
	// } while (life > 0);



#pragma endregion


#pragma region coutinue문


// for (int i = 0; i < 11; i++)
// {
// 	if (i % 3 == 0)
// 	{ 
// 		continue;
// 	}
// 	
// 	printf("%d\n", i);
// 
// 
// 
// }





#pragma endregion


#pragma region 중첩 반복문
// 반복문안에 반복문이 있는 구조 입니다
// 반복문 입니다


// for (int i = 0; i < 3; i++)
// {
// 	printf("out...\n");
// 
// 	for (int j = 0; j < 3; j++)
// 	{
// 		printf("in...\n");
// 	}
// }


#pragma endregion






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
