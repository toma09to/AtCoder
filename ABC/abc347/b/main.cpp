#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    set<string> sub;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; i+j <= s.size(); j++) {
            sub.insert(s.substr(i, j));
        }
    }

    cout << sub.size() << endl;
    return 0;
}
