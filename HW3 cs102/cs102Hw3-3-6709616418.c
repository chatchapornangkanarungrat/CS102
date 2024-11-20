#include <stdio.h>
int main()
{
	int N,r,c, mat[8][8];
	int sum=0;
	int rowSum, colSum, diagleft=0 , diagright=0;
	
	scanf("%d",&N);

	if (N>=3 && N<=8)
	{
	for(r=0;r<N;r++)
		for(c=0;c<N;c++)
			scanf("%d", &mat[r][c]);
	}
	
	for (c=0;c<N;c++) 
        sum += mat[0][c];    //// col as base
	
	for (r=0;r<N;r++) 
	{
		rowSum=0, colSum=0;
        for (c=0;c<N;c++) 
		{
        rowSum += mat[r][c];   //// [0][0] [0][1] [0][2]   [1][0] [1][1] [1][2]
        colSum += mat[c][r];   //// [0][0]  [1][0]  [2][0]
		}
		diagleft += mat[r][r];    //// [0][0] [1][1] [2][2]
    	diagright += mat[r][N-r-1];   //// [0][2]    [1][1]   [2][0]
	}
	
	if(sum == rowSum && rowSum == colSum && colSum == diagleft && diagleft == diagright || mat[r][c]>=1 && mat[r][c]<=N*N )
	{
	printf("This is a magic square!");
	}
	else
	printf("This is NOT a magic square!");

    return 0;
}
