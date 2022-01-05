#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

void subsetSum(vector<int> num, vector<int> query)
{
    bitset<1000> b;
    b[0] = 1;

    // to make the bitset
    for (int i = 0; i < num.size(); i++)
    {
        b |= (b << num[i]);
    }

    for (int i = 0; i < query.size(); i++)
    {
        b[query[i]] ? cout << "Yes " : cout << "No ";
    }
}

int main()
{
    vector<int> num = {1, 2, 3};
    vector<int> query = {5, 3, 8};

    subsetSum(num, query);

    return 0;
}