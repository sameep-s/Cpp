#include <iostream>
using namespace std;

void display(int arr[])
{
    int s = sizeof(arr) / sizeof(int);
    cout << "size(display) : " << s << endl;
    arr[2] = 999;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    cout << "size(main) : " << size << endl;

    display(arr);

    int *p = &size;
    cout << p << " " << *p << " " << &p << " " << endl;

    return 0;
}
