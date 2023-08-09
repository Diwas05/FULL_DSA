#include <iostream>
#include <vector>
using namespace std;

class MyHash {
public:
    vector<int> arr;  // Use std::vector instead of int* arr
    int cap, size;
    MyHash(int c) {
        cap = c;
        size = 0;
        arr.resize(cap, -1);  // Initialize the vector with -1 values
    }
    int hash(int key) {
        return key % cap;
    }
    bool insert(int key) {  // Change the return type to bool
        if (size == cap) {
            return false;
        }
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key) {
            // move forward
            i = (i + 1) % cap;
        }
        if (arr[i] == key) {  // handling duplicates
            return false;
        } else {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool search(int key) {  // Change the return type to bool
        int h = hash(key);
        int i = h;
        while (arr[i] != -1) {
            if (arr[i] == key) {
                return true;
            }
            i = (i + 1) % cap;
            if (i == h) {  // for full array and if the key doesn't exist.
                return false;
            }
        }
        return false;
    }

    bool erase(int key){
        int h = hash(key);
        int i=h;
        while (arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
    }
};

int main() {
    MyHash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    bool s = mh.search(56);  // Change the variable type to bool
    if (s == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    mh.erase(56);
    s = mh.search(56);
    if (s == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
