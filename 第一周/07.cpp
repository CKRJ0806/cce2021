第七題 基礎題：找倍數
#include <stdio.h>
int main ()
{
	int a,b=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a);
		if(a%3==0){
			b++;
		}
	}
	printf("%d\n",b);
}
