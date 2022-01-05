#include <iostream>
#include <string>

using namespace std;

int compress(string str)
{
    // your code goes here
    int n = str.length();
    string output;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < (n - 1) and (str[i + 1] == str[i]))
        {
            count++;
            i++;
        }
        output += str[i];

        if (count > 1)
        {
            output += to_string(count);
        }
    }

    return output.length();
}

int main()
{
    string str1 = {'a', 'b', 'b', 'c', 'c', 'c'};
    string str2 = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

    cout << "string 1: " << compress(str1) << endl;
    cout << "string 2: " << compress(str2) << endl;

    return 0;
}