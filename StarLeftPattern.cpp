/*Print the following pattern ,   Input n = 4
*
**
***
****
***
**
*                   */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Row :";
    cin>>n;
    // For upper Triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;     
    }
    //for Lower Triangle
    int m = n-1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;     
    }
}
    