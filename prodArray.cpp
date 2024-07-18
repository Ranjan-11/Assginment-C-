//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    int prod=1;
    //input
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= n-1; i++)
    {
        prod = prod * arr[i];
    }
    cout<<prod;
    

}