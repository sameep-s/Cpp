#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;

    // getline(cin, s, '.');
    // for (char ch : s)
    // {
    //     cout << ch << " ";
    // }

    // cout << endl;
    // cout << s << endl;

    int n = 5;
    vector<string> sarr;
    string temp;

    while (n--)
    {
        getline(cin, temp, ' ');
        sarr.push_back(temp);
    }

    for (string x : sarr)
    {
        cout << x << "," << endl;
    }

    return 0;
}