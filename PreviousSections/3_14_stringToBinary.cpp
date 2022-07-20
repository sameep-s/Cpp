#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(string s)
{
    int sum = 0, n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[(n - i - 1)] == '1')
        {
            sum += pow(2, i);
        }
    }

    return sum;
}

int main()
{
    string s = "110111";

    cout << binaryToDecimal(s) << endl;

    return 0;
}
