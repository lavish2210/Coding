#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
using namespace std;

string arrPossible(int a, int b, int c)
{
    if(a+b<c-1){
        return "NO\n";
    }
    return "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, m, mn, mx, mid;
        cin >> a >> b >> c >> m;
        mn = min(a, min(b, c));
        mx = max(a, max(b, c));
        mid = a + b + c - mn - mx;
        a = mn;
        b = mid;
        c = mx;

        if (m > a + b + c - 3)
            cout << "NO\n";
        else
        {
            if (m <= c - b)
                c -= m;
            else
            {
                m -= (c - b);
                c = b;
                if (m <= 2 * (b - a))
                {
                    b -= m / 2;
                    m -= m / 2;
                    c -= m;
                }
                else
                {
                    m -= 2 * (b - a);
                    b = a;
                    c = a;
                    int div = m / 3;
                    a = a - div;
                    b = b - div;
                    c = c - div;
                    if (m % 3 == 1)
                        c++;
                    else if (m % 3 == 2)
                    {
                        b++;
                        c++;
                    }
                }
            }
            // cout<<a<<" "<<b<<" "<<c<<endl;
            cout << arrPossible(a, b, c);
        }
    }
    return 0;
}