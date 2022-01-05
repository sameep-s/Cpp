#include <iostream>
using namespace std;

// array is always passed by reference
void printArray(int arr[][100], int n, int m)
{

    cout << "below is printed array: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // constraints
    int arr[100][100];

    // n rows m columns
    cout << "Enter values of rows and columns: " << endl;
    int n, m;

    cin >> n >> m;

    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Element: " << (j + 1) << " of row: " << (i + 1) << endl;
            cin >> arr[i][j];
        }
    }

    printArray(arr, n, m);

    return 0;
}