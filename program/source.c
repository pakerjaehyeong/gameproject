#include<stdio.h>

void initialize() // �Լ� reg�� �ִ� �Լ�
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
	printf("��� : %c\n", grade);
	printf("Ű : %d\n", height);
	printf("��� : %f\n", temperature);



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
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�

	// initialize();














#pragma endregion

#pragma region ��ȯ��
	// �Լ��� ������ ������ �����ִ� ����� �ڷ����Դϴ�





	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�
	// printf("�µ�: %f\n", get_temperature());




#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�

	// updata_position(36,-9);

	// �ް� ������ �Լ� ���ο����� ������ �̷������
	// �Լ��� ����Ǹ� �޸𸮿��� �����˴ϴ�

	// prirnt_status('s', 175, 37.21f);

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ��


#pragma endregion

#pragma region �μ�
	// ������ ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�

	

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ������ ��
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���� �޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�

	// int x1 = 10;
	// int y1 = 20;
	// 
	// printf("�ٲ�� �� ���� x1�� ��: %d%\n", x1);
	// printf("�ٲ�� �� ���� y1�� ��: %d%\n", y1);
	// 
	// swap(&x1, &y1);
	// 
	// printf("���� x1�� ��: %d%\n", x1);
	// printf("���� y1�� ��: %d%\n", y1);

	
#pragma endregion
	
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
	// �۾��� �����ϴ� �Լ��Դϴ�

	
	// find(3);


	// ��� �Լ��� �Լ��� ��� ����ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�
#pragma endregion






















}