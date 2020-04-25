#include <stdio.h>

// Nhân ma trận
int main()
{
	int row1, col1, row2, col2;

	printf("Nhap kich co ma tran 1\n");
	printf("So hang: "); scanf("%d", &row1);
	printf("So cot: "); scanf("%d", &col1);

	int mt1[col1][row1];

	printf("Nhap ma tran 1\n");
	for (int y = 0; y < row1; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < col1; x++)
			scanf("%d", &mt1[x][y]);
	}

	row2 = col1;
	printf("Nhap kich co ma tran 2\n");
	printf("So hang: %d\n", row2);
	printf("So cot: "); scanf("%d", &col2);

	int mt2[col2][row2], mt[col2][row1];

	printf("Nhap ma tran 2\n");
	for (int y = 0; y < row2; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < col2; x++)
			scanf("%d", &mt2[x][y]);
	}

	// Multiply
	for (int y = 0; y < row1; y++)
		for (int x = 0; x < col2; x++) {
			mt[x][y] = 0;
			for (int k = 0; k < col1; k++)
				mt[x][y] += mt1[k][y] * mt2[x][k];
		}

	// Print result
	printf("Ma tran tich la: \n");
	for (int y = 0; y < row1; y++) {
		for (int x = 0; x < col2; x++)
			printf("%d ", mt[x][y]);
		printf("\n");
	}
}