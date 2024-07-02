//WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int x=0;
    int z=n;
    while (z>0)
    {
        x*=10;
        x+=(z%10);
        z/=10;
    }
    cout<<n+x<<endl;
}