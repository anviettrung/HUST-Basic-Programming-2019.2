#include <stdio.h>
#include <string.h>
 
const int LIMIT= 155;
 
char convert(char k)
{
	if (k >= 'a' && k <= 'z')
		k += 'A' - 'a';
 
    return k;
}
 
int main()
{
	char s[LIMIT];
	char u[LIMIT];
	
	fgets(s, LIMIT, stdin);
	
	int c = 0;
	int insertSpace = 0;
	for (int i = 0; i < strlen(s)+1; i++) {
		if (s[i] != ' ') {
			u[c++] = convert(s[i]);
			insertSpace = 1;
		} else if (insertSpace == 1){
			u[c++] = ' ';
			insertSpace = 0;
		}
	}
	
 	if (u[c-2] == ' ') {
 		u[c-2] = '\0';
 		c--;
 	}
	printf("%.*s:%d", c-1, u, c-1);
	
	return 0;
}