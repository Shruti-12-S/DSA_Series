#include <iostream>
#include <climits>
using namespace std;

int getColSum(int mat[][3], int rows, int cols)
{
    int maxColSum = INT_MIN;

    int i, j;

    for (i = 0; i < cols; i++)
    {
        int colSum = 0;
        for (j = 0; j < rows; j++)
        {
            colSum += mat[j][i];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rows = 3;
    int cols = 3;

    cout << getColSum(mat, rows, cols) << endl;

    return 0;
}