#include <stdio.h>
#include <math.h>

const int N_MAX = 1000;

int main() 
{
	int n, a[N_MAX + 2];
	// init
	for (int i = 0; i < N_MAX+2; i++)
		a[i] = 0;
	a[0] = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		// prinf
		for (int j = 0; j < i; j++)
			printf("%d ", a[j]);
		// update
		for (int j = i; j > 0; j--)
			a[j] = a[j-1] + a[j];

		printf("\n");
	}

	return 0;
}