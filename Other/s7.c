#include <stdio.h>
#include <math.h>

int IsTriangle(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
		return 1;
	else
		return 0;
}

int main()
{
	float a, b, c;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	// Is triangle
	if (IsTriangle(a, b, c)) {
		float p = (a + b + c) / 2;
		float s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Dien tich hinh tam giac: %6.2f\n", s);
	} else {
		printf("Khong ton tai tam giac\n");
	}

	return 0;
}