#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int, int> mapp;

std::vector<int> countFrequency(int n, int x, std::vector<int> &nums) {
    // Initialize the map to store frequency counts
    for (int i = 0; i < n; i++) {
        mapp[nums[i]]++;
    }

    // Create a vector to store the frequency counts of numbers from 0 to x-1
    std::vector<int> result;
    for (int i = 0; i < x; i++) {
        if (mapp.find(i) != mapp.end()) {
            result.push_back(mapp[i]);
        } else {
            result.push_back(0);
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = nums.size();
    int x = 6;  // Range of numbers from 0 to 5

    std::vector<int> result = countFrequency(n, x, nums);

    // Display the frequency counts
    for (int i = 0; i < x; i++) {
        std::cout << "Frequency of " << i << ": " << result[i] << std::endl;
    }

    return 0;
}
