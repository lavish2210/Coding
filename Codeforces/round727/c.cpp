#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, x;
    cin >> n >> k >> x;
    int a[n], gap;
    vector<pii> v;
    cin >> a[0];
    for (int i = 1; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 1; i < n; i++)
    {
        gap = abs(a[i] - a[i - 1]);
        if (gap > x)
            v.push_back({(gap - 1) / x, i - 1});
    }

    sort(v.begin(), v.end());

    int answer = v.size() + 1;

    for (auto i = v.begin(); i != v.end(); i++)
        if ((*i).first <= k)
        {
            k -= (*i).first;
            answer--;
        }

    cout << answer << endl;
    return 0;
}