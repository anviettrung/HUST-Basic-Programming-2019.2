#include <stdio.h>

// Kiểm tra ma trận đối xứng
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

	// Test
	int ans = 0;
	if (row != col)
		ans = 1;
	for (int y = 0; y < row; y++) {
		if (ans == 1)
			break;

		for (int x = 0; x < col; x++)
			if (x != y && mt[x][y] != mt[y][x]) {
				ans = 1;
				break;
			}
	}

	// Print result
	if (ans == 0)
		printf("Ma tran tren doi xung\n");
	else
		printf("Ma tran tren khong doi xung\n");
}