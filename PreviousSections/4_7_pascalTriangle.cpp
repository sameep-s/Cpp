#include <iostream>
using namespace std;

printPascal(int n)
{
    // Auxillary array to store generated pascal's triangle
    int arr[n][n];

    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (i == line || i == 0)
            {
                arr[line][i] = 1;
            }
            else
            {
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            }
            cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 6;
    printPascal(n);

    return 0;
}