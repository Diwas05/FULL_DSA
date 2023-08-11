#include <iostream>
#include <unordered_set>
using namespace std;
bool subarrayGivenSum(int arr[],int n,int sum){
    unordered_set<int> h;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum ==sum) return true;
        if(h.find(presum-sum)!=h.end()){
            return true;
        }
        h.insert(presum);
    }
    return false;
}
int main(){
    int n = 7;
    int arr[n] = {2,3,4,5,6,7,1};
    int sum = 28;
    bool res = subarrayGivenSum(arr,n,sum);
    if(res){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}