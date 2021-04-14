#include <stdio.h>
int a[10];
int main ()
{
	int t=0;
	for(int i=0;i<11;i++){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	for(int i=0;i<11;i++){
		int n;
		scanf("%d",&n);
		if(a[i]==n)t++;
	}
	printf("%d\n",t);
}
