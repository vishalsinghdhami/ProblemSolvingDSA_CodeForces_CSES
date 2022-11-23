#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> arr1, vector<int> arr2)
{

    // merging sorted array
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] > arr2[j])
        {
            ans.push_back(arr2[j]);
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while (i < arr1.size())
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        ans.push_back(arr2[i]);
        j++;
    }
    return ans;
}
vector<int> distribute(vector<int> arr, int start, int end)
{
    if (start == end)
    {
        vector<int> v;
        v.push_back(arr[start]);
        return v;
    }
    int mid = (start + end) / 2;
    // 1st half

    vector<int> arr1 = distribute(arr, start, mid);

    // 2nd half
    vector<int> arr2 = distribute(arr, mid + 1, end);

    return merge(arr1, arr2);
}

int main()
{

    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    int n = 5;
    vector<int> ans = distribute(arr, 0, 4);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }

    return 0;
}