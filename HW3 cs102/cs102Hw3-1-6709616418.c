#include <stdio.h>
int main() 
{
	int i, num;
	int reve, j;
	float N[50], max ,min, sum=0, avg;
	int maxindex,minindex;
	scanf("%d", &num);
	for(i=0;i<num;i++)
 	scanf("%f", &N[i]);
	
	
	max = N[0];
	for(i=0;i<num;i++)
	if(N[i] > max || N[i]==max)
	{
	max=N[i];	
	maxindex=i;	
	}			
	
	min = N[0];
	for(i=0;i<num;i++)
	if(N[i] < min || N[i]==min)
	{
	min=N[i];
	minindex=i;
	}
 	printf("Maximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);
	printf("Maximum index: %d\n", maxindex);
    printf("Minimum index: %d\n", minindex);
    
    
    for(i=0;i<num;i++)
    {
    sum +=N[i];
	}
	avg=sum/i;
    printf("Average: %.2f\n", avg);
    
    
    printf("Reverse order: ");
    reve=num-1;
    for(i=reve;i>=0;i--)
    printf("%.2f ", N[i]);
    
    
    printf("\nAbove average list: ");
    reve=num-1;
    for(i=reve;i>=0;i--)
    if(N[i] > avg)
	printf("%.2f ", N[i]);
	
	
	printf("\nNegative coordinates: ");
	for(i=0;i<num;i++)
    if (N[i] < 0) 
    	for (j = i + 1; j < num; j++) 
        if (N[j] < 0) 
        printf("(%.2f, %.2f), ", N[i], N[j]);            
        
return 0;
}
