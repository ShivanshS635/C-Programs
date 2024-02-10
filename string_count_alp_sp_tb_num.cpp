#include<stdio.h>
int main()
{
	char a[20];
	int alp=0,sp=0,num=0,tb=0,i=0;
	printf("ENTER SENTANCE:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			alp=alp+1;
		}
		else if(a[i]>'1'&&a[i]<='9')
		{
			num=num+1;
		}
		else if(a[i]==' ')
		{
			sp=sp+1;
		}
		else if(a[i]=='    ')
		{
			tb=tb+1;
		}
	}
	printf("\nALPHABETS----->%d",alp);
	printf("\nSPACES----->%d",sp);
	printf("\nNUMBERS----->%d",num);
	printf("\nTABS----->%d",tb);
	return 0;
}
