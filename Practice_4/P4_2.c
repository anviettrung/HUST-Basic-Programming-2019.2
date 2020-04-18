#include <stdio.h>
#include <math.h>

int IsPrime(int x) 
{
	if (x < 2)
		return 0;

	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}

	return 1;
}

int main() 
{
	int n;

	scanf("%d", &n);

	if (IsPrime(n) == 1)
		printf("La so nguyen to");
	else
		printf("Khong phai so nguyen to");

	return 0;
}

