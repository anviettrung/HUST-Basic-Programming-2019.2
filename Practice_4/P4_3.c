#include <stdio.h>

int main() 
{
	int n, ans = 0;

	scanf("%d", &n);

	if (n > 0 && n < 1000) {
		while (n > 0) {
			ans += n % 10;
			n /= 10;
		}
	} 

	printf("%d", ans);

	return 0;
}

