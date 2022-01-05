#include <iostream>
#include <cstring>
using namespace std;

// Read N-strings and print the largest sting.upto 1000 characters.

int main()
{
    int n, lenLargest = 0;
    char sentence[1000], largest[1000];

    cout << "Enter the Number of Strings: ";
    cin >> n;

    cin.get(); // trick
    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);

        if (len > lenLargest)
        {
            lenLargest = len;
            strcpy(largest, sentence);
        }
    }
    cout << "Largest string is: " << largest << endl;

    return 0;
}