#include <iostream>
#include <map>

using namespace std;

using ll = long long;

map<pair<ll, ll>, ll> memo{};

void solve(ll y, ll x) {
    if (memo.end() != memo.find({ y, x })) {
        cout << memo[{y, x}] << '\n';
        return;
    }

    auto m = (x < y) ? y : x;

    ll v{ 0 };
    if (0 == m % 2) {
        v = 1 + m * m - m + y - x;
    }
    else {
        v = 1 + m * m - m + x - y;
    }
    memo.insert({ {y, x}, v });

    cout << v << '\n';
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