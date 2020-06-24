#include <stdio.h>
#include <math.h>
 
int main() {
	int a[107], n, p = 0, c = 0;
	float x = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			x += a[i];
			c++;
		} else {
			p += a[i];
		}
	}
	
	if (c > 0)
		x = x / c;
	printf("%f %f", x, (float)p);
	
	return 0;
}