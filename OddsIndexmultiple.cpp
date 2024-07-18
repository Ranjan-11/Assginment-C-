/*Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    //input
    for (int i = 0; i <= n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    // changing array
    for (int i = 0; i < n; i++)
    {
        if(i%2!=0) arr[i] *= 2;
        
        else arr[i] += 10;
        
        cout<<arr[i]<<" ";
    }
}