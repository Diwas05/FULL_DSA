int l_search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
#include <iostream>
using namespace std;
int main(){
    int n,x,result;
    int arr[10];
    cout<<"Enter the array length:"<<endl;
    cin>>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search:"<<endl;
    cin>>x;
    result=l_search(arr,n,x);
    if(result==-1){
        cout<<"Element not Found!!"<<endl;
    }
    else{
        cout<<"Element is found at index "<<result;
    }
    
}