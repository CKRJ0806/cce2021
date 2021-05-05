#include <stdio.h>
int main ()
{
	int n,t=0;
	int a[100];
	for(int i=0;i<=100;i++){
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a[i]);
		if(a[i]==999) break;
		else t+=a[i];
	}
	printf("The total is: %d",t);
}
