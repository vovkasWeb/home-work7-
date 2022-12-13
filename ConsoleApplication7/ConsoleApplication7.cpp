
#include <time.h>
#include <iostream>
using namespace std;
#define N 6
#define M 18
void del_col(int*, int, int, int, int);
int main()
{
    //1

    int arr[N][M] = {
        {17,12,13,10,8,10,7,4,13,15,0,6,11,8,2,1,4,12},
        {4,9,7,6,16,4,16,16,17,5,6,7,13,2,6,9,14,3},
        {4,9,7,6,16,4,16,16,17,5,6,7,13,2,6,9,14,3},
        {8,4,3,5,14,12,12,1,10,1,13, 10,10,13,3,4,3,5},
        {3,15,9,10,0,1,8,12,9,8,13,14,5,15,10,6,16,17},
        {8,3,5,9 ,8,15,2,11,14,12,12,10,11,9,13,7,6,5},

    };
    int i, j, count = 0;
  
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M - count; j++)
            if (arr[i][j] == 0) {
                del_col(arr[0], N, M, count, j);
                count++;
                j--;
            }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M - count; j++)
            cout << arr[i][j]<<" ";
        cout << '\n';
   
    }
    cout << '\n';
    //2
    del_col(arr[0], N, M, 5, 10);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M - count; j++)
            cout << arr[i][j] << " ";
        cout << '\n';

    }
}
void del_col(int* arr, int nRow, int nCol, int count, int k)
{
    for (int i = 0; i < nRow; i++)
        for (int j = k; j < nCol - count - 1; j++)
            *(arr + i * nCol + j) = *(arr + i * nCol + j + 1);
}