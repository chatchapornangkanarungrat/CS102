/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>
int main () 
{
	int a,b,c,d,e,f;
	int r1=0,r2=0;
	
	scanf("\n%d %d %d",&a ,&b, &c);
	scanf("\n%d %d %d",&d ,&e, &f);
	
	if ( a>d )
	{
		r1++;
	}
	if ( a<d )
	{
		r2++;
	}
	
	if ( b>e )
	{
		r1++;
	}
	if ( b<e )
	{
		r2++;
	}
	
	if ( c>f )
	{
		r1++;
	}
	if ( c<f )
	{
		r2++;
	}
	
	printf("%d %d", r1, r2);
	
	return 0;
	
}
