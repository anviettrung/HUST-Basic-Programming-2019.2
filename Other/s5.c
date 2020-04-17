#include <stdio.h>

int main()
{
	char name[100];

	printf("Nhap ten: ");
	fgets (name, 100, stdin); // Include 'end-line' character
	// or 
	// scanf ("%[^\n]%*c", name); // not include 'end-line' character

	printf("Hello %s", name);

	return 0;
}