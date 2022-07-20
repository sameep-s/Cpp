#include <iostream>
using namespace std;

// reference variables -->  allows us to pass objects by reference
int main()
{

    int x = 23;
    int &y = x;
    cout << "(before) x: " << x << endl;

    y++;

    cout << "(after) x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}