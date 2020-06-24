#include <stdio.h>
#include <string.h>
 
const int LIMIT_N = 103;
const int LIMIT_S = 53;
 
char upper(char k)
{
	if (k >= 'a' && k <= 'z')
		k += 'A' - 'a';
 
    return k;
}

char lower(char k)
{
	if (k >= 'A' && k <= 'Z')
		k += 'a' - 'A';
 
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
		while(s[i][0] == ' ') strcpy(&s[i][0],&s[i][1]);
		while(s[i][strlen(s[i])-1]==' ') s[i][strlen(s[i])-1] = '\0';
		for (int j = 0; j < LIMIT_S; j++) u[i][j] = '\0';
	}
	
	// Standardize
	for (int k = 0; k < n; k++) {
		c[k] = 0;
		int insertSpace = 0;

		for (int i = 0; i < strlen(s[k])+1; i++) {
			if (s[k][i] != ' ') {
				if (c[k] == 0 || u[k][c[k]-1] == ' ')
					u[k][c[k]++] = upper(s[k][i]);
				else
					u[k][c[k]++] = lower(s[k][i]);
				
				insertSpace = 1;
			} else if (insertSpace == 1){
				u[k][c[k]++] = ' ';
				insertSpace = 0;
			}
		}

		c[k] = strlen(u[k])-1;
		if (u[k][c[k]-2] == ' ')
			c[k]--;
	}

	// Sort
	int v[LIMIT_N];
	int t;
	for (int i = 0; i < n; i++)
		v[i] = i;

	for (int i = 0; i < n-1; i++)
		for (int j = i; j < n; j++)
			if (strcmp(u[i], u[j]) > 0)
			{
			 	t = v[i];
			 	v[i] = v[j];
			 	v[j] = t;
			}		

	for (int i = 0; i < n-1; i++) 
		printf("(%d)%s\n", i+1, u[v[i]]);
	printf("(%d)%s", n, u[v[n-1]]);
	
	return 0;
}