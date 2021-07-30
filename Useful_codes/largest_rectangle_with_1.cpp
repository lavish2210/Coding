// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
public:
    int getMaxArea(int arr[], int n)
    {
        // Your code here
        stack<int> wst;
        int i = 0, x;
        int res = 0;
        while (i < n)
        {
            if (wst.size() == 0 || arr[wst.top()] <= arr[i])
                wst.push(i++);
            else
            {
                x = wst.top();
                wst.pop();
                if (wst.size() == 0)
                    res = max(res, arr[x] * i);
                else
                    res = max(res, arr[x] * (i - wst.top() - 1));
            }
        }
        while (wst.empty() == false)
        {
            x = wst.top();
            wst.pop();
            if (wst.size() != 0)
                res = max(res, arr[x] * (n - wst.top() - 1));
            else
                res = max(res, arr[x] * n);
        }
        return res;
    }
    void change_matrix(int M[MAX][MAX], int n, int m)
    {
        for (int i = 1; i < n; i++)
            for (int j = 0; j < m; j++)
                if (M[i][j] == 1)
                    M[i][j] = M[i - 1][j] + 1;
    }
    int maxArea(int M[MAX][MAX], int n, int m)
    {
        change_matrix(M, n, m);
        int res = 0;
        for (int i = 0; i < n; i++)
            res = max(res , getMaxArea(M[i],m));
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
// } Driver Code Ends