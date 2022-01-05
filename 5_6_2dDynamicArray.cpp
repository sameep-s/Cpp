#include <iostream>
using namespace std;

int **create2Darray(int rows, int cols)
{
    // creation of dynamic 2D array
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // initializaion in dynamic 2D Array
    int value = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

void print2DArray(int *arr[], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // 2D dynamic array
    int rows, cols;
    cin >> rows >> cols;

    int **arr = create2Darray(rows, cols);
    print2DArray(arr, rows, cols);

    return 0;
}