#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define ll long long
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define usi unordered_set<int>
#define usc unordered_set<char>

using namespace std;

void filllps(string ptt, int lps[])
{
    int len = 0;
    for (int i = 1; i < ptt.length();)
        if (ptt[i] == ptt[len])
            lps[i++] = ++len;
        else if (len == 0)
            i++;
        else
            len = lps[len - 1];
}
void kmp(string txt, string ptt)
{
    int i = 0, j = 0;

    int lps[ptt.length()] = {0};
    filllps(ptt, lps);

    // fori(ptt.length())
    //         cout
    //     << lps[i] << " ";
    // cout << endl;

    while (i < txt.length())
    {
        while (txt[i] == ptt[j] && i<txt.length())
        {
            i++;
            j++;
        }

        if (j == ptt.length())
        {
            cout << i - ptt.length() << " ";
            j = lps[j - 1];
        }

        if (txt[i] != ptt[j])
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ptt, txt;
    cin >> txt >> ptt;

    kmp(txt, ptt);

    return 0;
}