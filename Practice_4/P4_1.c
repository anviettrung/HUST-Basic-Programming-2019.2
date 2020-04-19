#include <stdio.h>

int main() 
{
	int n, ans;
	
	do {
		scanf("%d", &n);
	} while (n < 0 || n > 7);

	ans = 1;
	for (int i = 2; i <= n; i++)
		ans *= i;

	printf("%d", ans);
	
	return 0;
}

