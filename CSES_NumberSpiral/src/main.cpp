#include <iostream>
#include <map>

using namespace std;

using ll = long long;

map<ll, ll> d{};
map<pair<ll, ll>, ll> memo{};

void solve(ll y, ll x) {
    if (memo.end() != memo.find({ y, x })) {
        cout << memo[{y, x}] << '\n';
        return;
    }

    auto m = (x < y) ? y : x;
    ll w{};
    if (d.end() != d.find(m)) {
        w = d[m];
    }
    else {
        w = 1 + m * m - m;
        d.insert({ m, w });
    }

    ll v{ 0 };
    if (0 == m % 2) {
        v = w + y - x;
    }
    else {
        v = w + x - y;
    }
    memo.insert({ {y, x}, v });

    cout << v << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

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