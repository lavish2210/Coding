#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find largest rectangular area possible in a given histogram.
    /* long long getMaxArea(long long arr[], int n)
    {
        Your code here
            stack<long long> lst, rst;
            vector<long long> lc, rc;
            long long i = 0;
            while (i < n)
            {
                if (lst.size() == 0)
                {
                    lc.push_back(i);
                    lst.push(i);
                    i++;
                }
                else
                {
                    long long x = lst.top();
                    if (arr[x] < arr[i])
                    {
                        lc.push_back(i - x - 1);
                        lst.push(i);
                        i++;
                    }
                    else
                    {
                        lst.pop();
                    }
                }
            }
            i = n - 1;
            while (i >= 0)
            {
                if (rst.size() == 0)
                {
                    rc.push_back(n - 1 - i);
                    rst.push(i);
                    i--;
                }
                else
                {
                    long long x = rst.top();
                    if (arr[x] < arr[i])
                    {
                        rc.push_back(x - i - 1);
                        rst.push(i);
                        i--;
                    }
                    else
                    {
                        rst.pop();
                    }
                }
            }
            reverse(rc.begin(),rc.end());
            long long res = 0;
            i = 0;
            auto j = lc.begin();
            auto k = rc.begin();
            while (j != lc.end())
            {
                res = max(res, arr[i] * ((*j) + (*k) + 1));
                i++;
                j++;
                k++;
            }
            return res;
    } */
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> wst;
        int i = 0 , x;
        long long res = 0;
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
};

// { Driver Code Starts.

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.getMaxArea(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends