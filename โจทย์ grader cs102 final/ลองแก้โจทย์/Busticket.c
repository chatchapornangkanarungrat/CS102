#include <stdio.h>

int main () {
	int x;
	int a,b,c,d,e,f,g;
	int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
	scanf("%d", &x);
	
	a=x/1000000;
	b=(x/100000)%10;
	c=(x/10000)%10;
	d=(x/1000)%10;
	e=(x/100)%10;
	f=(x/10)%10;
	g=x%10;
	sum=a+b+c+d+e+f+g;
	
	sum1=sum/10;
	sum2=sum%10;
	sum3=sum1+sum2;
	sum4=sum3/10;
	sum5=sum3%10;
	sum6=sum4+sum5;
	printf("%d", sum6);
	
	
	return 0;
}
