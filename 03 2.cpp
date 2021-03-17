#include <stdio.h>
int main()
{
	int a,b=0,c;
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		c=i*(i+1);
		b+=c;

	}
	printf("%d\n",b);
}
