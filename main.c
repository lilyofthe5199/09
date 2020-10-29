#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ROWS 3
#define COLS 3
void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS]);
void printMatrx(int A[][COLS]);
int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS] ={ // 행렬 A 
	{2, 3, 0},
	{8, 9, 1},
	{7, 0, 5}};
	

 	int B[ROWS][COLS] ={ // 행렬 B 
	{1, 0, 0},
	{0, 1, 0},
	{0, 0, 1}};
	
	int C[ROWS][COLS];	// 덧셈 결과 행렬 
	
	addMatrx(A, B, C);
	printMatrx(C);
	
	return 0;
}

	void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
	{
		
		int i, j;
		for(i=0; i<3; i++)	//for문을 이용해서 계산
		{
			for(j=0; j<3; j++)
			C[i][j]=A[i][j]+B[i][j];	//C=A+B 형태로 행렬 계산
		}
		
	}
	
	void printMatrx(int A[][COLS])
	{
		
		int i, j;
		for(i=0; i<3; i++)	//for문을 이용해서 계산
		{
			for(j=0; j<3; j++)
			printf("%d ", A[i][j]);
			printf("\n");
		}
		
	}
