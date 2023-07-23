#include <iostream>
using namespace std;
int main(){
  int n=10;
  int arr[10];
  int i=0;
  while(n!=0){
    int digit=n%2;
    arr[i]=digit;
    n=n/2;
    i++;
  }
  int size=sizeof(arr) / sizeof(arr[0]);
  cout<<size<<endl;
  for(int j=0;j<4;j++){
    cout<<arr[j]<<endl;
  }
}