#include <stdio.h>
#include <string.h>
 
const int LIMIT_N = 103;
const int LIMIT_S = 53;
 
char convert(char k)
{
	if (k >= 'a' && k <= 'z')
		k += 'A' - 'a';
 
    return k;
}
 
int main()
{
	char s[LIMIT_N][LIMIT_S];
	char u[LIMIT_N][LIMIT_S];
	int  c[LIMIT_N];

	int n;
	scanf("%d", &n);

	getchar();
	for (int i = 0; i < n; i++) {
		fgets(s[i], LIMIT_S, stdin);
	}
	
	
	for (int k = 0; k < n; k++) {
		c[k] = 0;
		int insertSpace = 0;
		for (int i = 0; i < strlen(s[k])+1; i++) {
			if (s[k][i] != ' ') {
				u[k][c[k]++] = convert(s[k][i]);
				insertSpace = 1;
			} else if (insertSpace == 1){
				u[k][c[k]++] = ' ';
				insertSpace = 0;
			}
		}

		c[k] = strlen(u[k])-1;
		if (u[k][c[k]-1] == ' ')
			c[k]--;
	}


	for (int i = 0; i < n; i++)
		printf("%.*s:%d\n", c[i], u[i], c[i]);
	
	return 0;
}