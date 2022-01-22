// backtracking question2 ratAndMice.

#include <iostream>
#include <vector>
using namespace std;

// function for printing the vector
void print2DVector(vector<vector<int>> mat)
{
    int x = mat.size();
    int y = mat[1].size();

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(vector<vector<string>> mat, int x, int y)
{
    int i = mat[1].size();
    int j = mat.size();

    if (x > i || y > j || x < 0 || y < 0 || mat[x][y] == "X")
    {
        return false;
    }

    return true;
}

void ratAndMice(vector<vector<string>> &mat, vector<vector<int>> &sol, int i, int j)
{
    int x = sol[1].size();
    int y = sol.size();

    if (i == -1, j == -1, i == x, j == y)
    {
        return;
    }

    // baseCase
    if (i == y or j == x)
    {
        // print the solution
        // print2DVector(sol);

        // return
        return;
    }

    // recursive cases

    // down
    if (isSafe(mat, i + 1, j))
    {
        cout << "down" << endl;

        mat[i - 1][j] = "X";
        sol[i - 1][j] = 1;
        ratAndMice(mat, sol, i + 1, j);
        mat[i - 1][j] = "O";
        cout << "downEnd" << endl;
        sol[i - 1][j] = 0;
    }

    // left
    if (isSafe(mat, i, j - 1))
    {
        cout << "left" << endl;

        mat[i - 1][j] = "X";
        sol[i - 1][j] = 1;
        ratAndMice(mat, sol, i, j - 1);
        mat[i - 1][j] = "O";
        sol[i - 1][j] = 0;
    }

    // right
    if (isSafe(mat, i, j + 1))
    {
        cout << "Right" << endl;

        mat[i - 1][j] = "X";
        sol[i - 1][j] = 1;
        ratAndMice(mat, sol, i, j + 1);
        mat[i - 1][j] = "O";
        sol[i - 1][j] = 0;
    }

    // up
    if (isSafe(mat, i - 1, j))
    {
        cout << "up" << endl;

        mat[i - 1][j] = "X";
        sol[i - 1][j] = 1;
        ratAndMice(mat, sol, i - 1, j);
        mat[i - 1][j] = "O";
        sol[i - 1][j] = 0;
    }

    return;
}

int main()
{
    vector<vector<string>> mat = {{"O", "X", "O", "O"},
                                  {"O", "O", "O", "X"},
                                  {"X", "O", "X", "O"},
                                  {"X", "O", "O", "X"},
                                  {"X", "X", "O", "O"}};

    int i = mat[1].size();
    int j = mat.size();

    vector<vector<int>> sol(j, vector<int>(i, 0));

    ratAndMice(mat, sol, 0, 0);

    return 0;
}
