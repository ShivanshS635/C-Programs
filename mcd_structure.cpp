#include<stdio.h>
typedef struct mcd
{
	int burgir;
	int coffee;
	int mcflury;
} m;

int main()
{
	m qm[20];
	int tmp,tot,sal[20];
	
	for(int i=0;i<3;i++)
	{
		tot=0;
		printf("enter %d th branch sale of each product:",i+1);
		scanf("%d %d %d",&qm[i].burgir,&qm[i].coffee,&qm[i].mcflury);
		tot=tot+50*(qm[i].burgir)+90*(qm[i].coffee)+110*(qm[i].mcflury);
		sal[i]=tot;	
	}
	for(int i=0;i<3;i++)
	{
		printf("%d ",sal[i]);
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(sal[j]>sal[j+1])
			{
				tmp=sal[j];
				sal[j]=sal[j+1];
				sal[j+1]=tmp;
			}
		}
	}
	printf("\n");
	for(int i=0;i<3;i++)
	{
		printf("%d ",sal[i]);
	}
	return 0;
}
