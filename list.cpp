#include <iostream>
using namespace std;
int main(){
    int arr[12]={99,67,56,45,44,33,32,31,21,20,19};
    int a=sizeof(arr);
    for(int i=0;i<3;i++){
        cout<<arr[a-i]<<endl;
    }
    return 0;
}