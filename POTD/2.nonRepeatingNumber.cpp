#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> singleNumber(vector<int> nums) 
{
    // Code here.
    sort(nums.begin(), nums.end());
    int N = nums.size();
    vector<int> V;
    for(int i = 0; i < N; i++) {
        if(nums[i] == nums[i + 1]) {
            i++;
        } else {
            V.push_back(nums[i]);
        }
    }
    return V;
}

int main() 
{
    vector<int> nums = {4, 2, 4, 6, 3, 2, 7, 5};
    
    vector<int> result = singleNumber(nums);
    
    cout << "Single numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
