#include <iostream>
#include <vector>
using namespace std;

//-------------------- helperFucntion
bool isGood(vector<vector<int>> mat, int i, int j, int n, int num)
{

    // check up, down, left, right
    for (int x = 0; x < n; x++)
    {
        if (mat[i][x] == num || mat[x][j] == num)
        {
            return false;
        }
    }

    // chech subGrid (formula (i/ underRoot(n))*underRoot(n))
    int sx = (i / 3) * 3;
    int sy = (j / 3) * 3;

    for (int x = sx; x < (sx + 3); x++)
    {
        for (int y = sy; y < (sy + 3); y++)
        {
            if (mat[x][y] == num)
            {
                return false;
            }
        }
    }

    return true;
}

//------------  To print Matrix
void print2DMatrix(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// main function sudokuSolver
bool solveSudoku(vector<vector<int>> &mat, int i, int j, int n)
{
    // base case
    if (i == n)
    {
        // print
        print2DMatrix(mat);
        cout << endl;

        // return
        return true;
    }

    // recursive cases
    // if an element is already there.
    if (mat[i][j] != 0)
    {
        return solveSudoku(mat, i, j + 1, n);
    }

    // if it's an end of the row
    if (j == n)
    {
        return solveSudoku(mat, i + 1, 0, n);
    }

    // cases to be filled
    for (int no = 1; no <= n; no++)
    {
        if (isGood(mat, i, j, n, no))
        {
            mat[i][j] = no;
            bool solveSubProb = solveSudoku(mat, i, j + 1, n);
            if (solveSubProb == true)
            {
                return true;
            }

            // backtracking
            mat[i][j] = 0;
        }
    }

    // if no option works return false.
    return false;
}

int main()
{
    int n = 9;
    vector<vector<int>> mat = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 0, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if (!solveSudoku(mat, 0, 0, n))
    {
        cout << "No Solution Exist. ";
    }

    return 0;
}