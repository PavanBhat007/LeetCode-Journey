/*
    53. Maximum Subarray [MEDIUM]
    
    Given an integer array nums, find the subarray
    with the largest sum, and return its sum.

    [KADANE'S ALGORITHM]
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max = INT_MIN, sum = 0;

    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;
    }

    return max;
}

int main() {
    int n;
    cout << "SIZE OF ARRAY: ";
    cin >> n;

    vector <int> arr (n);
    cout << "ARRAY: ";
    for(int i=0; i<arr.size(); i++)
        cin >> arr[i];

    cout << "MAX SUBARRAY SUM: " << maxSubArray(arr) << endl;
    return 0;
}