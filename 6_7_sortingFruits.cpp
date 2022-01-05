#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// comparator- price
bool compPrice(pair<string, int> v1, pair<string, int> v2)
{
    return v1.second < v2.second;
}

// comparator- Name
bool compName(pair<string, int> v1, pair<string, int> v2)
{
    return v1.first < v2.first;
}

// function to sort vector
void sortFruit(vector<pair<string, int>> &v, string s)
{
    if (s == "price")
    {
        sort(v.begin(), v.end(), compPrice);
    }
    else if (s == "name")
    {
        sort(v.begin(), v.end(), compName);
    }
}

// function to print vector
void printVector(vector<pair<string, int>> v)
{
    for (auto x : v)
    {
        cout << "{" << x.first << ", " << x.second << "} ";
    }
}

int main()
{
    vector<pair<string, int>> v = {{"Mango", 100},
                                   {"Guava", 70},
                                   {"Grapes", 40},
                                   {"Apple", 60},
                                   {"Banana", 30}};
    string s = "price";

    sortFruit(v, s);
    printVector(v);

    return 0;
}