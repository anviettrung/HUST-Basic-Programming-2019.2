#include <stdio.h>
#include <math.h>

int main() 
{
	double a, b, c;
	double n1, n2;
	double r, i; // cho so phuc
	int ans = 0;
	// Quy uoc: 0 = vo nghiem | 1 = vo so nghiem | 2 = n0 bthg | 3 = n0 phuc

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

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

		double delta = b*b - 4*a*c;
		if (delta < 0) {
			ans = 3;
			r = -b / (2*a);
			i = sqrt(fabs(delta)) / (2*a);
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
		case 3:
			printf("%f+%fi\n%f-%fi\n", r, i, r, i);
			break;
	}

	return 0;
}

