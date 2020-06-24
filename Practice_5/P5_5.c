#include <stdio.h>
#include <string.h>
int main()
{
// khoi tao cac bien
int n;
char s[60];
char tmp[110][60];
// nhap du lieu
scanf("%d",&n);
gets(s);
for(int i=0;i<n;i++)
{
	gets(s);

	while(s[0]==' ') strcpy(&s[0],&s[1]);
	while(s[strlen(s)-1]==' ') s[strlen(s)-1] = '\0';

	char sub[60];

	for(int j=0;j<60;j++) sub[j] = '\0';
	int t = 0;
	int j = 0;

	while (j < strlen(s))
	{
		while(s[j]==' ') 
			j++;
		
		if (s[j] <= 'z' && s[j] >='a') 
			sub[t] = s[j] - 32;
		else 
			sub[t] = s[j];
		t++;
		
		for(j=j+1; j<strlen(s); j++)
		{
			if (s[j] == ' ')
			{
				sub[t] = ' ';
				t++;
				break;
			}
			if (s[j] >= 'A' && s[j] <= 'Z') 
				sub[t] = s[j] + 32;
			else 
				sub[t] = s[j];
			t++;
		}
	}
	strcpy(tmp[i],sub);
}

// sort(tmp,n);
for(int i=0;i<n-1;i++)
	for(int j=i;j<n;j++)
		if (strcmp(tmp[i],tmp[j])>0)
		{
			char k[60];
			strcpy(k,tmp[j]);
			strcpy(tmp[j],tmp[i]);
			strcpy(tmp[i],k);
		}

for(int i=0;i<n-1;i++)
{
printf("(%d)%s\n",i+1,tmp[i]);
}
printf("(%d)%s",n,tmp[n-1]);
return 0;
}