#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // initializing chcracter Array
    char a[50];
    char b[] = {'a', 'b', 'c', 'd', 'e', 'o', 'j', 'k', '\0'}; // wrong
    char c[50] = {'a', 'b', 'c', '\0'};                        // right way- (termination by a null character)
    char d[10] = "abc";
    char g[] = "sameep"; // this way does'nt have to add garbage value.

    // input Output
    cout << strlen(b) << endl; // 8- actual number of characters.
    cout << sizeof(b) << endl; // 9- characters+garbage value.

    return 0;
}