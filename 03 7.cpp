#include <stdio.h>
int main()
{
	int a,b,k;
	scanf("%d%d",&a,&b);
	if(a>b){
		k=a;
		a=b;
		b=k;
	}

	for(int i=a;i<=b;i++)
	{
		int c=i%5;
		if(c==0)
		printf("%d\n",i);
	}

}
