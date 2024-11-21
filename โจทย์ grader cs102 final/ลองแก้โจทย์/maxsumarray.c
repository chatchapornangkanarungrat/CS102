#include <stdio.h>
int main ()
{
	int n,x[200],i,j,sum=0,max;
	scanf("%d", &n);
	
	for (i=0;i<n;i++)
		scanf("%d", &x[i]);
		
	max=-1000;
	for (j=0;j<6;j++)
	{
		for (i=j;i<5+j;i++)
		{
			sum=sum+x[i];
		}
	}
			
	printf("%d", sum);
	
	return 0;
}
