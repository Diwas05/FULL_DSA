#include <iostream>
using namespace std;
int getSum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The sum:"<<getSum(arr,size)<<endl;
}