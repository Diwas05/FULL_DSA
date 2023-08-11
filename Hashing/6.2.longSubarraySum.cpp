#include <iostream>
#include <unordered_map>
using namespace std;
int longSubarray(int arr[],int n,int sum){
     unordered_map<int,int> m;
     int res = 0;
     int presum = 0;
     for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum==sum){
            res = i+1;
        }
        if(m.find(presum)==m.end()){
            m.insert({presum,i});
        }
        if(m.find(presum-sum)!=m.end()){
            res = max(res,i-m[presum-sum]);
        }
     }
     return res;
}
int main(){
    int size = 7;
    int sum = 6;
    int arr[size] = {1,2,3,1,1,4,2};
    int res = longSubarray(arr,size,sum);
    cout<<"The longest subarray with sum:"<<sum<<" is "<<res<<endl;
}