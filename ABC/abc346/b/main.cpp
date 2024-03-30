#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int w,b;
    cin >> w >> b;
    string s = "wbwbwwbwbwbw";

    for (int i = 0; i < 10; i++) {
        s += s;
    }

    for (int i = 0; i < s.size()-w-b; i++) {
        int cnt_w = 0;
        int cnt_b = 0;
        for (int j = 0; j < w+b; j++) {
            if (s[i+j] == 'w') {
                cnt_w++;
            } else {
                cnt_b++;
            }

            if (cnt_w == w && cnt_b == b) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
