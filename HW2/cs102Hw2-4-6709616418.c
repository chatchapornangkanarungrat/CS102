#include <stdio.h>
int main() 
{
 	int begin, last, d;
 	printf("\nPlease enter the beginning integer : ");
 		scanf("%d", &begin);
 	printf("\nPlease enter the last integer : ");
 		scanf("%d", &last);
	printf("\nAll the numbers that can divided by 13 are : ");
	
	for (d=begin; d <= last; d=d+1) {     /*for (init; condition boolean; update + - x / ) statement */
        if (d%13 == 0) {      /*  d=d+1 == d++ == ++d  == d+=1*/
            printf("\n%d", d);
        }
    }
	
	printf("\nBye!!");
return 0;
}
