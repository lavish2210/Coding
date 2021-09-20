#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
using namespace std;

string braSeq(int n)
{
    string x = "";
    for (int i = 0; i < n; i++)
        x += "()";
    return x;
}

void eachBraSeq(int n)
{
    for (int i = 0; i < n; i++)
        cout << "(" + braSeq(i) + ")" + braSeq(n - 1 - i) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        eachBraSeq(n);
    }
    return 0;
}