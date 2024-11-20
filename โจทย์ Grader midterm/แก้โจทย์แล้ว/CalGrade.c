/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>

int main () {
	
	int grade;
	scanf("%d", &grade);
	
	if ( grade<=59)
	printf("See you next semester");
	
	if ( grade>=60 && grade<=69 )
	printf("C");
	
	if ( grade>=70 && grade<=74 )
	printf("C+");
	
	if ( grade>=75 && grade<=84 )
	printf("B");
	
	if ( grade>=85 && grade<=89 )
	printf("B+");
	
	if ( grade>=90 && grade<=100 )
	printf("A");
	
	return 0;
}
