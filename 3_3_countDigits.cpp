#include <iostream>
using namespace std;

// given a sentence, count the number of alphabets, digits & spaces in the sentence.
// hello 5 world.

int main()
{

    char ch;
    ch = cin.get();

    // count
    int alpha = 0, space = 0, digit = 0;

    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digit++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space++;
        }

        ch = cin.get();
    }

    cout << "Total alphabets: " << alpha << endl;
    cout << "Total digits: " << digit << endl;
    cout << "Total spaces: " << space << endl;

    return 0;
}