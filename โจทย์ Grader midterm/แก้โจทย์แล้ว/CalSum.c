/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>
int main() {
	
	int input,i;
	int sum=0;
	
	scanf("%d" ,&input);
	
	for (i=1 ;i<=input; i++)
	{
	sum=sum+i;
	}	
	printf("%d", sum);
	return 0;
	
}
