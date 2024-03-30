#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<ll> st;
    for (int i = 0; i < n; i++) st.insert(a[i]);

    ll sum = k*(k+1)/2;
    for (ll x : st) {
        if (x <= k)
            sum -= x;
    }
    cout << sum << endl;
    return 0;
}
