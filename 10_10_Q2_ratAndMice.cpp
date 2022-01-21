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

// helper function to verify if we can place
bool canPlace(vector<vector<string>> mat, int i, int j)
{
    int x = mat[1].size();
    int y = mat.size();

    if (mat[i][j] == "X" || i > 0 || i <= y || j > 0 || j <= x)
    {
        return false;
    }

    return true;
}

bool ratAndMice(vector<vector<string>> &mat, vector<vector<int>> &sol, int i, int j)
{
    int x = sol[1].size();
    int y = sol.size();

    //baseCase
    if (i == x && j == y)
    {
        // print
        print2DVector(sol);

        // return
        return true;
    }

    // recursiveCase
    if (canPlace(mat, i, j))
    {

        mat[i][j] == "X";
        sol[i][j] == 1;

        // upwards
        if (ratAndMice(mat, sol, i - 1, j))
        {
            return true;
        }

        // downwards
        if (ratAndMice(mat, sol, i + 1, j))
        {
            return true;
        }

        // left
        if (ratAndMice(mat, sol, i, j - 1))
        {
            return true;
        }

        // Right
        if (ratAndMice(mat, sol, i, j + 1))
        {
            return true;
        }

        print2DVector(sol);

        mat[i][j] == "O";
        sol[i][j] == 0;

        return false;
    }

    return false;
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

    cout << ratAndMice(mat, sol, 0, 0) << endl;

    return 0;
}
