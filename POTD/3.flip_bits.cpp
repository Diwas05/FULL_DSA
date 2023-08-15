// Given an array A[] consisting of 0’s and 1’s. A flip operation is one in which you turn 1 into 0 and a 0 into 1. You have to do at most one “Flip” operation of any subarray. Formally, select a range (l, r) in the array A[], such that (0 ≤ l ≤ r < n) holds and flip the elements in this range to get the maximum ones in the final array. You can possibly make zero operations to get the answer.

// Example 1:

// Input:
// N = 5
// A[] = {1, 0, 0, 1, 0} 
// Output:
// 4
// Explanation:
// We can perform a flip operation in the range [1,2]
// After flip operation array is : [ 1 1 1 1 0 ]
// Count of one after fliping is : 4
// [Note: the subarray marked in bold is the flipped subarray]

#include <iostream>
int maxOnes(int a[], int n) {
    int count = 0;  // Count of consecutive 0s
    int max = 0;    // Maximum count of consecutive 0s
    int one = 0;    // Count of 1s
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            one++;  // Increment the count of 1s
        
        if (a[i] == 0) {
            count++;  // Increment the count of consecutive 0s
            if (max < count)
                max = count;  // Update the maximum count if needed
        } else if (count != 0) {
            count--;  // Decrement the count of consecutive 0s
        }
    }
    
    if (max < count)
        max = count;  // Update the maximum count if needed
    return max + one;  // Return the sum of maximum 0s count and 1s count
}


int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int a[n];
    std::cout << "Enter the elements (0s and 1s) of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int result = maxOnes(a, n);
    std::cout << "Maximum count of 1s after flip operation: " << result << std::endl;

    return 0;
}
