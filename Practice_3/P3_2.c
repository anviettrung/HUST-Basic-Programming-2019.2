#include <stdio.h>

int main() 
{
	const float pi = 3.14159f;

	float r, m, s;

	scanf("%f", &r);

	m = 2 * r * pi;
	s = r * r * pi;

	printf("%6.2f\n%6.2f", m, s);

	return 0;
}

