#include <iostream>
using namespace std;

void watchVideo(int *viewsPtr)
{
    // watch video view count should increment by 1.

    *viewsPtr = *viewsPtr + 1;
}

int main()
{

    int views = 100;
    watchVideo(&views);

    cout << "Views: " << views << endl;

    return 0;
}
