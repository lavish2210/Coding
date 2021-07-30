#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int k;
    cin >> k;
    while (k--)
    {
        long long n, x, t;
        cin >> n >> x >> t;
        long long count = 0, dec = 0, xmax = (n - 1) * x, counts = t / x;
        if (t < xmax)
        {
            count += (n - counts -1) * counts;
            count += counts * (counts + 1) / 2;
        }
        else
            count = (n * (n - 1)) / 2;
        cout << count << endl;
    }
    return 0;
}