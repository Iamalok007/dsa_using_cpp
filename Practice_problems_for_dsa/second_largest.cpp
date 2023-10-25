#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
   // Sort the input vector in ascending order
   std::sort(a.begin(), a.end());
   
   // Create a new vector to store the second largest and second smallest elements
   std::vector<int> arr;
   
   // Add the second largest element (at index n-2) to the result vector
   arr.push_back(a[n - 2]);
   
   // Add the second smallest element (at index 1) to the result vector
   arr.push_back(a[1]);
   
   return arr;
}

int main() {
   std::vector<int> a = {10, 5, 7, 3, 9, 2, 8, 4, 6, 1};
   int n = a.size();
   
   std::vector<int> result = getSecondOrderElements(n, a);
   
   // Display the result
   std::cout << "Second Largest: " << result[0] << std::endl;
   std::cout << "Second Smallest: " << result[1] << std::endl;
   
   return 0;
}
