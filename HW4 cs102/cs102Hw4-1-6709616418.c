#include <stdio.h>

void swapping (int n[100], int x, int y) {
	int z;
	z=n[x];
	n[x]=n[y];
	n[y]=z;
}

int main () {
	int x,y,i,e;
	int n[100];
	
	printf("Enter the number of elements (max 100): ");
	scanf("%d", &e);
	
	printf("Enter %d numbers: ", e);
	for(i=0;i<e;i++)
	scanf("%d", &n[i]);
	
	printf("Enter first position to swap (0-%d): ", e-1);
	scanf("%d", &x);
	printf("Enter second position to swap (0-%d): ", e-1);
	scanf("%d", &y);
	
	swapping (n,x,y);
	printf("After swapping elements at positions %d and %d: \n", x,y);
	for(i=0;i<e;i++)
	printf("%d ", n[i]);
	
return 0;
}
