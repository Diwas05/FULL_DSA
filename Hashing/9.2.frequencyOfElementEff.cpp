#include<iostream>
#include<unordered_map>
using namespace std;
void printFreq(int arr[],int n){
    unordered_map<int,int> h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto e:h){
        cout<<e.first<<" "<<e.second<<endl;
    }
}
int main(){
    int n =7;
    int arr[n] = {1,2,4,5,1,2,1};
    printFreq(arr,n);
}