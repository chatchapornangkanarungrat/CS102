/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>

int main(){
	int first, second ,third;
	scanf ("%d %d %d", &first ,&second ,&third);
	
	if ( first<=0 || second<=0 || third<=0)
		printf("0\n");
		
	else if ( first+second<=third || first+third<=second || second+third<=first )
		printf("0\n");
		
	else if ( first==second && first==third && second==third )
		printf("1\n");
				
	else if ( first==second || first==third || second==third )
		printf("2\n");
	
	else if ( first!=second && first!=third && second!=third )
		printf("3\n");
	return 0;
}
