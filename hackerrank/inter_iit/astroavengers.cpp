#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;
int laser(int x){
    int m = sqrt(x);
    if(m==1){
        return 1;
    }
    return 1+(m*laser(m));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
    for(int i = 0; i<n-k;i++){
        res += laser(a[i]);
    }
    long long m = 1000000007;
    cout << (res + k)%m<<endl;
    return 0;
}