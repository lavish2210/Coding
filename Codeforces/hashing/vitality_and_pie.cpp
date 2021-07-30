#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    unordered_multiset<char> key;
    for (int i = 0; i < n - 1; i++)
    {
        key.insert(s[2 * i]);
        char c = (char)(((int)s[(2 * i) + 1]) + 32);
        if (key.find(c) != key.end())
            key.erase(key.find(c));
        else
            count++;
    }
    cout << count << endl;
    return 0;
}