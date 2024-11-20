#include <stdio.h> 

int main() 
{
 
int i,j,n;
scanf("%d", &n);

for(i = 1; i <= n; i++)
    {
		for(j = i; j >= 1; j--)
		{
			if (i>=1)
            printf("%d ", j);
            
            else if (i==5)
            {
            i=0;
            printf("%d", j);
            i++;
        	}
        }
        printf("\n");
    }

return 0;
}
