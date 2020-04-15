#include <stdio.h>

int UCLN(int x, int y)
{
    if (y == 0) return x;
    return UCLN(y, x % y);
}

int main() 
{
	int a, b, uc, bc;

	scanf("%d", &a);
	scanf("%d", &b);

	uc = UCLN(a, b);
	bc = a * b / uc;

	printf("UCLN = %d\nBCNN = %d", uc, bc);

	return 0;
}

