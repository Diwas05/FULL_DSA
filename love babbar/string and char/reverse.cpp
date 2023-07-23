#include <iostream>
using namespace std;
void reverse(char ch[]){
    int temp;
    int count =0;
    for(int i=0;ch[i]!=0;i++){
        count++;
    }
    cout<<count<<endl;
    int high =count -1;
    int low =0;
    while(low<high){
        temp = ch[low];
        ch[low]=ch[high];
        ch[high]=temp;
        low++;
        high--;
    }
}

int main(){
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    reverse(ch);
    cout<<ch<<endl;
    
}