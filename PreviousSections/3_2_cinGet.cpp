#include <iostream>
using namespace std;

int main()
{
    char sent[150];

    char temp = cin.get();

    int len = 0;

    while (temp != '\n')
    {
        sent[len++] = temp;
        // update the value of temp
        temp = cin.get();
    }

    // ending the array with a garbage value
    sent[len] = '\0';

    cout << endl;
    cout << sent << endl;

    cout << "Length: " << len << endl;

    return 0;
}