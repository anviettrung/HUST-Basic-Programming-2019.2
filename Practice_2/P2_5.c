#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Nhap vao 3 so nguyen a, b, c bat ky :");
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	printf("c="); scanf("%d", &c);

	printf("Tong 3 so la %d", a+b+c);
	printf("Trung binh 3 so la %6.2f", (a+b+c) / 3.0f);

	return 0;
}