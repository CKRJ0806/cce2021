#include <stdio.h>
int main ()
{
	int a,b=0;
	scanf("%d",&a);
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d\n",b);
}
