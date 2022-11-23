#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &arr, int target)
{

    int n = arr.size();

    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr;
    int target, arrsize;
    cin >> arrsize >> target;
    for (int i = 0; i < arrsize; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << search(arr, target);
    return 0;
}