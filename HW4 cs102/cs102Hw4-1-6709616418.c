#include <stdio.h>

void swap_elements(int *arr, int pos1, int pos2) {
    int z;
	z= arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = z;
}

int main() 
{
    int n[100];
    int e, pos1, pos2,i;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &e);


    printf("Enter %d numbers: ", e);
    for (i=0;i<e;i++) 
        scanf("%d", &n[i]);

    printf("Enter first position to swap (0-%d): ", e-1);
    scanf("%d", &pos1);
    printf("Enter second position to swap (0-%d): ", e-1);
    scanf("%d", &pos2);

    swap_elements(n, pos1, pos2);
    printf("After swapping elements at positions %d and %d:\n", pos1, pos2);
    for (i=0;i<e;i++) 
        printf("%d ", n[i]);

    return 0;
}
