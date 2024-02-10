#include<stdio.h>
int main()
{
	char a[20],b[20],tmp;
	int i,j,l,ch=0;
	printf("ENTER A STRING:");
	gets(a);
	for(l=0;a[l]!='\0';l++);
	j=l-1;
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<l/2;i++)
	{
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		j--;
	}
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=b[i])
		{
			ch=1;
			break;
		}
	}
	if(ch==1)
	{
		printf("NOT A PLAINDROME");
	}
	else
	{
		printf("PALINDROME");
	}
	return 0;
}
