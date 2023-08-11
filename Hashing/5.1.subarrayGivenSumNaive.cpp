#include <iostream>
using namespace std;
bool subarrayGivenSum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            if(currsum==0){
                return true;
            }
            if(currsum==sum){
                return true;
            }
        }
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