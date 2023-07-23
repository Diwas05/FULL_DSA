int check_sorted(int arr[],int n){
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]){
            flag=false;
        }
    }
    if(flag==true){
        return -1;
    }
    
}
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int result=check_sorted(arr,7);
    if(result==-1){
        cout<<"The array is unsorted!!"<<endl;
    }
    else{
        cout<<"The array is sorted"<<endl;
    }
}