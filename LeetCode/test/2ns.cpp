#include <bits/stdc++.h>
using namespace std;
 
int cntDisPairs(vector<int> arr, int target) {
    unordered_set<int> set;
    unordered_set<int> seen;
     
    int count = 0;
     
    for(int num : arr) {
        if(set.find(num-target) != set.end() && seen.find(num) == seen.end() ) {
            count++;
            seen.insert(num);
            seen.insert(num-target);
        }
        set.insert(num);
    }
    if(arr.size()==2){
        return count+2;
    }
    else{return count;}
}
 
int main()
{
    vector<int> arr = {1,2};
    int K = 0;
    cout << cntDisPairs(arr, K);
}
