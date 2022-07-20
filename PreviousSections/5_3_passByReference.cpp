#include <iostream>
using namespace std;

// Pass by reference
void applyTax(int income, float tax)
{
    income = (1 - tax) * income;
    cout << "income: " << income << endl;
}

int main()
{
    int income = 10000;
    applyTax(income, 0.13);

    cout << "income: " << income << " (in main)." << endl;

    return 0;
}