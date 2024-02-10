#include<stdio.h>
#include<math.h>

struct points
{
	float a[3];
	float b[3];	
};
void distance(float c[3],float d[3])
{
	float dis;
	dis=sqrt(pow(d[0] - c[0], 2) + pow(d[1] - c[1], 2) + pow(d[2] - c[2], 2) * 1.0);
	
	printf("\ndistance is :%f",dis);
}
int main()
{
	struct points p;
	int i;
	printf("\nenter coordinated of a :\n");
	for(i=0;i<3;i++)
	{
		scanf("%f",&p.a[i]);
	}
	printf("\nenter coordinated of b :\n");
	for(i=0;i<3;i++)
	{
		scanf("%f",&p.b[i]);
	}
	
	distance(p.a,p.b);
	
	return 0;
}
