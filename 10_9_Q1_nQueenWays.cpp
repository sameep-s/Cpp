#include <iostream>
#include <vector>
using namespace std;

// function for printing the vector
void print2DVector(vector<vector<char>> mat, int n)
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
bool canPlace(vector<vector<char>> mat, int i, int j, int n)
{
    // upwardsCheck
    for (int x = 0; x <= i; x++)
    {
        if (mat[x][j] == 'Q')
        {
            return false;
        }
    }

    // leftDiagonalCheck
    int x = i, y = j;
    while (x >= 0 && y >= 0)
    {
        if (mat[x][y] == 'Q')
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
        if (mat[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y++;
    }

    return true;
}

// nQueen Function
int nQueenAllWays(vector<vector<char>> &mat, int i, int j, int n)
{

    int ways = 0;

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

    for (int j = 0; j < n; j++)
    {
        if (canPlace(mat, i, j, n))
        {
            mat[i][j] = 'Q';
            ways += nQueenAllWays(mat, i + 1, j, n);
        }

        // backTracking
        mat[i][j] = '#';
    }

    return ways;
}

int main()
{
    int n;
    cout << "Enter the size of the Matrix: ";
    cin >> n;

    // initialize 2D vector with vector 0.
    vector<vector<char>> mat(n, vector<char>(n, '#'));

    cout << nQueenAllWays(mat, 0, 0, n);

    return 0;
}