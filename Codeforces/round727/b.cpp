#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((int)s[i]) - 96;
        a[i] = sum;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l != 1)
            cout << a[r - 1] - a[l - 2];
        else
            cout << a[r - 1];
        cout << endl;
    }
    return 0;
}