#include <iostream>

using namespace std;

using ll = long long;

ll findDiagonal(ll layer) {
    return 1 + (layer - 1) * layer;
}

void solve(ll y, ll x) {
    auto layer = max(x, y);
    auto d = findDiagonal(layer);

    if (x == y) {
        cout << d << '\n';
        return;
    }

    auto p = layer % 2;

    if (x < y) { // -> layer = y, d = 1 + (y - 1) * y = 1 + y * y - y
        if (0 == y % 2) {
            cout << 1 + y * y - x;
        }
        else {
            cout << 1 + y * y - y - y + x;
        }
    }
    else { // -> layer = x, d = 1 + (x - 1) * x = 1 + x * x - x
        if (0 == x % 2) {
            cout << 1 + x * x - x - x + y;
        }
        else {
            cout << 1 + x * x - y;
        }
    }

    cout << '\n';
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