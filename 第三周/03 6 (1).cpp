#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if (a<=2000)c=100;
	else {
		b=a-2000;
		if(b%500==0)
			c=100+(b/500)*5;
		else
			c=100+((b/500)+1)*5;
	}
	printf("%d\n",c);

}
