#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int popcount(ll x) {
    int cnt = 0;
    for (ll i = 1; i < (1LL << 60); i <<= 1) {
        if (x & i) cnt++; 
    }

    return cnt;
}

int main()
{
    ll a,b,c;
    cin >> a >> b >> c;

    ll x = 0;
    ll y = 0;
    for (ll i = 1; i < (1LL << 60); i <<= 1) {
        if (c & i) {
            x += i; 
        }
    }

    for (int j = 0; j < 2; j++) {
        for (ll i = 1; i < (1LL << 60); i <<= 1) {
            if (c & i) {
                if (popcount(x) > a && popcount(y) < b) {
                    x -= i;
                    y += i;
                }
                if (popcount(x) < a && popcount(y) > b) {
                    x += i;
                    y -= i;
                }
            } else {
                if (popcount(x) + popcount(y) < a + b) {
                    x += i;
                    y += i;
                }
            }

            if (popcount(x) == a && popcount(y) == b) {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
