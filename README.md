# cce2021
# 第一題 進階題：分式化簡
```c
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

```
# 第二題 進階題：讀入整數反序列印
ˋˋˋc
#include <stdio.h>
int a[10];
int main ()
{
	int x;
	for(int i=1;i<=10;i++)
	{
		if(x==0)
		break;
		else scanf("%d",&a[i]);
	}
	for(int i=10;i>=1;i--)	
	{
		if(a[i]!=0)
		printf("%d ",a[i]);
	}
	printf("\n");
}		
ˋˋˋ
# 第三題 進階題：A的B次方函數
ˋˋˋc
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
ˋˋˋ
# 第四題 進階題：漸增數列相加 
ˋˋˋc
#include <stdio.h>
int main ()
{
	int a,n=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		int j,z;
		j=i-1;
		z=j*i;
		n=n+z;
	}
	printf("%d\n",n);
}	
ˋˋˋ
# 第五題 基礎題：找零錢 
ˋˋˋc
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d=%d*%d+%d*%d+%d*%d\n",a,50,a/50,5,a%50/5,1,a%50%5/1);
}	
ˋˋˋ
# 第六題 基礎題：因數個數
ˋˋˋc
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)c++;
	}
	printf("%d\n",c);
}	
ˋˋˋ
# 第七題 基礎題：找倍數 
ˋˋˋc
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
ˋˋˋ
# 第八題 基礎題：整數轉換為等級
ˋˋˋc
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	
	if(a>=90)printf("A\n");
	else if(a>=80)printf("B\n");
	else if(a>=60)printf("C\n");
	else printf("F\n");
}	
ˋˋˋ




	






