#include <stdio.h>
void readSquare(int A[8][8],int N)
{
    int r,c;
	for(r=0;r<N;r++)
		for(c=0;c<N;c++)
			scanf("%d", &A[r][c]);		
}

int findMagicNumber(int A[8][8],int N)
{
	int r,c;
	int sum=0;
	int rowSum, colSum, diagleft=0 , diagright=0;
	
	for (c=0;c<N;c++) 
        sum += A[0][c];    //// col as base
	
	for (r=0;r<N;r++) 
	{
		rowSum=0, colSum=0;
        for (c=0;c<N;c++) 
		{
        rowSum += A[r][c];   //// [0][0] [0][1] [0][2]   [1][0] [1][1] [1][2]
        colSum += A[c][r];   //// [0][0]  [1][0]  [2][0]
		}
		diagleft += A[r][r];    //// [0][0] [1][1] [2][2]
    	diagright += A[r][N-r-1];   //// [0][2]    [1][1]   [2][0]
	}

	if(sum == rowSum && rowSum == colSum && colSum == diagleft && diagleft == diagright || A[r][c]>=1 && A[r][c]<=N*N )
	{
		return sum;
	}
	else
		return -1;

    return 0;
}


// Question 5 of Homework 3 (CS102 HW3 1/2567)
// Your program will not successfully be compiled and run properly until readSquare and findMagicNumber functions are defined correctly.
// Let's define readSquare and findMagicNumber functions here !
int main(){

    int arr[8][8];
    int N;

    scanf("%d", &N);
    readSquare(arr, N);

    int magicNumber = findMagicNumber(arr, N);

    if (magicNumber == -1) {
        printf("Your square is NOT a magic square.");
    } else {
        printf("Your square is a magic square!! with the magic constant = %d.", magicNumber);
    }

    return 0;
}
