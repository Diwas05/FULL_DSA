int insertion(int arr[],int n,int cap,int x,int pos){
    if(n==cap){
        return n;
    }
    int idx = pos - 1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}
#include <iostream>
using namespace std;
int main(){
    int n,x,result,pos,cap;
    int arr[10];
    cout<<"Enter the array length:"<<endl;
    cin>>n;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to insert:"<<endl;
    cin>>x;
    cout<<"Enter the position of the element (indexing from 1):"<<endl;
    cin>>pos;
    cout<<"Enter the capacity of the array:"<<endl;
    cin>>cap;
    result=insertion(arr,n,cap,x,pos);
    if(result==n){
        cout<<"Array is full!!"<<endl;
    }
    else{
        cout<<"Successfully inserted at index"<<pos-1;
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
    }

}
