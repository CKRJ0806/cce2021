#include <stdio.h>
int main ()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	if(b>c){
		int t=b;
		b=c;
		c=t;
	}
	if(c>a){
		int t=c;
		c=a;
		a=t;
	}
	printf("%d\n",t);
}
