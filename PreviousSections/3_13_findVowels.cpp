#include <iostream>
using namespace std;

string vowel(string s)
{
    string temp;

    // code
    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            temp += x;
        }
    }

    return temp;
}

int main()
{
    string s1 = "aeoibsddaeioudb";

    cout << vowel(s1) << endl;

    return 0;
}