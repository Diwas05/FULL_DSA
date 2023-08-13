#include <iostream>
#include <unordered_set>
using namespace std;
int countDist(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}
int main(){
    int n = 7;
    int arr[n] = {1,2,3,2,3,1,5};
    cout<<countDist(arr,n)<<endl;
}