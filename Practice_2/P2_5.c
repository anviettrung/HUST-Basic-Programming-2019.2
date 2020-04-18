#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", a+b+c);
	printf("%f", (a+b+c) / 3.0f);

	return 0;
}