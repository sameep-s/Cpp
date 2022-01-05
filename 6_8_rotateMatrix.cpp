#include <iostream>
#include <vector>
using namespace std;

// to rotate Matrix
vector<vector<int>> rotate(vector<vector<int>> &arr)
{
    // code
    int n = arr.size();

    for (int x = 0; x < (n / 2); x++)
    {
        for (int y = 0; y < (n - x - 1); y++)
        {
            int temp = arr[x][n - 1 - y];

            // values from left to top
            arr[x][n - 1 - y] = arr[y][x];

            // values from bottom to left
            arr[y][x] = arr[n - 1 - x][y];

            // values from top to bottom
            arr[n - x - 1][y] = arr[n - 1 - y][n - 1 - x];

            // values from left to right
            arr[n - 1 - y][n - 1 - x] = temp;
        }
    }
    return arr;
}

// printing vector
void printVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate(arr);
    printVector(arr);

    return 0;
}