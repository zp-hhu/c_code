/*
Name: �ж������
Copyright: ��Զ��
Author: ��Զ��
Date: 06/04/20 17:01
Description: �������䣬�ж������
*/
#include <stdio.h>
int main()
{
	int age, year;//��������������age�������䣬year��������� 
	printf("������������䣺");
	scanf("%d", &age);
	//���������Ƿ���ȷ���ж� 
	if(age > 90)
	{
		printf("�������䳬�����жϷ�Χ\n");
		printf("����������������䣺");
		scanf("%d", &age);
	}
	year = age / 6;//�����������age���������Σ���switch��ʹ�� 
	switch(year)
	{
		case 0 ... 2: printf("������������׶�");
				 break;
		case(3):
		case(4):
		case(5): printf("������������׶�");
				 break;
		case(6):
		case(7):
		case(8): printf("������������׶�");
				 break;
		case(9):
		case(10):
		case(11):
		case(12):
		case(13):
		case(14):
		case(15): printf("������������׶�");
				  break;
		default: printf("ף���������꣡��");
	}
	return 0;
}
