#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+10*%d+5*%d+1*%d",a,a/50,a%50/10,a%50%10/5,a%50%10%5/1);

	}
