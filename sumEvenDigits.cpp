//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Even number :";
    cin>>n;
    int lastDigits=0;
    int sum=0;
    while (n>0)
    {
        lastDigits=n%10;
        sum+=lastDigits;
        n/=10;
    }
    cout<<sum;


    
/*  take input is 24
    output is 6
    
*/
    

    
}