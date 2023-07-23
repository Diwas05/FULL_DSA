#include <iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //Right sub array
        else if(key>arr[mid]){
            start = mid+1;
        }
        //Left Sub Array
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int even[]={1,2,3,4,5,6};
    int odd[]={3,4,5,6,7,8,9};
    int index = binary(even,6,6);
    cout<<index<<endl;
    
}