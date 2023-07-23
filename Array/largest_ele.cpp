int size(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count++;
    }
    return count;
}
#include <iostream>
using namespace std;
int main(){
    int temp,result,n=10;
    int arr[n]={22,33,55,44,3,21,5,7,3,1};
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    result = size(arr,10);
    cout<<"The largest element indexed at "<<result-1<<" is "<<arr[result-1]<<endl; 
}