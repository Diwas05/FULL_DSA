#include <iostream>
using namespace std;
bool subarray0sum(int arr[],int n){
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            currsum += arr[j];
            if(currsum == 0){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int size = 7;
    int arr[size] = {1,2,-3,4,5,6,7};
    bool res = subarray0sum(arr,size);
    if(res){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}