#include <iostream>
#include <vector>
using namespace std;

// function for printing the vector
void print2DVector(vector<vector<int>> mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// helper function
bool canPlace(vector<vector<int>> mat, int i, int j, int n)
{
    // upwardsCheck
    for (int x = 0; x <= i; x++)
    {
        if (mat[x][j] == 9)
        {
            return false;
        }
    }

    // leftDiagonalCheck
    int x = i, y = j;
    while (x >= 0 && y >= 0)
    {
        if (mat[x][y] == 9)
        {
            return false;
        }
        x--;
        y--;
    }

    // rightDiagonalCheck
    x = i, y = j;
    while (x >= 0 && y < n)
    {
        if (mat[x][y] == 9)
        {
            return false;
        }
        x--;
        y++;
    }

    return true;
}

// nQueen Function
int nQueenAllWays(vector<vector<int>> &mat, int i, int j, int n)
{
    // baseCase
    if (i == n)
    {
        // print
        print2DVector(mat, n);
        cout << endl;

        // return
        return 1;
    }

    // recCase
    // if there is a queen present in the row then go to next row
    int ways = 0;
    for (int j = 0; j < n; j++)
    {
        if (canPlace(mat, i, j, n))
        {
            mat[i][j] = 9;
            ways += nQueenAllWays(mat, i + 1, j, n);
        }

        // backTracking
        mat[i][j] = 0;
    }

    return ways;
}

int main()
{
    int n;
    cout << "Enter the size of the Matrix: ";
    cin >> n;

    // initialize 2D vector with vector 0.
    vector<vector<int>> mat(n, vector<int>(n, 0));

    cout << nQueenAllWays(mat, 0, 0, n);

    return 0;
}