/*Print the following pattern  m = 4, n = 6
******
*    *
*    *
******                         */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    int m;
    cout<<"Enter a Col :";
    cin>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i==1 || i==n || j==1 || j==m)
            cout<<"*  ";
            else
            cout<<"   ";
        }
        cout<<endl;
    }
}