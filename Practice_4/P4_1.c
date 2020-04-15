#include <stdio.h>

int main() 
{
	int n, ans;

	scanf("%d", &n);

	if (n >= 0 && n < 8) {

		ans = 1;
		for (int i = 2; i <= n; i++)
			ans *= i;

	} else {

		ans = 0;

	}

	printf("%d", ans);

	return 0;
}

