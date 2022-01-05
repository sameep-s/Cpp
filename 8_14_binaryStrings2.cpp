#include <iostream>
using namespace std;

// This fckin program uses alot of recursion.

void generateAllStringsUtil(int k, char str[], int n)
{
    if (n == k)
    {
        str[n] = '\0';      // this implies the end of the string.
        cout << str << " "; // you print out the string that is complete.

        return;
    }

    if (str[n - 1] == '1')
    {
        str[n] = '0'; // since the string can't have consecutive 1's only option is to print zero.
        generateAllStringsUtil(k, str, n + 1);
    }

    if (str[n - 1] == '0')
    {
        str[n] = '0';
        generateAllStringsUtil(k, str, n + 1);

        str[n] = '1';
        generateAllStringsUtil(k, str, n + 1);
    }
}

void generateAllStrings(int k)
{
    // base case
    if (k <= 0)
    {
        return;
    }

    char str[k]; // string i.e charater array of size k.

    // recursive cases
    str[0] = '0';
    generateAllStringsUtil(k, str, 1);

    str[0] = '1';
    generateAllStringsUtil(k, str, 1);
}

int main()
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    generateAllStrings(k);

    return 0;
}
