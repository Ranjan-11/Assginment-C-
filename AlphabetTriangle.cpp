/*Print the following pattern
A
A B
A B C
A B C D*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
             cout<<(char)(j + 64);  // --> char 65 == A (J + incearrse the value of 64+)
            cout<<" ";
        }
        cout<<endl;
    }
}