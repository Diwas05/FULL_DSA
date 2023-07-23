#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the Array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;
}
int main(){
    int arr[15]={2,7};
    int n = 15;
    printArray(arr,n);
    //2nd Array
    int arr1[5]={1,2,3,4,5};
    int size = 5;
    printArray(arr1,size);
}