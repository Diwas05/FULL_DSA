#include <iostream>
using namespace std;
void insert(bool arr[],int n,int x){
    arr[x]=true;
}
void search(bool arr[],int n,int x){
    if(arr[x]==true){
        cout<<"The element is present at index:"<<x<<endl;
    }else{
        cout<<"The element is not found"<<endl;
    }
}
void delete1(bool arr[],int n,int x){
     if(arr[x]==true){
        arr[x]=false;
     }else{
        cout<<"The element is not found"<<endl;
     }
}
int main(){
    int n=1000;
    bool arr[n]={false};
    search(arr,n,10);
    insert(arr,n,10);
    search(arr,n,10);
}