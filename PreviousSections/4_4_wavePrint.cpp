#include <iostream>
using namespace std;

// to print reverseWaveFrom of matrix

void wavePrint(int arr[][10], int n, int m)
{
    int pulse = 0;
    int row = (n - 1), col = (m - 1);

    while (col >= 0)
    {
        if (pulse == 0)
        {
            for (int r = 0; r <= row; r++)
            {
                cout << arr[r][col] << " ";
            }

            pulse = 1;
            col--;
        }
        else
        {
            for (int r = row; r >= 0; r--)
            {
                cout << arr[r][col] << " ";
            }

            pulse = 0;
            col--;
        }
    }
}

int main()
{
    int n = 4, m = 4;

    // Print array in spiral form
    int arr[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // calling function
    wavePrint(arr, n, m);

    return 0;
}