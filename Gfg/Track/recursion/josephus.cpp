#include<bits/stdc++.h>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int,int>
#define usi unordered_set<int>

using namespace std;

int josephus(int n,int k){
    if(n==1){
        return 0;
    }
    return (k+josephus(n-1,k))%n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    cout<<josephus(n,k);

    cout<<endl;
    return 0;
}