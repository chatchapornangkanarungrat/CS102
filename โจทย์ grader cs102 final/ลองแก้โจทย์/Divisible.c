#include <stdio.h>

int main () 
{
	int a,b,d,i,count=0;
	scanf("%d %d %d",&a, &b, &d);
	
	
	for (i=a;i<=b;i++)
	{
		if(i%d==0)
		count++;
	}
	printf("%d",count);
	

	return 0;
}
