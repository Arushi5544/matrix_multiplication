#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void matrix_mul(int **arr, int r, int c, int **arr2, int c1,int **mul){

	for(int a=0;a<r;a++)
	{
		for(int i=0;i<c1;i++)
		{
			for(int j=0;j<c;j++)
			{
				mul[a][i]=mul[a][i]+arr[a][j]*arr2[j][i];
			}
		}
	}
}
	
void print(int **mul, int r, int c1){
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%7d",mul[i][j]);
		}
		printf("\n");
	}
}
int main(){
	srand(time(NULL));
	int r,c,r1,c1;
	do{
		r=(rand() % (10 - 1 + 1)) + 1;
		c=(rand() % (10 - 1 + 1)) + 1;
		r1=(rand() % (10 - 1 + 1)) + 1;
		c1=(rand() % (10 - 1 + 1)) + 1;
	}while(c!=r1);
	int num = (rand() % (10 - 1 + 1)) + 1; 
	int **arr = malloc(r * sizeof(int *));
    int **arr2 = malloc(r1 * sizeof(int *));
    int **mul = malloc(r * sizeof(int *));
    for(int i = 0; i<r; i++) {
    	arr[i] = malloc(c * sizeof(int));
    	mul[i] = malloc(c1 * sizeof(int));
	}
	for(int i = 0; i<r1; i++) {
    	arr2[i] = malloc(c1 * sizeof(int));
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			arr[i][j]=(rand() % (10 - 1 + 1)) + 1;
		}
	}
	printf("input matrix 1\n\n");
	print(arr,r,c);
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			arr2[i][j]=(rand() % (10 - 1 + 1)) + 1;
		}
	}
	printf("\ninput matrix 2\n\n");
	print(arr2,r1,c1);
	for (int i = 0; i < r; i++) {
        for (int j = 0; j < c1; j++) {
            mul[i][j] = 0;
        }
    }
	if(c==r1)
		matrix_mul(arr, r, c, arr2, c1, mul);
	else
		return 1;
	printf("\noutput matrix\n\n");
	print(mul,r, c1);
	return 0;
}
