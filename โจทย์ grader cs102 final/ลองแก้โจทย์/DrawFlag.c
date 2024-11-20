#include <stdio.h>

int main() {
	
	int R,C,i,j;
	scanf("%d", &R);
	scanf("%d", &C);
	
	for (i=1;i<=R;i++)
	{
		printf("@");
		for(j=2;j<=C;j++)
		{
		if(j%2==0)
		printf("#");
		else
		printf("@");
		}
		printf("\n");
	}
	
	
	return 0;
}
