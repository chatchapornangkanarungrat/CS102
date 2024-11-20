#include <stdio.h>

int main() 
{
    int _input, p, tocheck=0;
    
    printf("Please enter an integer between < 2 to 9999999 > : ");
    scanf("%d", &_input);

    if (_input >= 2 && _input <= 9999999) 
    {
        for (p = 2; p <_input; p++) 
        {
            if (_input % p == 0)
            {
                tocheck=1;
                break;
            }
        }
        if (tocheck==1)
            printf("\n%d is not prime number", _input);
        else
            printf("\n%d is a prime number", _input);
    } 
      
    else {
    printf("\n%d is not between 2 to 9999999, please re-enter : ", _input);
    scanf("%d", &_input);
        
    while(_input <2 || _input>9999999)
        {
        printf("\n%d is not between 2 to 9999999, please re-enter : ", _input);
        scanf("%d", &_input);
      }
    
for (p = 2; p <_input; p++) 
        {
            if (_input % p == 0)
            {
                tocheck=1;
                break;
            }
        }
        if (tocheck==1)
            printf("\n%d is not prime number", _input);
        else
            printf("\n%d is a prime number", _input);
    } 

    return 0;
}
