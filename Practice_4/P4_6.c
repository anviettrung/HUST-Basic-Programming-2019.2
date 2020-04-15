#include <stdio.h>

int main() 
{
	int n, k;
	float x, s1, s2, s3, t;
	s1 = 1;
	s2 = 1;
	s3 = 1;

	scanf("%d", &n);
	scanf("%f", &x);

	t = 1;
	k = 1;
	for (int i = 0; i < n; i++)
	{
		t *= x;
		k *= (i+1);

		s1 += t;
		s2 += i % 2 == 0 ? -t : t;
		s3 += t / k;
	}

	printf("S1 = %6.2f\nS2 = %6.2f\nS3 = %6.2f", s1, s2, s3);

	return 0;
}

