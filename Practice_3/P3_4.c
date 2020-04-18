#include <stdio.h>

int main() 
{
	float x, y, z, s, f;

	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);

	s = x + y + z;
	f = (x + y + z) / 3.0f;

	printf("%f\n%f", s, f);

	return 0;
}

