#include<stdio.h>
int main()
{
	int n,d,s,ctre=0,ctro=0,sume=0,sumo=0,o,e;
	printf("ENTER NUMBER TO CHECK:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		d=n%10;
		if(d%2==0)
		{
			ctre++;
			e=d*d*d;
			sume=sume+e;
		}
		else
		{
			ctro++;
			o=d*d;
			sumo=sumo+o;
		}
		n=n/10;
	}
	s=sume+sumo;
	printf("\nNUMBER OF EVEN DIGITS IS %d",ctre);
	printf("\nNUMBER OF ODD DIGITS IS %d",ctro);
	printf("\nSUM IS %d",s);
	return 0;
}
