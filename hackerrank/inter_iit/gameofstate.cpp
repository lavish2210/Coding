#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, w;
        cin >> x >> w;
        if (x >= w)
            cout << "B" << endl;
        else{
            w-=x;
            long long ca = x-1,cb=2;
            while(true){
                if(w<=ca){
                    cout<<"A"<<endl;
                    break;
                }
                else if(w<=ca+cb){
                    cout<<"B"<<endl;
                    break;
                }
                w-=ca+cb;
                ca*=2;
                cb*=2;
            }
        }
    }
    cout << endl;
    return 0;
}