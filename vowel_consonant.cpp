//VOWEL OR CONSONANT
#include<stdio.h>
int main()
{
	char a;
	printf("ENTER ANY ALPHABET:");
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'||a=='A'||a=='I'||a=='O'||a=='U')
	{
		printf("%c IS VOWEL.",a);
	}
	else
	{
		printf("%c IS CONSONANT.",a);
		
	}
	return 0;
}
