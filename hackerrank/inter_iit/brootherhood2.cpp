#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,kone, ktwo;
    long long A1, B1 ,X , Y;
    cin >> t;
    while (t--)
    {
        cin >> A1 >> B1 >> kone >> ktwo;
        if (A1 == 0 && B1 == 0)
            cout << "YES"<<endl;
        else if (A1 == 0)
            cout << "NO"<<endl;
        else if (B1 == 0)
            cout << "NO"<<endl;
        else if (kone == 0 && ktwo == 0)
            cout << "NO"<<endl;
        else if (kone == 0)
            if (A1 % ktwo == 0 && B1 % ktwo == 0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        else if (ktwo == 0)
            if (A1 % kone == 0 && B1 % kone == 0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        else if (kone == ktwo)
            if (A1 % kone == 0 && B1 % kone == 0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        else
        {
            X = (ktwo * A1 - kone * B1);
            Y = (ktwo * B1 - kone * A1);

            if (ktwo > kone)
                if (X > 0 && Y > 0 && X % (ktwo * ktwo - kone * kone) == 0 && X % (ktwo * ktwo - kone * kone) == 0)
                    cout << "YES"<<endl;
                else
                    cout << "NO"<<endl;
            else
                if (X < 0 && Y < 0 && (abs(X)) % (kone * kone - ktwo * ktwo) == 0 && (abs(Y)) % (kone * kone - ktwo * ktwo) == 0)
                    cout << "YES"<<endl;
                else
                    cout << "NO"<<endl;
        }
    }
    return 0;
}