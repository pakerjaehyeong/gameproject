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

void pirnt_status(char grade, int height, float temperature)
{
	printf("��� : %c\n", grade);
	printf("Ű : %d\n", height);
	printf("��� : %f\n", temperature);



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

	updata_position(36,-9);

	// �ް� ������ �Լ� ���ο����� ������ �̷������
	// �Լ��� 



#pragma endregion




















}