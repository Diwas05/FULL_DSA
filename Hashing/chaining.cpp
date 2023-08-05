#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class MyHash{
    public:
    int bucket;
    list<int> *table;
    MyHash(int b){
        this->bucket = b;
        table = new list<int> [b];
    }
    void insert(int key){
        int i = key % bucket;
        table[i].push_back(key);
    }

    void remove(int key){
        int i = key % bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key%bucket;
        for(auto x:table[i]){
            if(x==key)
                return true;
        }
        return false;
    }

    void printHashTable() {
        for (int i = 0; i < bucket; i++) {
            cout << "Bucket " << i << ": ";
            for (auto x : table[i]) {
                cout << x << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};
int main(){
    MyHash* hash = new MyHash(7);
    hash->insert(70);
    hash->insert(71);
    hash->insert(9);
    hash->insert(56);
    hash->insert(72);

    int search = hash->search(56);
    if(search){
        cout<<"The element is found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    cout << "Hash Table: " << endl;
    hash->printHashTable();

}
