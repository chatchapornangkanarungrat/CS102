#include <stdio.h>
int main() 
{
	char text[51];
	int con=0,vow=0,upper=0,lower=0;
	int size=0, i, palin=1;
	
	scanf("%s", text);
	
	while (text[size]!='\0') 
	{
    size++;
	}
	printf("Size of input string is %d\n", size);
    
    
    for(i=0; i<size ; i++)
	{
		if ( text[i]=='a' || text[i]=='A' || text[i]=='e' || text[i]=='E' || 
		text[i]=='i' || text[i]=='I' || text[i]=='o' || text[i]=='O' || text[i]=='u' || text[i]=='U' )
		vow++;
		else
		con++;
	}
	printf("#Consonants: %d\n", con);
    printf("#Vowels: %d\n", vow);
    
    
    for(i=0; i<size ; i++)
	{
		if ( text[i]>='A' && text[i]<='Z' )
		upper++;
		else
		lower++;
	}
    printf("#Upper-case letters: %d\n", upper);
    printf("#Lower-case letters: %d\n", lower);
    
    
    for (i=0; i<size/2 ; i++) 
    {
        if (text[i] != text[size-i-1]) /// check front and back each alphabet -1 to avoid '\0'
        {
            palin=0; 
            break;
        }
        /*
        HellolleH
        size = 9
        i=0 H=H
        i=1 e=e
        i=2 l=l
        i=3 l=l
        i=4    i<size/2 F 
        
        
        hello
        i=1 h=o
        i=2 e=l
        */
    }
    
    if (palin==1)
        printf("Is a palindrome string: Yes\n");
    else
        printf("Is a palindrome string: No\n");
        
return 0;
}
