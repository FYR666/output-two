#include"stdio.h"
void main()
{
	int a, b, c, d, e, x;
	printf("请输入五个数：");
	scanf_s("%d", &x);
	a = x / 10000;
	b = x % 10000 / 1000;
	c = x % 1000 / 100;
	d = x % 100 / 10;
	e = x % 10;
	printf("%d %d %d %d %d", a, b, c, d, e);
}