
//! Write a program to find the largest sum contiguous subarray (Kadane's algorithm).

#include<iostream>
#include<vector>
using namespace std;

int largestSubarraySum(vector<int> &arr) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() { 

    vector<int> arr { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    int maxSum = largestSubarraySum(arr);

    cout << "The largest sum of contiguous subarray is: " << maxSum << endl;

    return 0;
}

