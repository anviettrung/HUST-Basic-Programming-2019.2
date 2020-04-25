#include <stdio.h>

// Tính định thức
const int max = 100;
int mt[max][max];
int n;

void print()
{
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++)
			printf("%d ", mt[x][y]);
		printf("\n");
	}
}

int det(int size)
{
	if (size == 1)
		return mt[0][0];

	if (size == 2) {
		return mt[n-1][n-1] * mt[n-2][n-2] - mt[n-1][n-2] * mt[n-2][n-1];
	} else {
		// Col to zero
		int o = n-size; // origin
		for (int y = o+1; y < n; y++) {
			int k = mt[o][y];
			for (int x = o; x < n; x++)
				mt[x][y] = mt[x][y] * mt[o][o] - mt[x][o] * k; 
		}

		//print();
		return det(size-1) / mt[o][o];
	}
}

int main()
{
	printf("Nhap kich co ma tran nxn\n");
	printf("n = "); scanf("%d", &n);

	printf("Nhap ma tran:\n");
	for (int y = 0; y < n; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < n; x++)
			scanf("%d", &mt[x][y]);
	}

	// Print result
	if (n > 0)
		printf("Det = %d\n", det(n));
	else 
		printf("Empty\n");
}