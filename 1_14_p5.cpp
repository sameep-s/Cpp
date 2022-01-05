#include <iostream>
#include <vector>
using namespace std;

void closestSum(vector<int> arr, int n)
{
    int l = 0, r = (arr.size() - 1), ele1 = 0, ele2 = 0;
    int diff = INT_MAX;

    while (r > l)
    {
        if (abs(arr[l] + arr[r] - n) < diff)
        {
            ele1 = arr[l];
            ele2 = arr[r];

            diff = abs((arr[l] + arr[r]) - n);
        }

        if (abs(arr[l] + arr[r]) > n)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << ele1 << " and " << ele2 << endl;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    closestSum(arr, 54);

    // cout << abs(-1.23332) << " " << abs(-1.65345) << endl;

    return 0;
}

// -----------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// void printClosest(int arr[], int n, int x)
// {
//     int res_l, res_r;

//     int l = 0, r = n - 1, diff = INT_MAX;

//     while (r > l)
//     {
//         if (abs(arr[l] + arr[r] - x) < diff)
//         {
//             res_l = l;
//             res_r = r;
//             diff = abs(arr[l] + arr[r] - x);
//         }

//         if (arr[l] + arr[r] > x)
//             r--;
//         else
//             l++;
//     }

//     cout << arr[res_l] << " and " << arr[res_r];
// }

// int main()
// {
//     int arr[] = {10, 22, 28, 29, 30, 40}, x = 54;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printClosest(arr, n, x);
//     return 0;
// }
