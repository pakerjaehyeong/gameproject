#include <stdio.h>
void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�

	// int list[5] = {10,20,30,40,50};

	// �迭�� ù���� ���Ҵ� 0���� ���� �����մϴ�
	
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("list[%d] = %d\n",i, list[i]);
	// }

	// �迭�� �޸� ������ ���α׷��� ����Ǵ� ����
	// ������ �� �����ϴ�

	
	int array[] = { 10,22,30,40,50 };
	
	int size = sizeof(array) / sizeof(array[0]);

	printf("%d", size);

	for (int i = 0; i < size; i++)
	{
		printf("array[%d]�� �� : %d\n", i, array[i]);

	}

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ ���� �˴ϴ�

	printf("�迭�� ���� �ּҴ� : %p\n", array);

	int* pointer = &array[0];

	pointer = pointer + 1;

	// *pointer = 23;

	printf("pointer�� ����Ű�� ��: %d\n", *pointer);


	// �迭�� �������� �޸� ������ ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�





#pragma endregion






}