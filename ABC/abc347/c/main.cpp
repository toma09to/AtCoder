#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> d(n), md(n);
    for (int i = 0; i < n; i++) cin >> d[i];

    for (int i = 0; i < n; i++) {
        md[i] = d[i] % (a+b);
    }
    sort(md.begin(), md.end());
    int min = md[0];
    int max = md[n-1];

    int dif_max = 0;
    for (int i = 0; i < n-1; i++) {
        if (md[i+1] - md[i] > dif_max) {
            dif_max = md[i+1] - md[i];
        }
    }

    if (max-min < a || a+b-dif_max < a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
