/*Print the following pattern
1 2 3 4
1 2 3
1 2
1      */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for (int k = 1; k <=n+1-i; k++)  // n+1-1 --> used in when Print Inverse thing
            {
                cout<<k;
                cout<<" ";
            }
        cout<<endl;
    }
}