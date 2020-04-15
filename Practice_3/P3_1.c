#include <stdio.h>
#include <math.h>

int main() 
{
	float x, y, z, f;

	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);

	f = ((x + y + z) / (x*x + y*y + 1)) - fabs(x - z * cos(y));

	printf("%6.2f", f);

	return 0;
}

