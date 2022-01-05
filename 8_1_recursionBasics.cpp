#include <iostream>
using namespace std;

// Recursion - solution to problem depends on solution to smaller
//[contd.] instances in the same problem.

// steps -->
// 1. find to BASE case.
// 2. Assume solutions to subproblems exist.
// 3. solve current problem asuming subproblem exist.

// Recursion always takes extra space (imp).
unsigned int factorial(unsigned int a)
{
    // below is BASE case
    if (a == 0)
    {
        return 1;
    }

    // this is RECURSIVE case
    return (a * factorial(a - 1));
}

int main()
{
    // factorial of a number using recursion

    int a;
    cout << "Enter the number to find factorial: ";
    cin >> a;

    cout << factorial(a);

    return 0;
}