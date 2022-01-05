#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    cout << "length: " << s.length() << endl;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << isPalindrome("abcdcba") << endl;

    return 0;
}