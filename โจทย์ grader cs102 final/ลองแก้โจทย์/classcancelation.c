#include <stdio.h>

int main ()
{
	int n,k,t,i;
	int count=0,classorno=1;
	int late[50];
	scanf("%d %d %d",&n,&k, &t );
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &late[i]);
	
		if (late[i]>t)
		count=count+1;
	}
	
	if (count*100/n>100-k )  //// 100-k mean can late not more than 100-k% ///100-k is percent that are late
	{
		classorno=0;
		printf("%d \n%d", classorno,count);
	}
		
	else
		printf("%d \n%d", classorno,count);

	return 0;
}
