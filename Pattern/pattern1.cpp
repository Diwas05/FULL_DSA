#include <iostream>
using namespace std;
int main(){
    int i,j;
   // i=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<4-j+1;
        }
        cout<<endl;
    }
    return 0;
}

//OR,
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"Enter the row value:"<<endl;
//     cin>>r;
//     cout<<"Enter the column value:"<<endl;
//     cin>>c;
//     for(int i=r;i>0;i--){
//         for(int j=c;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }