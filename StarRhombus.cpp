/*Print the following pattern, n = 4
   ****
  ****
 ****
****               */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++) // for Spaces
        {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++) // for star
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
