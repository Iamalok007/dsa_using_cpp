#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0;
        int maxlen = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxlen = std::max(maxlen, sum);
            if (sum < 0) {
                sum = 0;
            }
        }

        return maxlen;
    }
};

int main() {
    // Get the size of the array from the user
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Get the array elements from the user
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Create an instance of the Solution class
    Solution solution;

    // Call the maxSubArray function and print the result
    int result = solution.maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << std::endl;

    return 0;
}
