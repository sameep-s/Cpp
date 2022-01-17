#include <iostream>
#include <vector>
using namespace std;

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

bool solveSudoku(vector<vector<int>> mat, int i, int j, int n)
{
    // base case
    if (i == 9)
    {
        // print
        print2DMatrix(mat);

        // return
        return true;
    }

    // recursive cases

    // if an element is already there
    if (mat[i][j] != 0)
    {
        solveSudoku(mat, i, j + 1, n);
    }

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

    // if (!solveSudoku(mat, 0, 0, n))
    // {
    //     cout << "No Solution Exist. ";
    // }

    return 0;
}