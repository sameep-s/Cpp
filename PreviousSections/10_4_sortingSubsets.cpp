#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// custom comparator
bool compareStr(string a, string b)
{
    // based on size
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

// find subsets
void findSubsets(char *input, char *output, int i, int j, vector<string> &list)
{
    // baseCase
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp = output;

        if (temp[0] == '\0')
        {
            temp = "null";
            list.push_back(temp);
        }
        else
        {
            list.push_back(temp);
        }

        return;
    }

    // recCase
    // include ith letter
    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1, list);

    // exclude ith letter
    findSubsets(input, output, i + 1, j, list);
}

int main()
{
    char input[100];
    char output[100];
    vector<string> list;

    cout << "Enter the set of characters: ";
    cin >> input;

    findSubsets(input, output, 0, 0, list);
    sort(list.begin(), list.end(), compareStr);

    int i = 0;
    for (auto x : list)
    {

        cout << (++i) << ": " << x << endl;
    }

    return 0;
}