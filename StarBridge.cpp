#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    for (int q = 1; q <=2*n-1; q++)
        {
            cout<<"*";
        }
        cout<<endl;
    int m=n-1;
    int nsp=1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=m+1-i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <=nsp; k++)
        {
            cout<<" ";
        }
        nsp+=2;
        for (int j = 1; j <=m+1-i; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    
    }
    
}