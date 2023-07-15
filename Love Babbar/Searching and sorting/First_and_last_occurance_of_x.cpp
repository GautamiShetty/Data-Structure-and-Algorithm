//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOccurance(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int first = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return first;
}

int lastOccurance(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return last;
}
vector<int> find(int arr[], int n, int x)
{
    vector<int> v(2, 0);
    v.front() = firstOccurance(arr, n, x);
    v.back() = lastOccurance(arr, n, x);
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends