#include <iostream>
using namespace std;
int main(){
    int arr[50],i,ele,pos,tot;
    cout<<"Enter the no. of element:";
    cin>>tot;
    cout<<"Enter "<<tot<<" array element:";
    for(i=0;i<tot;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be deleted:";
    cin>>ele;
    for(i=0;i<tot;i++){
        if(arr[i]==ele){
            pos=i;
        }
        else{
            pos=-1;
        }
    }
    if(pos==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<pos<<" position";
    }

    return 0;
}