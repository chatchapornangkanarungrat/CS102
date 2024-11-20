#include <stdio.h>

int main() 
{
    int M,N,i,j;
    int f[30],n[10],s[30],sum=0,maxs;
    scanf("%d",&M);
    scanf("%d",&N);
		
    for(i=1;i<=M;i++)
    {
    	for(j=1;j<=N;j++)
    	{
   			scanf("%d %d %d", &f[i],&n[j],&s[i]);
   		}
   		sum+=s[i];
   	}
		
	printf("%d \n%d", i,maxs);
   		
    return 0;
}
