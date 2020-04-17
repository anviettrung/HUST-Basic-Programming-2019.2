#include <stdio.h>
#include <math.h>

int main() 
{
	int choice = 0;
	int n = 0;

	printf("Loai hang: "); scanf("%d", &choice);
	printf("So luong: "); scanf("%d", &n);

	long int price;
	switch (choice) {
		case 1:
			price = 1500000;
			break;
		case 2:
			price = 3000000;
			break;
		case 3:
			price = 5000000;
			break;
		default:
			price = 0;
	}

	printf("So tien phai tra: %ld\n", price * choice);

	return 0;
}