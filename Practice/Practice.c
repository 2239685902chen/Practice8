#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
void Print()
{
	printf("1.�ӷ�\n");
	printf("2.����\n");
	printf("3.�˷�\n");
	printf("4.����\n");
	printf("0.�˳�����\n");
	printf("��ѡ��");
}
void Add(int x, int y)
{
	return x + y;
}
void Sub(int x, int y)
{
	return x - y;
}
void Mul(int x, int y)
{
	return x * y;
}
void Div(int x, int y)
{
	return x / y;
}
void Calculator()
{
	int q = 0;
	int (*r[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		Print();
		scanf("%d", &q);
		system("cls");
		if (q != 0 && q < 5)
		{
			int x;
			int y;
			scanf("%d%d", &x, &y);
			printf("���Ϊ%d\n", r[q](x, y));
		}
		else if (q == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("�������\n");
		}
	} while (q);
}
int main()
{
	Calculator();
	return 0;
}