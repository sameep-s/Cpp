#include <iostream>
#include <algorithm>

using namespace std;

void removeDuplicate(string s)
{
    string temp;

    // code
    sort(s.begin(), s.end());
    cout << "s: " << s << endl;

    for (int i = 0; i < (s.length()); i++)
    {
        if (s[i] != s[i + 1])
        {
            temp += s[i];
        }
    }

    cout << temp << endl;
}

int main()
{
    string s1 = "geeksforgeeks";

    removeDuplicate(s1);

    return 0;
}