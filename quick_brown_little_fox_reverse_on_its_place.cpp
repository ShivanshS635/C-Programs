#include<stdio.h>
#include<string.h>
int main()
{
	char a[4][20],s[4][20]={"quick","brown","little","fox"};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;)
		strcpy(a[i],strrev(s[i]));
	}
	printf("%s",a);
	return 0;
}
