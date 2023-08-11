#include <iostream>
using namespace std;
int longSum(int arr[],int n,int sum){
    int res = 0;
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            if(currsum==sum){
                res = max(res,j-i+1);
            }
        }
    }
    return res;
}
int main(){
    int size = 7;
    int sum = 6;
    int arr[size] = {1,2,3,1,1,4,2};
    int res = longSum(arr,size,sum);
    cout<<"The longest subarray with sum:"<<sum<<" is "<<res<<endl;
}