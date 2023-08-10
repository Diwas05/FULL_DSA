#include <iostream>
#include <unordered_set>
using namespace std;
bool subarray0Sum(int arr[],int n){
    unordered_set<int> h;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(h.find(presum)!=h.end()){
            return true;
        }
        if(presum == 0){
            return true;
        }
        h.insert(presum);
    }
    return false;
}
int main(){
    int n = 7;
    int arr[n] = {1,2,3,-6,5,8,7};
    bool res = subarray0Sum(arr,n);
    if(res){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}