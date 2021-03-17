#include <stdio.h>
int main ()
{
	int b ,a[100];
	scanf("%d",&b);
	for(int i=1;i<=b;i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
