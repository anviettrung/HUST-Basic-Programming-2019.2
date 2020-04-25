#include <stdio.h>

// Cộng ma trận
int main()
{
	int row, col;

	printf("Nhap kich co ma tran\n");
	printf("So hang: "); scanf("%d", &row);
	printf("So cot: "); scanf("%d", &col);

	int mt1[col][row], mt2[col][row], mt[col][row];

	printf("Nhap ma tran 1\n");
	for (int y = 0; y < row; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < col; x++)
			scanf("%d", &mt1[x][y]);
	}

	printf("Nhap ma tran 2\n");
	for (int y = 0; y < row; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < col; x++)
			scanf("%d", &mt2[x][y]);
	}

	// Sum
	for (int y = 0; y < row; y++)
		for (int x = 0; x < col; x++)
			mt[x][y] = mt1[x][y] + mt2[x][y];

	// Print result
	printf("Ma tran tong la: \n");
	for (int y = 0; y < row; y++) {
		for (int x = 0; x < col; x++)
			printf("%d ", mt[x][y]);
		printf("\n");
	}
}