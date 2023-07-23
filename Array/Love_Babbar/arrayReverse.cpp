#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int i, temp[100];
    for(i=0;i<size;i++){
        temp[i] = arr[size-i-1];
    }
    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
int main(){
    int size =5;
    int arr[100] = {1,2,3,4,5};
    reverse(arr,size);
   // printArray(arr,size);

    
    
}