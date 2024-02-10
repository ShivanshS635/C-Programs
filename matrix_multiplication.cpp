#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
	printf("ENTER THE NUMBER OF ROWS AND COLUMNS IN MATRIX A:");
	scanf("%d,%d",&m,&p);
	printf("\nENTER THE NUMBER OF ROWS AND COLUMNS IN MATRIX B:");
	scanf("%d,%d",&q,&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("ENTER A[%d][%d] ELEMENT:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\nMATRIX A:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<p;j++)
		{
			printf("%d\t",a[i][j]);	
		}
	}
	printf("\n");
	for(i=0;i<q;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("ENTER B[%d][%d] ELEMENT:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\nMATRIX B:");
	for(i=0;i<q;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	if(p==q)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(k=0;k<p;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("\n\nMATRIX MULTIPLICATION OF A AND B:");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d\t",c[i][j]);
			}
		}
	}
	else
	{
		printf("MATRIX MULTIPLICATION NOT POSSIBLE...");
	}
	return 0;
}


















