第一題 進階題：分式化簡
#include <stdio.h>
int a1(int x,int y)
{
	int c;
	while(c=x%y){
	x=y;
	y=c;
	}
	return y;
}

int main()
{
	int s,d;
	scanf("%d%d",&s,&d);
	int f;
	f=a1(s,d);
	int i,j;
	i=s/f;
	j=d/f;
	printf("%d %d\n",i,j);
}
