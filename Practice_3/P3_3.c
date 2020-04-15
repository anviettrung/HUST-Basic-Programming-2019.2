#include <stdio.h>

int main() 
{
	float x, y, f;

	scanf("%f", &x);
	scanf("%f", &y);

	f = y*y*y*y*y*y + x*y*y*y*y*y 
		+ x*x*y*y*y*y + x*x*x*y*y*y
		+ x*x*x*x*y*y + x*x*x*x*x*y
		+ x*x*x*x*x*x;

	printf("%6.2f", f);

	return 0;
}

