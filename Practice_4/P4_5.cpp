#include <iostream>
#include <complex>

using namespace std;

int main() 
{
	float a, b, c;
	float n1, n2;
	int ans = 0;
	// Quy uoc: 0 = vo nghiem | 1 = vo so nghiem | 2 = else

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	if (a == 0) {

		if (b == 0) {
			if (c == 0)
				ans = 1;
			else
				ans = 0;
		} else {
			ans = 2;
			n1 = -c / b;
			n2 = n1;
		}

	} else {

		float delta = b*b - 4*a*c;
		if (delta < 0) {
			ans = 0;
		} else {
			ans = 2;
			delta = sqrt(delta);
			n1 = (-b + delta) / (2*a);
			n2 = (-b - delta) / (2*a);
		}	
	}

	switch (ans) {
		case 0:
			printf("Phuong trinh vo nghiem");
			break;
		case 1:
			printf("Phuong trinh vo so nghiem");
			break;
		case 2:
			if (n1 == n2)
				printf("%f", n1);
			else 
				printf("%f\n%f", n1, n2);
			break;
	}

	return 0;
}

