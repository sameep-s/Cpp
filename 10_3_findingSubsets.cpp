#include <iostream>
using namespace std;

// find subsets
void findSubsets(char *input, char *output, int i, int j)
{
    // baseCase
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if (output[0] == '\0')
        {
            cout << "NULL";
        }

        cout << output << endl;
        return;
    }

    // recCase
    // include ith letter
    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1);

    // exclude ith letter
    findSubsets(input, output, i + 1, j);
}

int main()
{
    char input[100];
    char output[100];

    cout << "Enter the set of characters: ";
    cin >> input;

    findSubsets(input, output, 0, 0);

    return 0;
}