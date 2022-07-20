#include <iostream>
using namespace std;

#define ll long long
ll moduloExpo(ll a, ll n, ll m)
{
    ll ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        n = n >> 1;
    }
    cout << "( a ^ n ) % m: " << ans << endl;

    return ans;
}

int main()
{
    ll a, n, m;
    cout << "Enter the values of a , n and m: ";

    cin >> a >> n >> m;

    moduloExpo(a, n, m);

    // moduloExpo(5, 3, 10);

    return 0;
}