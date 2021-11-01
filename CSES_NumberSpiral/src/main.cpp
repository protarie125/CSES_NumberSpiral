#include <iostream>

using namespace std;

using ll = long long;

void solve(ll y, ll x) {
    auto m = (x < y) ? y : x;
    auto d = (0 == m % 2) ? 1 : -1;

    cout << 1 + m * m - m + d * (y - x) << '\n';
}

int main()
{
    int t;
    cin >> t;
    for (int ct = 0; ct < t; ++ct)
    {
        ll y, x;
        cin >> y >> x;
        solve(y, x);
    }

    return 0;
}