#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
void Print()
{
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.乘法\n");
	printf("4.除法\n");
	printf("0.退出程序\n");
	printf("请选择：");
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
			printf("结果为%d\n", r[q](x, y));
		}
		else if (q == 0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("输入错误\n");
		}
	} while (q);
}
int main()
{
	Calculator();
	return 0;
}