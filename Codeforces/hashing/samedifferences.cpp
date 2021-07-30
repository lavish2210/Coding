#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x,count=0;
        cin>>n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x-i]++;
        }
        for(auto i = m.begin();i!=m.end();i++){
            x = (*i).second;
            count += (x*(x-1))/2;
        }
        cout<<count<<endl;
    }
    return 0;
}