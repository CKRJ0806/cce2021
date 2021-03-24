#include <stdio.h>
int main ()
{
	char a[1000];
	for(int i=0;i<=1000;i++)
	{
		while(scanf("%c",&a[i])!=EOF){
			if(a[i]!='2')printf("%c",a[i]);
		}
	}
}
