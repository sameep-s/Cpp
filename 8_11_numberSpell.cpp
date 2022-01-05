#include <iostream>
using namespace std;

string spells[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void printSpell(int n)
{
    if (n == 0)
    {
        return;
    }

    int lastDigit = n % 10;
    printSpell(n / 10);

    cout << spells[lastDigit] << " ";
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printSpell(n);

    return 0;
}