#include <stdio.h>

int main()
{
	float a[6];

	for (int i = 0; i < 5; i++)
		scanf("%f", &a[i]);

	// Sort
	for (int i = 0; i < 5; i++)
		for (int j = i+1; j < 5; j++)
			if (a[i] > a[j]) {
				// swap
				float t = a[i];
				a[i] = a[j];
				a[j] = t;
			}

	// Print result
	printf("Max 1: %f\nMin 1: %f\nMax 2: %f\nMin 2: %f\n", a[4], a[0], a[3], a[1]);

	return 0;
}