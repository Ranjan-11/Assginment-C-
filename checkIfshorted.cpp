/*Check if the given array is sorted or not*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    //input
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    bool flag=true; // true means sorted
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        flag=false; // false means sorted
    }
    if(flag==true)
    cout<<"Array is Sorted"<<endl;
    else cout<<"Array is unSorted";
    
}