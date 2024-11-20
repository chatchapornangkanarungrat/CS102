#include <stdio.h>

int main() 
{
    int x,n[100], count=1, maxcount=0, maxnum=0;
    int i,j;
    
    scanf("%d", &x);
    for (i=0;i<x;i++) 
        scanf("%d", &n[i]);
    
    for (i=0;i<x;i++) 
	{
		count=0;
        for ( j=1;j<x;j++) 
		{
            if (n[i]==n[j]) 
            count++;
        }
        
		if (count>=maxcount && n[i]>maxnum) 
		{
            maxcount=count;
            maxnum=n[i];
        }
    }
    
    printf("%d %d",maxnum,maxcount);
    
    return 0;
}
