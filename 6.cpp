#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&a);
	if(a<=1500)n=100;
	else {

		b=a-1500;
		if(b%500==0)n=100+(b/250)*5;
		else n=100+((b/250)+1)*5;
	}
	printf("%d",n);
}
