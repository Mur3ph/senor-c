#include <stdio.h>

int multiple(int x, int y);

void mainy()
{
	int x;
	int y;

	printf("Please input two numbers to be multiplied: ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	printf("The product of your two numbers is %d\n", multiple(x, y));
	getchar();
	getchar();
}

int multiple(int x, int y)
{
	return x * y;
}