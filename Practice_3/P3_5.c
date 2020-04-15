#include <stdio.h>

int main() 
{
	float x, y, a, b, c;

	scanf("%f", &x);
	scanf("%f", &y);

	a = x*x + y*y;
	b = (x + y) * (x + y);
	c = (x - y) * (x - y);

	printf("a = %6.2f\nb = %6.2f\nc = %6.2f", a, b, c);

	return 0;
}

