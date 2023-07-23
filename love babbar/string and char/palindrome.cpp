#include <iostream>
using namespace std;
char toLowerCase(int ch){

    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        return ch - 'A' + 'a';
    }
}
int size_of(char ch[]){
    int count =0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
bool pal(char ch[],int size){
    int low = 0;
    int high = size-1;
    while(low<=high){
        //Converting all the upper_case letter to lower_case character(using function toLowerCase())
        if(toLowerCase(ch[low])==toLowerCase(ch[high])){
            low++;
            high--;
        }else{
            return false;
        }
    }
}
int main()
{
    char ch[20];
    cout<<"Enter the desired string:"<<endl;
    cin>>ch;
    int size = size_of(ch);
    int result = pal(ch,size);
    if(result == 0){
        cout<<"The string is not palindrome"<<endl;
    }else{
        cout<<"The String is palindrome"<<endl;
    }
}