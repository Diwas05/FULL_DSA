#include <iostream>
using namespace std;
int equal_0And1(int arr[],int n){
    int res = 0;
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){
                arr[j]=-1;
            }
            currsum+=arr[j];
            if(currsum == 0){
                res = max(res,j-i+1);
            }
        }
    }
    return res;
}
int main(){
    int size = 4;
    // int sum = 6;
    int arr[size] = {1,1,1,1};
    int res = equal_0And1(arr,size);
    cout<<"The longest subarray with equal 1 and 0:"<<res<<endl;
}