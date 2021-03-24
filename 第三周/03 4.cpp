#include <stdio.h>
int main ()
{
	int a,b=1,c=0;
	scanf("%d",&a);
	while(a>0)
	{
		c+=(a%10)*b;
		b=b*2;
		a/=10;
		}
	printf("%d\n",c);
}
