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
int equal_0and1(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    longSubarray(arr,n,0);
}
int main(){
    int n = 7;
    int arr[n] = {1,0,1,1,1,0,0};
    cout<<equal_0and1(arr,n);
}