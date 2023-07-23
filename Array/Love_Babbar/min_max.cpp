#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[],int size){
    int min = INT_MAX;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    cout<<"Max value is:"<<max(arr,size)<<endl;
    cout<<"Min value is:"<<min(arr,size)<<endl;
}