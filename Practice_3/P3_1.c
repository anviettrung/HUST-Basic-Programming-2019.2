#include <stdio.h>
#include <math.h>

int main() 
{
	double x, y, z; 
	double f;

	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);

	f = ((x + y + z) / (x*x + y*y + 1)) - fabs(x - z * cos(y));

	printf("%f", f);

	return 0;
}

