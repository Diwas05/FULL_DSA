int sum(int nums,int target){

        //int nums = [2,7,11,15];
        //int target = 9;
        int n = 0;
        int i,j;
        for(i = 0;i<sizeof(nums);i++){
            for(j = i+1;j<sizeof(nums);j++){
                n = nums[i]+nums[j];
                if(target == n){
                    return [i , j];
                }
            }
        }
}
#include <iostream>
using namespace std;
int main(){
    int nums[4] = {2,7,11,15};
    int t = 9;
    int result = sum(nums,t);
    cout<<result;
}