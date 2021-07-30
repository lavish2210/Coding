#include <bits/stdc++.h>
#define pii pair<int, int>
#define fori(s, n) for (int i = s; i < n; i++)
#define forvi(v) for (auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int, int>
#define usi unordered_set<int>

using namespace std;

void subSets(string s,string curr,int i,vector<string> &v)
{
    if(i==s.length()){
        v.push_back(curr);
        return;
    }
    subSets(s,curr,i+1,v);
    subSets(s,curr+s[i],i+1,v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<string> v;
    subSets(s,"",0,v);
    forvi(v)
    {
        cout <<"'"<<val(i)<<"' ";
    }
    cout << endl;
    return 0;
}