#include <stdio.h>

void line(int n, char c)
{
	for (int i = 0; i < n; i++)
		printf("%c", c);
}

void triangle(int n, char c, int alignTop, int alignLeft)
{
	if (alignTop && alignLeft) {
		for (int i = n; i > 0; i--) {
			line(i, c);
			line(n-i, ' ');
			printf("\n");
		}
	} else if (!alignTop && alignLeft) {
		for (int i = 1; i < n+1; i++) {
			line(i, c);
			line(n-i, ' ');
			printf("\n");
		}
	} else if (alignTop && !alignLeft) {
		for (int i = n; i > 0; i--) {
			line(n-i, ' ');
			line(i, c);
			printf("\n");
		}
	} else {
		for (int i = 1; i < n+1; i++) {
			line(n-i, ' ');
			line(i, c);
			printf("\n");
		}
	}
}

void square(int n, char c)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%c", c);
		printf("\n");
	}
}

void fan(int n, char c)
{
	for (int i = 0; i < n; i++) {
		line(i, ' ');     line(n-i, c);
		line(n-i-1, ' '); line(i+1, c);
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
		line(n-i, c); line(i, ' ');
		line(i+1, c); line(n-i-1, ' ');
		printf("\n");
	}
}

int main()
{
	int num;
	char ch;

	scanf("%d", &num);
	scanf(" %c", &ch);

	square(num, ch);
	printf("\n");
	triangle(num, ch, 1, 1);
	triangle(num, ch, 0, 1);
	triangle(num, ch, 1, 0);
	triangle(num, ch, 0, 0);
	printf("\n");
	fan(num, ch);

	return 0;
}