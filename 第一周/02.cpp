�ĤG�D �i���D�GŪ�J��ƤϧǦC�L
#include <stdio.h>
int a[10];
int main ()
{
	int x;
	for(int i=1;i<=10;i++)
	{
		if(x==0)
		break;
		else scanf("%d",&a[i]);
	}
	for(int i=10;i>=1;i--)
	{
		if(a[i]!=0)
		printf("%d ",a[i]);
	}
	printf("\n");
}
