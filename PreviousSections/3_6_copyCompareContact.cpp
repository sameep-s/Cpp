#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    // strlen- length
    cout << strlen(a) << endl;

    // strcpy- copy
    strcpy(b, a);
    cout << b << endl;

    // strcmp- compare
    cout << strcmp(a, b) << endl;

    // strcat- Concatinate
    char web[] = "www.";
    char domain[] = "facebook.com/sameep.sharma1";

    cout << "Strcat: " << strcat(web, domain) << endl;

    strcpy(b, strcat(web, domain));
    cout << "b: " << b << endl;

    return 0;
}