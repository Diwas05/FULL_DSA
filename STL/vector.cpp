#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element of 2nd index:"<<v.at(2)<<endl;
    cout<<"First Element:"<<v.front()<<endl;
    cout<<"Last Element:"<<v.back()<<endl;
    cout<<"Before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;cout<<endl;
    v.pop_back();
    cout<<"After pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
}