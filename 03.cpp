�ĤT�D �i���D�GA��B������
#include <stdio.h>
int MYPOWER(int x,int y)
{
	int z=1;
	if(x>=1 && x<=9)
	{
		for(int i=1;i<=y;i++){
		z*=x;
		}
	}
	return z;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
