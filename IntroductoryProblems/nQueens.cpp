#define N 64

#include <bits/stdc++.h>
using namespace std;
 // function to check whether the position is safe or not 
void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
    printf("\n"); 

} 
bool isValid(int board[N][N], int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < col; i++) 
        if(board[row][i])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if(board[i][j])
            return false;

    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if(board[i][j])
            return false;
    return true;
} 

int m = 0;
int queen(int b[N][N],int c, int n)
    {
        if(c==N)
            return 1;
        for(int i=0; i<n; i++)
        {
            if(isValid(b,i,c))
            {

                b[i][c] = 1;
                if (queen(b,c+1, n)) 
                {
                    printSolution(b);
                    m += 1;
                }
                // else b[i][c] = 0;
                b[i][c] = 0;
            }
        }
        return 0;
    }

int main()
{
    int b[N][N];
    for(int i =0; i<N;i++)
        for(int j=0; j<N; j++)
            b[i][j] = 0;
    queen(b,0,N);
    cout << m << endl;
    
    return 0;
}