// Linear Search Algorithm

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) // When pasing an array to a function array is passed by reference only.
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 34, 545, 76, 76, 44, 3, 6, 8, 9, 5, 3, 2, 5, 78, 90, 0};

    int n = sizeof(arr1) / sizeof(int);
    int key;
    cout << "Enter the key : ";
    cin >> key;
    int index = linearSearch(arr1, n, key);

    if (index != -1)
    {
        cout << "The Key is present on index : " << index << endl;
    }
    else
    {
        cout << "Key not present in the array. " << endl;
    }

    return 0;
}

// Array swapNumbers
/*
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

    //  swap without third variable
    // a = a + b;
    // b = a - b;
    // a = a - b;

    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "After swap : " << a << " " << b << endl;
}

int main()
{
    int a = 5, b = 6;

    cout << "a : " << a << ", b : " << b << endl;
    swap(&a, &b);
    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    cout << "Swap : "
         << "a : " << a << ", b : " << b << endl;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 9, b = 27;
    cout << "a : " << a << ", b : " << b << endl;

    swap(a, b);

    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}

*/
