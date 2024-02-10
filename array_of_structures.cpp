#include<stdio.h>
#include<string.h>

struct stu
{
	int roll;
	char name[20];
	int hgt;
};

typedef struct stu s;

int main()
{
	s a[10],tmp;
	int tot=0,p,i,j,n;
	printf("enter number of enteries:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d",&a[i].roll,a[i].name,&a[i].hgt);
		tot=tot+a[i].hgt;
	}
	/*p=tot/n;
	printf("average height:%d",p);
	
	char rn[20];
	printf("\nenter the name to seacrh:");
	scanf("%s",rn);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].name,rn)==0)
		{
			
			return 0;
		}
	}
	printf("not found..");*/
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j].hgt>a[j+1].hgt)
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;	
			}	
		}	
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d %s %d",a[i].roll,a[i].name,a[i].hgt);
	}	
	return 0;	
}
