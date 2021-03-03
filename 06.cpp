第六題 基礎題：因數個數
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)c++;
	}
	printf("%d\n",c);
}
