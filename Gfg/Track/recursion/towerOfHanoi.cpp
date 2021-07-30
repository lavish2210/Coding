// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long shifting(int x)
    {
        if (x == 1)
        {
            return 1;
        }
        return 1 + 2 * shifting(x - 1);
    }
    void moving(int x, int a, int b, int c)
    {
        if (x == 1)
        {
            cout << "move disk 1 from rod " << a << " to rod " << c << endl;
            return;
        }
        moving(x - 1, a, c, b);
        cout << "move disk " << x << " from rod " << a << " to rod " << c << endl;
        moving(x - 1, b, a, c);
    }

    long long toh(int n, int from, int to, int aux)
    {
        moving(n, from, aux, to);
        return shifting(n);
    }
};

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T; //testcases
    while (T--)
    {

        int N;
        cin >> N; //taking input N

        //calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

//Position this line where user code will be pasted.  // } Driver Code Ends