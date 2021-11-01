#include <iostream>

using namespace std;

using ll = long long;

ll findDiagonal(int layer) {
    return 1LL + (layer - 1LL) * static_cast<ll>(layer);
}

void solve(int y, int x) {
    auto layer = max(x, y);
    auto d = findDiagonal(layer);

    if (x == y) {
        cout << d << '\n';
        return;
    }

    auto p = layer % 2;

    if (x < y) {
        if (0 == p) {
            cout << d + y - x;
        }
        else {
            cout << d - y + x;
        }
    }
    else {
        if (0 == p) {
            cout << d - x + y;
        }
        else {
            cout << d + x - y;
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
        int y, x;
        cin >> y >> x;
        solve(y, x);
    }

    return 0;
}