#include <iostream>
using namespace std;
char getMax(string s){
    int arr[26]={0};
    //create an array to count character
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int num = 0;
        //Lower case
        if(s[i]>='a' && s[i]<='z'){
            num = ch - 'a';
        }else{
            num = ch - 'A';
        }
        arr[num]++;
    } 
    //find maximum occuring character
    int maxi =-1;
    int ans = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
int main(){
    string s;
    cin>>s;
    cout<<getMax(s);
    return 0;
}