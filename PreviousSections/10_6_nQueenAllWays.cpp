#include <iostream>
using namespace std;

// print the board
void printBoard(int n, int board[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// to verify can place
bool canPlace(int board[][20], int x, int y, int n)
{
    // check upwards
    for (int k = 0; k < n; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }

    // check left diagonal
    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    // check right diagonal

    i = x, j = y;
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}

int solveNQueen(int n, int board[][20], int i)
{
    int ways = 0;

    // base case
    if (i == n)
    {
        // if end is reached i.e solution found print the config
        printBoard(n, board);
        cout << endl;

        return 1;
    }

    // recursive case
    // trying to place a queen in every row
    for (int j = 0; j < n; j++)
    {
        if (canPlace(board, i, j, n))
        {
            board[i][j] = 1;
            ways += solveNQueen(n, board, i + 1);

            // backtrack
            board[i][j] = 0;
        }
    }

    return ways;
}

int main()
{
    int board[20][20] = {0};
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    solveNQueen(n, board, 0);

    // cout << "The number of ways: \n"
    //      << solveNQueen(n, board, 0);

    return 0;
}
