#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
        int height;
    
    public:
        int getAge(){
            return this->age;
        }
        void setAge(int a){
            this->age=a;
        }

};

int main(){
    int x;
    Student first;
    cout<<"The flow is Correct"<<endl;
    cout<<"Enter the age:"<<endl;
    cin>>x;
    first.setAge(x);
    cout<<"The age of first student is:"<<first.getAge()<<endl;
    return 0;

}