#include <stdio.h>
#include <math.h>

int main() 
{
	int n,i,day[7],date[31],count=0,ans;
	int expo=4;
	ans= pow(date[31],expo);
	
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d %d", &day[i],&date[i]);
		if (ans*4%10==4)
		count++;
	}
	printf("%d\n%d %d",count, day[i],date[i]);
	
	
    return 0;
}
