/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>

int main(){
	
	int k,sum2=0,sum3=0;
	long n;
	long sum1=0;
	scanf("%ld %d", &n, &k);
	
	while(n)
	{
	sum1+=(n%10)*k; ///sum1=sum1+ a*k%10
	n/=10; ///a=a/10
	}
	
	while(sum1)
	{
	sum2+=(sum1%10); 
	sum1/=10; 
	}
	
	while(sum2)
	{
	sum3+=(sum2%10); 
	sum2/=10; 
	}
	
 
	printf("%d\n", sum3);
return 0;
}



/*116   116%10 = 6
///116/10=11

///11     11%10= 1
///11/10 = 1


///1    1%10 = 1
///1/10 = 0
*/
