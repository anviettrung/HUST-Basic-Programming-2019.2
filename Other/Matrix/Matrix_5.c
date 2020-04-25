#include <stdio.h>

// Tính tổng biên và đường chéo
int main()
{
	int row, col;

	printf("Nhap kich co ma tran\n");
	printf("So hang: "); scanf("%d", &row);
	printf("So cot: "); scanf("%d", &col);

	int mt[col][row];

	printf("Nhap ma tran:\n");
	for (int y = 0; y < row; y++) {
		printf("Hang %d: ", y+1);
		for (int x = 0; x < col; x++)
			scanf("%d", &mt[x][y]);
	}

	// Biên
	int sum = 0;
	for (int i = 0; i < col; i++)
		sum += mt[i][0] + mt[i][row-1];

	if (row == 1) sum /= 2;
	for (int i = 1; i < row-1; i++)
		sum += mt[0][i] + mt[col-1][i];

	printf("Tong bien = %d\n", sum);

	// Đường chéo
	if (col == row) {
		sum = 0;

		for (int i = 0; i < row; i++)
			sum += mt[i][i] + mt[i][row-i-1];

		if (row % 2 == 1)
			sum -= mt[(row-1)/2][(row-1)/2];

		printf("Tong 2 duong cheo = %d\n", sum);
	}
}