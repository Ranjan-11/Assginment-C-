/*Print the following pattern,   n = 4
    *
   **
  ***
 ****
  ***
   **
    *                                       */
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a Row :";
    cin>>n;
    // For upper Triangle
   for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++) // for Spaces
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++) // for left side Triangle star
        {
            cout<<"* ";
        }
        cout<<endl;
    }  
    //for Lower Triangle
    n-=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // for Spaces
        {
            cout<<"  ";
        }
        for (int j = 1; j <= n-i+1; j++) // for left side Triangle star
        {
            cout<<"* ";
        }
        cout<<endl;
    }  
}

    
