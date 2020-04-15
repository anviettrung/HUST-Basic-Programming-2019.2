#include <stdio.h>

int main() 
{
	float x, y, z, s, f;

	printf("Diem Toan: "); scanf("%f", &x);
	printf("Diem Li: ");   scanf("%f", &y);
	printf("Diem Hoa: ");  scanf("%f", &z);

	s = x + y + z;
	f = (x + y + z) / 3.0f;

	printf("Tong diem: %6.2f\nDiem trung binh: %6.2f", s, f);

	return 0;
}

