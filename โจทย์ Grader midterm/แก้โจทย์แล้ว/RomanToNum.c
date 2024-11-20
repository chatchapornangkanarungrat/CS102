/*
LANG: C
COMPILER: DEV-C++
*/
/* NAME: Chatchaporn Angkanarungrat
SID: 6709616418
*/

#include <stdio.h>

int main()
{
	
	char roman;
	scanf("%c", &roman);
	 
	if (roman == 'I') {
        printf("1\n");
    } else if (roman == 'V') {
        printf("5\n");
    } else if (roman == 'X') {
        printf("10\n");
    } else if (roman == 'L') {
        printf("50\n");
    } else if (roman == 'C') {
        printf("100\n");
    } else if (roman == 'D') {
        printf("500\n");
    } else if (roman == 'M') {
        printf("1000\n");
    } else {
        printf("Invalid\n");
    }

return 0;	
}

	
	
	
	
	
	/*
	switch (Roman) 
	{
		case 'I': printf("\n1"); 
		break;
		case 'V': printf("\n5"); 
		break;
		case 'X': printf("\n10");
		break;
		case 'L': printf("\n50");
		break;
		case 'C': printf("\n100");
		break;
		case 'D': printf("\n500");
		break;
		case 'M': printf("\n1000");
		break;
		default : printf("\nInvalid");

	}
	return 0;
} 

*/
