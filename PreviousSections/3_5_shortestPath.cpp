#include <iostream>
using namespace std;

int main()
{
    char path[500];
    cin.getline(path, 500);

    int x = 0, y = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {
        switch (path[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    cout << "x and y: " << x << ", " << y << endl;

    // first quardrant
    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }

    return 0;
}