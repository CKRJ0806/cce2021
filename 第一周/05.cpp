第五題 基礎題：找零錢
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d=%d*%d+%d*%d+%d*%d\n",a,50,a/50,5,a%50/5,1,a%50%5/1);
}
