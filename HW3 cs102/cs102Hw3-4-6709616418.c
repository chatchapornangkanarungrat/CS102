#include <stdio.h>
int main() 
{
	int i, num;
	int reve, j;
	float N[50], max ,min, sum=0, avg;
	int maxindex,minindex;
	
	float *ptr;
	ptr=N; //// ptr=&N[0];
	
	scanf("%d", &num);
	for(i=0;i<num;i++)
 	scanf("%f", ptr+i);
	
	
	max=*ptr;
	for(i=0;i<num;i++)
	if(*(ptr+i) > max || *(ptr+i) ==max)
	{
	max=*(ptr+i);	
	maxindex=i;	
	}			
	
	min=*ptr;
	for(i=0;i<num;i++)
	if(*(ptr+i) < min || *(ptr+i) ==min)
	{
	min=*(ptr+i);
	minindex=i;
	}
 	printf("Maximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);
	printf("Maximum index: %d\n", maxindex);
    printf("Minimum index: %d\n", minindex);
    
    
    for(i=0;i<num;i++)
    {
    sum +=*(ptr+i);
	}
	avg=sum/i;
    printf("Average: %.2f\n", avg);
    
    
    printf("Reverse order: ");
    reve=num-1;
    for(i=reve;i>=0;i--)
    printf("%.2f ", *(ptr+i) );
    
    
    printf("\nAbove average list: ");
    reve=num-1;
    for(i=reve;i>=0;i--)
    if(*(ptr+i) > avg)
	printf("%.2f ", *(ptr+i) );
	
	
	printf("\nNegative coordinates: ");
	for(i=0;i<num;i++)
    if (*(ptr+i) < 0) 
    	for (j = i + 1; j < num; j++) 
        if (*(ptr+j) < 0) 
        printf("(%.2f, %.2f), ", *(ptr+i), *(ptr+j));            
        
return 0;
}
