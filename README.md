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
```c
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

```
# 第三題 進階題：A的B次方函數
```c
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

```
# 第四題 進階題：漸增數列相加 
```c
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
```
# 第五題 基礎題：找零錢 
```c
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d=%d*%d+%d*%d+%d*%d\n",a,50,a/50,5,a%50/5,1,a%50%5/1);
}

```
# 第六題 基礎題：因數個數
```c
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

```
# 第七題 基礎題：找倍數 
```c
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

```
# 第八題 基礎題：整數轉換為等級
```c
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

```
第二周
# 第一題
#include <stdio.h>
int main ()
{
```c
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return0;
```    
}

# 第二題
#include <stdio.h>
int main ()
{
```c
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return0;
```
}


# 第三題
#include <stdio.h>
int main ()
{
```c
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
```
}
# 第四題
#include <stdio.h>
int main() 
{ 
```c
    int n[3]={10,20,30};  
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);   
    int*p =&n[0];  
    *p=200;  
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]); 
    int*p2 =&n[2]; 
    *p2=300; 
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]); 
    p2=p; 
    *p2=400;  
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]); 
    return 0;
```
}
第三周
# 第一題
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```

# 第二題

```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}	
int main()
{
    int *p=&a[2];
    *p=222;
		printall();
    p=p+2;
    *p=666;
    		printall();
    p--;
    *p=555;
    		printall();
}
```
# 進階題：大小寫轉換 
```c 
#include <stdio.h>
int main ()
{
	char a[10];
	scanf("%s",&a);
	for(int i=0;i<10;i++){
		if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
		else if(a[i]>='a'&&a[i]<='z')a[i]-=32;
	}
	printf("%s\n",a);
}		
```
# 進階題：漸增數列相加 
```c
#include <stdio.h>
int main()
{
	int a,b=0,c;
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		c=i*(i+1);
		b+=c;
		
	}
	printf("%d\n",b);
}
```
# 進階題：計算陣列的平方值
```c
#include <stdio.h>
int main ()
{
	int b ,a[100];
	scanf("%d",&b);
	for(int i=1;i<=b;i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");	
}	
```
# 進階題：2進位轉10進位 
```c
#include <stdio.h>
int main ()
{
	int a,b=1,c=0;
	scanf("%d",&a);
	while(a>0)
	{
		c+=(a%10)*b;
		b=b*2;
		a/=10;
		}
	printf("%d\n",c);
}		
```
# 基礎題：計算幾週與幾天 
```c
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d %d\n",a/7,a%7);
}	
```
# 基礎題：計程車資計算 
```c
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
```
# 基礎題：兩數間可被5整除的整數 
```c
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
```
# 基礎題：整數間最大距離 
```c
#include <stdio.h>
int main()
{
	int a,b,c,k;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		k=a;
		a=b;
		b=k;
	}

	 if(a<c)
	{
		k=a;
		a=c;
		c=k;
	}
	 if(b<c)
	{
		k=b;
		b=c;
		c=k;
	}
	printf("%d\n",a-c);			
}		
```
	






