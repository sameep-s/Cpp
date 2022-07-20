#include <iostream>
using namespace std;

void spiralPrint(int arr[][10], int n, int m)
{

    // 4 variables
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    // outer loop
    while (startCol <= endCol and startRow <= endRow)
    {
        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        // end col
        for (int row = (startRow + 1); row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        // end row
        for (int col = (endCol - 1); col >= startCol; col--)
        {
            // check
            if (startRow == endRow)
            {
                break;
            }

            cout << arr[endRow][col] << " ";
        }

        // start col
        for (int row = (endRow - 1); row >= startRow + 1; row--)
        {
            // check
            if (startCol == endCol)
            {
                break;
            }

            cout << arr[row][startCol] << " ";
        }

        // update variables
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int n = 4, m = 4;

    // Print array in spiral form
    int arr[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};

    spiralPrint(arr, n, m);

    return 0;
}